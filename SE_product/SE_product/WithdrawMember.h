#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"

class WithdrawMemberUI
{
public:
	void showUserInformation(FILE* out_fp, string id);
};

class WithdrawMember
{
private:
	Member member;
	WithdrawMemberUI withdrawMemberUI;

public:
	WithdrawMember();
	WithdrawMember(Member* member);
	void startInterface(FILE* out_fp, Member* member);
};
