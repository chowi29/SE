#pragma once
#pragma once
#include <stdio.h> 
#include <iostream>
#include <string>
using namespace std;

class MemberList
{
public:
	string memberName = "Jo";
	string memberIdNumber = "123456";
	string id = "Jo";
	string password = "0000";

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
	void addMember(string memberName, string mebmerIdNumber, string id, string password, int index);
	void deleteMember(string id);

};