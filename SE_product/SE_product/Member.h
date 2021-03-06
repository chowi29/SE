#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class MemberList
{
public:
	string memberName = "";
	string memberIdNumber = "";
	string id = "";
	string password = "";
	int memberIndex = 0;
	bool check_longin = false;

	void setMemberName(string memberName);

	void setMemberIdNumber(string memberIdNumber);

	void setId(string id);

	void setPassword(string password);

	string getId();

	string getPassword();
};

class Member
{
private:
	MemberList memberList[100];

public:
	void addMember(string memberName, string memberIdNumber, string id, string password, int memberIndex);
	string deleteMember();
	void login(string id);
	string logout();
	string findMember();
};