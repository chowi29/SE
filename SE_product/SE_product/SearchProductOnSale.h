#pragma once
#include <stdio.h> 
#include <string.h>
#include "Product.h"
#include "Member.h"

class SearchProductOnSaleUI
{
public:
	void showProductOnSale(FILE* out_fp, ProductList* productList, int* arr);
};

class SearchProductOnSale
{
private:
	Member* member;
	Product* product;
	SearchProductOnSaleUI searchProductOnSaleUI;

public:
	SearchProductOnSale();
	SearchProductOnSale(Product* product, Member* member);
	void startInterface(FILE* in_fp, FILE* out_fp, Product* product);
};

