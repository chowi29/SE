#pragma once
#include "Logout.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;



void LogoutUI::showMemberInformation(FILE* out_fp, string id) {

	//cout << id << endl;


	char c_id[20];
	strcpy(c_id, id.c_str());

	//fprintf(out_fp, "%s", &sellerName);
	fprintf(out_fp, "2.2. ·Î±× ¾Æ¿ô \n>%s \n\n", &c_id);
}

void Logout::startInterface(FILE* out_fp, Member* member) {

	string id;


	id = member->logout();
	logoutUI.showMemberInformation(out_fp, id);
}

Logout::Logout() {

}
Logout::Logout(Member* member) {
	this->member = member;
}

