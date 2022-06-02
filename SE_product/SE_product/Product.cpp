#pragma once
#include "Product.h"

ProductList* Product::getProduct(FILE *out_fp, string productName)
{
	for (int i = 0; i < 100; i++)
	{
		if (productList[i].productName == productName)
		{
			searchIdx = i;
			return &productList[i];
		}
	}
	return &productList[1000];
}

int* Product::showProductSoldOut(string sellerName)
{
	static int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < 100; i++)
	{
		if (productList[i].sellerName == sellerName)
		{
			arr[i] = 1;
		}
	}

	return arr;
}

int* Product::showProductOnSale(string sellerName)
{
	static int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < 100; i++)
	{
		if (productList[i].sellerName == sellerName)
		{
			arr[i] = 1;
		}
	}

	return arr;
}

void Product::registerSellingProduct(string productName, string manufactureCompany, int productPrice, int productCount, string sellerName, int productIndex)
{
	productList[productIndex].productName = productName;
	productList[productIndex].manufactureCompany = manufactureCompany;
	productList[productIndex].productPrice = productPrice;
	productList[productIndex].productCount = productCount;
	productList[productIndex].sellerName = sellerName;
}