#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class ProductList
{
public:
	string productName = "";
	string manufactureCompany = "";
	int productPrice = -1;
	int productCount = -1;
	int productCountSold = -1;
	int averageBuySatisfaction = -1;
	string sellerName = "";
};

class Product
{
private:
	ProductList productList[100];

public:
	ProductList getProduct(FILE *out_fp, string productName);
	ProductList showProductSoldOut(string sellerName);
	void registerSellingProduct(string productName, string manufactureCompany, int productPrice, int productCount, string sellerName, int productIndex);
};