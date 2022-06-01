#pragma once
#include <stdio.h> 
#include <string.h>
#include "Product.h"

class SearchProductUI
{
public:
	string getProductName(FILE* in_fp, FILE* out_fp);
	void showProduct(FILE* out_fp, ProductList productList);
};

class SearchProduct
{
private:
	Product product;
	SearchProductUI searchProductUI;
	
public:
	void startInterface(FILE* in_fp, FILE* out_fp, Product* product);
};

