#pragma once
#include "JoinMember.h"
#pragma warning(disable: 4996)
#include <iostream>
#include <tuple>
using namespace std;


tuple<string, string, string, string> JoinMemberUI::inputUserInformation(FILE* in_fp, FILE* out_fp) {

	char c_memberName[20];
	char c_memberIdNumber[20];
	char c_id[20];
	char c_password[20];
	fscanf(in_fp, "%s %s %s %s", &c_memberName, &c_memberIdNumber, &c_id, &c_password);
	string memberName(c_memberName);
	string memberIdNumber(c_memberIdNumber);
	string id(c_id);
	string password(c_password);

	return tuple<string, string, string, string>(memberName, memberIdNumber, id, password);
}


void JoinMemberUI::showUserInformation(FILE* out_fp, string memberName, string memberIdNumber, string id, string password) {

	cout << memberName << memberIdNumber << id << password << endl;

	char c_memberName[20];
	char c_memberIdNumber[20];
	char c_id[20];
	char c_password[20];
	strcpy(c_memberName, memberName.c_str());
	strcpy(c_memberIdNumber, memberIdNumber.c_str());
	strcpy(c_id, id.c_str());
	strcpy(c_password, password.c_str());
	//fprintf(out_fp, "%s", &sellerName);
	fprintf(out_fp, "1.1. 회원가입\n> %s %s %s %s \n\n", &c_memberName, &c_memberIdNumber, &c_id, &c_password);
}

void JoinMember::startInterface(FILE* in_fp, FILE* out_fp, int index) {


	string memberName;
	string memberIdNumber;
	string id;
	string password;

	tuple<string, string, string, string> userInformation = joinMemberUI.inputUserInformation(in_fp, out_fp); //boundary class에게 회원정보 입력받으라고 요청
	memberName = get<0>(userInformation);
	memberIdNumber = get<1>(userInformation);
	id = get<2>(userInformation);
	password = get<3>(userInformation);

	//ProductList productList = product->getProduct(out_fp, productName);
	member.addMember(memberName, memberIdNumber, id, password, index);
	joinMemberUI.showUserInformation(out_fp, memberName, memberIdNumber, id, password);
}

