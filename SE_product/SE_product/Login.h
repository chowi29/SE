#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"
#include <tuple>

class LoginUI
{
public:
	tuple<string, string> inputMemberId(FILE* in_fp, FILE* out_fp);
	void showMemberInformation(FILE* out_fp, string id, string password);
};

class Login
{
private:
	Member* member;
	LoginUI loginUI;

public:
	Login();
	Login(Member* member);
	void startInterface(FILE* in_fp, FILE* out_fp, Member* member);
};
