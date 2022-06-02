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
	int productCount = 0;
	int productCountSold = 0;
	int averageBuySatisfaction = 0;
	string sellerName = "";
};

class Product
{
private:

public:
	ProductList productList[100];
	int searchIdx;
	ProductList* getProduct(FILE *out_fp, string productName);
	int* showProductSoldOut(string sellerName);
	int* showProductOnSale(string sellerName);
	void registerSellingProduct(string productName, string manufactureCompany, int productPrice, int productCount, string sellerName, int productIndex);
};