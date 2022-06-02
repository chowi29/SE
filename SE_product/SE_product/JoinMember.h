#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"
#include <tuple>

class JoinMemberUI
{
public:
	tuple<string, string, string, string> inputUserInformation(FILE* in_fp, FILE* out_fp);
	void showUserInformation(FILE* out_fp, string memberName, string mebmerIdNumber, string id, string password);
};

class JoinMember
{
private:
	Member member;
	JoinMemberUI joinMemberUI;

public:
	void startInterface(FILE* in_fp, FILE* out_fp, int index);
};

