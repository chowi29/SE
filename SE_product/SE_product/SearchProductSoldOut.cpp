#pragma once
#include "SearchProductSoldOut.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;



void SearchProductSoldOutUI::showProductSoldOut(FILE* out_fp, ProductList productList) {
	char sellerName[20];
	char productName[20];
	char manufactureCompany[20];
	strcpy(sellerName, productList.sellerName.c_str());
	strcpy(productName, productList.productName.c_str());
	strcpy(manufactureCompany, productList.manufactureCompany.c_str());

	fprintf(out_fp, "3.3. 판매 완료 상품 조회 \n> %s %s %d %d %d \n\n", &productName, &manufactureCompany, productList.productPrice, productList.productCountSold, productList.averageBuySatisfaction);
}

void SearchProductSoldOut::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {
	string sellerName = "jaeheon";
	ProductList productList = product->showProductSoldOut(sellerName);
	searchProductSoldOutUI.showProductSoldOut(out_fp, productList);
}

