#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"

class LogoutUI
{
public:
	void showMemberInformation(FILE* out_fp, string id);
};

class Logout
{
private:
	Member member;
	LogoutUI logoutUI;

public:
	Logout();
	Logout(Member* member);
	void startInterface(FILE* out_fp, Member* member);
};
