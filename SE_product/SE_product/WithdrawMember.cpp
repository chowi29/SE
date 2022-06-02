#pragma once
#include "WithdrawMember.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;



void WithdrawMemberUI::showUserInformation(FILE* out_fp, string id) {

	//cout << id << endl;


	char c_id[20];
	strcpy(c_id, id.c_str());

	//fprintf(out_fp, "%s", &sellerName);
	fprintf(out_fp, "1.1. È¸¿ø Å»Åð \n>%s  \n\n", &c_id);
}

void WithdrawMember::startInterface(FILE* out_fp, Member* member) {

	string id;

	id = member->deleteMember();
	withdrawMemberUI.showUserInformation(out_fp, id);
}

WithdrawMember::WithdrawMember() {

}
WithdrawMember::WithdrawMember(Member* member) {
	this->member = *member;
}
