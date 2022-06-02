#pragma once
#include <stdio.h> 
#include <string.h>
#include "Product.h"

class BuyProductUI
{
public:
	void showBuyProduct(FILE* out_fp, ProductList* productList);

};

class BuyProduct
{
private:
	Product* product;
	BuyProductUI buyProductUI;

public:
	BuyProduct();
	BuyProduct(Product* product);
	void startInterface(FILE* in_fp, FILE* out_fp, Product* product);

};

