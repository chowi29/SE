#pragma once
#include <stdio.h> 
#include <iostream>
#include <string>
using namespace std;

class ProductList
{
public:
	string productName = "aszx";
	string manufactureCompany = "gasxzcv";
	int productPrice = 200;
	int productCount = 14;
	int productCountSold = 2;
	int averageBuySatisfaction = 0;
	string sellerName = "axcv";
};

class Product
{
private:
	ProductList productList[100];
public:
	ProductList getProduct(FILE* out_fp, string productName);
	ProductList showProductSoldOut(string sellerName);
};

