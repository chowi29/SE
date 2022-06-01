#pragma once
#include <stdio.h> 
#include <string.h>
#include "Product.h"

class SearchProductSoldOutUI
{
public:
	void showProductSoldOut(FILE* out_fp, ProductList productList);
};

class SearchProductSoldOut
{
private:
	Product product;
	SearchProductSoldOutUI searchProductSoldOutUI;

public:
	void startInterface(FILE* in_fp, FILE* out_fp, Product* product);
};

