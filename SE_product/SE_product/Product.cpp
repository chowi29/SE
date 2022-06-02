#pragma once
#include "Product.h"

ProductList Product::getProduct(FILE* out_fp, string productName) {
	for (int i = 0; i < 100; i++) {
		if (productList[i].productName == productName) {
			return productList[i];
		}
	}
	return productList[10];
}

ProductList Product::showProductSoldOut(string sellerName) {
	for (int i = 0; i < 100; i++) {
		if (productList[i].sellerName == sellerName) {
			return productList[i];
		}
	}
	return productList[10];
}

ProductList Product::registerSellingProduct(string productName, string manufactureCompany, int productPrice, int productCount, string sellerName, int productIndex) {
	productList[productIndex].productName = productName;
	productList[productIndex].manufactureCompany = manufactureCompany;
	productList[productIndex].productPrice = productPrice;
	productList[productIndex].productCount = productCount;
	productList[productIndex].sellerName = sellerName;
	return productList[productIndex];
}