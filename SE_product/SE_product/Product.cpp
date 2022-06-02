#pragma once
#include "Product.h"

ProductList Product::getProduct(FILE *out_fp, string productName)
{
	for (int i = 0; i < 100; i++)
	{
		if (productList[i].productName == productName)
		{
			return productList[i];
		}
	}
	return productList[10];
}

ProductList Product::getAllProduct(FILE *out_fp)
{
	int productListSize = sizeof(productList)/sizeof(*productList);
	for (int i = 0; i < productListSize; i++)
	{
		fprintf(out_fp, "%s %s %s %s\n", productList[i].sellerName, productList[i].productName, productList[i].manufactureCompany, productList[i].price, productList[i].leftQuantity, productList[i].averageSatisfaction);
	}	
}

ProductList Product::showProductSoldOut(string sellerName)
{
	for (int i = 0; i < 100; i++)
	{
		if (productList[i].sellerName == sellerName)
		{
			return productList[i];
		}
	}
	return productList[10];
}

void Product::registerSellingProduct(string productName, string manufactureCompany, int productPrice, int productCount, string sellerName, int productIndex)
{
	productList[productIndex].productName = productName;
	productList[productIndex].manufactureCompany = manufactureCompany;
	productList[productIndex].productPrice = productPrice;
	productList[productIndex].productCount = productCount;
	productList[productIndex].sellerName = sellerName;
}