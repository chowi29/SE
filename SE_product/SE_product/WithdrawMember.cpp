#pragma once
#include "WithdrawMember.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;



void WithdrawMemberUI::showUserInformation(FILE* out_fp, string id) {

	cout << id << endl;


	char c_id[20];
	strcpy(c_id, id.c_str());

	//fprintf(out_fp, "%s", &sellerName);
	fprintf(out_fp, "1.2. 회원탈퇴\n> %s \n\n", &c_id);
}

void WithdrawMember::startInterface(FILE* out_fp) {

	string id;


	//ProductList productList = product->getProduct(out_fp, productName);
	member.deleteMember(id); //이 회원의 아이디를 받아서 리스트에서 아이디를 찾아서 삭제
	withdrawMemberUI.showUserInformation(out_fp, id);
}

