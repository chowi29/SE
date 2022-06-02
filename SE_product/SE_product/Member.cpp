#pragma once
#include "Member.h"



void MemberList::setMemberName(string memberName) {
	this->memberName = memberName;
}

void MemberList::setMemberIdNumber(string memberIdNumber) {
	this->memberIdNumber = memberIdNumber;
}

void MemberList::setId(string id) {
	this->id = id;
}

void MemberList::setPassword(string password) {
	this->password = password;
}

string MemberList::getId() {
	return this->id;
}

string MemberList::getPassword() {
	return this->password;
}

void Member::addMember(string memberName, string mebmerIdNumber, string id, string password, int index) {
	memberList[index].setMemberName(memberName);
	memberList[index].setMemberIdNumber(mebmerIdNumber);
	memberList[index].setId(id);
	memberList[index].setPassword(password);
}

void Member::deleteMember(string id) {
	for (int i = 0; i < 100; i++) {
		if (memberList[i].id == id) {
			//»èÁ¦.
		}
	}
}
