#pragma once
#include <stdio.h> 
#include <string.h>
#include "Product.h"
#include "Member.h"

class SearchProductSoldOutUI
{
public:
	void showProductSoldOut(FILE* out_fp, ProductList* productList, int* arr);
};

class SearchProductSoldOut
{
private:
	Member* member;
	Product* product;
	SearchProductSoldOutUI searchProductSoldOutUI;

public:
	SearchProductSoldOut();
	SearchProductSoldOut(Product* product, Member* member);
	void startInterface(FILE* in_fp, FILE* out_fp, Product* product);
};

