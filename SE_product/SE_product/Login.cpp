#pragma once
#include "Login.h"
#pragma warning(disable: 4996)
#include <iostream>
#include <tuple>
using namespace std;


tuple<string, string> LoginUI::inputMemberId(FILE* in_fp, FILE* out_fp) {

	char c_id[20];
	char c_password[20];
	fscanf(in_fp, "%s %s", &c_id, &c_password);
	string id(c_id);
	string password(c_password);

	return tuple<string, string>(id, password);
}


void LoginUI::showMemberInformation(FILE* out_fp, string id, string password) {

	cout << id << password << endl;


	char c_id[20];
	char c_password[20];
	strcpy(c_id, id.c_str());
	strcpy(c_password, password.c_str());
	//fprintf(out_fp, "%s", &sellerName);
	fprintf(out_fp, "2.1. 로그인\n> %s %s\n\n", &c_id, &c_password);
}

void Login::startInterface(FILE* in_fp, FILE* out_fp) {

	string id;
	string password;

	tuple<string, string> memberInformation = loginUI.inputMemberId(in_fp, out_fp); //boundary class에게 회원정보 입력받으라고 요청
	id = get<0>(memberInformation);
	password = get<1>(memberInformation);

	//ProductList productList = product->getProduct(out_fp, productName);
	//로그인 했다는것을 어떻게 표현 해야하나..? 그냥 파일 입출력만 하면 될 것 같은데...? -> 아이디랑 패스워드 찾아서 true 리턴. 
	loginUI.showMemberInformation(out_fp, id, password);
}

