#pragma once
#include "Logout.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;



void LogoutUI::showMemberInformation(FILE* out_fp, string id) {

	cout << id << endl;


	char c_id[20];
	strcpy(c_id, id.c_str());

	//fprintf(out_fp, "%s", &sellerName);
	fprintf(out_fp, "2.2 �α׾ƿ�\n> %s\n\n", &c_id);
}

void Logout::startInterface(FILE* out_fp) {

	string id;


	//ProductList productList = product->getProduct(out_fp, productName);
	//id�� ����� ���� �޾ƿ;���. �׳� get���� �ص� �ɰ� ��������.
	logoutUI.showMemberInformation(out_fp, id);
}

