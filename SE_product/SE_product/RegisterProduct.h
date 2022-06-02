#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"
#include "Product.h"
#include <tuple>

class RegisterProductUI
{
public:
	tuple<string, string, int, int> inputProductSpec(FILE* in_fp, FILE* out_fp);
	void showProductSpec(FILE* out_fp, string productName, string manufactureCompany, int productPrice, int productCount);
};

class RegisterProduct
{
private:
	Member member;
	Product product;
	RegisterProductUI registerProductUI;

public:
	void startInterface(FILE* in_fp, FILE* out_fp);
};

