#pragma once
#include <stdio.h> 
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class MemberList
{
public:
	string memberName = "Jo";
	string memberIdNumber = "123456";
	string id = "Jo";
	string password = "0000";
	int memberIndex;
	bool check_longin = false;
	ProductList sellingProductList[100];
	int sellingProductIndex = 0;

	void setMemberName(string memberName);

	void setMemberIdNumber(string memberIdNumber);

	void setId(string id);

	void setPassword(string password);

	string getId();

	string getPassword();

	void addSellingProduct(ProductList sellingProductList);

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
	void addSellingProduct(ProductList sellingProductList);


};