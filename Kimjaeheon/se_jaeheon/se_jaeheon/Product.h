#pragma once
#include <stdio.h> 
#include <iostream>
#include <string>
using namespace std;

class ProductList
{
public:
	string productName = "hat";
	string manufactureCompany = "manu";
	int productPrice = 2000;
	int productCount = 10;
	int productCountSold = 0;
	int averageBuySatisfaction = 1;
	string sellerName = "jaeheon";
};

class Product
{
private:
	ProductList productList[100];
public:
	ProductList getProduct(FILE* out_fp, string productName);
	ProductList showProductSoldOut(string sellerName);
};

