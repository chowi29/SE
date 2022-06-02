#pragma once
#include "Member.h"

void MemberList::setMemberName(string memberName)
{
	this->memberName = memberName;
}

void MemberList::setMemberIdNumber(string memberIdNumber)
{
	this->memberIdNumber = memberIdNumber;
}

void MemberList::setId(string id)
{
	this->id = id;
}

void MemberList::setPassword(string password)
{
	this->password = password;
}

string MemberList::getId()
{
	return this->id;
}

string MemberList::getPassword()
{
	return this->password;
}

void Member::addMember(string memberName, string memberIdNumber, string id, string password, int memberIndex)
{
	memberList[memberIndex].setMemberName(memberName);
	memberList[memberIndex].setMemberIdNumber(memberIdNumber);
	memberList[memberIndex].setId(id);
	memberList[memberIndex].setPassword(password);
	memberList[memberIndex].memberIndex = memberIndex;
}

string Member::deleteMember()
{
	for (int i = 0; i < 100; i++)
	{
		if (memberList[i].check_longin == true)
		{
			string result = memberList[i].getId();
			memberList[i].check_longin = false;
			for (int j = i; j < 99; j++)
			{
				memberList[j].memberName = memberList[j + 1].memberName;
				memberList[j].memberIdNumber = memberList[j + 1].memberIdNumber;
				memberList[j].id = memberList[j + 1].id;
				memberList[j].password = memberList[j + 1].password;
				memberList[j].memberIndex--;
			}
			return result;
		}
	}
	return "None";
}

void Member::login(string id)
{
	for (int i = 0; i < 100; i++)
	{
		if (memberList[i].id == id)
		{
			memberList->check_longin = true;
		}
	}
}

string Member::logout()
{
	for (int i = 0; i < 100; i++)
	{
		if (memberList[i].check_longin == true)
		{
			memberList->check_longin = false;
			return memberList[i].getId();
		}
	}
	return memberList[99].getId();
}

string Member::findMember()
{
	for (int i = 0; i < 100; i++)
	{
		if (memberList[i].check_longin == true)
		{
			return memberList[i].getId();
		}
	}
	return memberList[99].getId();

}
