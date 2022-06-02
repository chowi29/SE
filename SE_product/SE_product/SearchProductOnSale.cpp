#pragma once
#include "SearchProductOnSale.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;



void SearchProductOnSaleUI::showProductOnSale(FILE* out_fp, ProductList* productList, int* arr) {
	fprintf(out_fp, "3.2. 등록 상품 조회 \n");
	for (int i = 0; i < 100; i++) {
		if (arr[i] == 1) {
			if (productList[i].productCount > 0)
			{
				char productName[20];
				char manufactureCompany[20];
				strcpy(productName, productList[i].productName.c_str());
				strcpy(manufactureCompany, productList[i].manufactureCompany.c_str());
				fprintf(out_fp, "> % s % s % d % d \n", &productName, &manufactureCompany, productList[i].productPrice, productList[i].productCount);
			}
		}
	}
	fprintf(out_fp, "\n");
}

void SearchProductOnSale::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {
	string sellerName = member->findMember();
	int* arr;
	arr = product->showProductOnSale(sellerName);

	searchProductOnSaleUI.showProductOnSale(out_fp, product->productList, arr);

}

SearchProductOnSale::SearchProductOnSale() {

}
SearchProductOnSale::SearchProductOnSale(Product* product, Member* member) {
	this->product = product;
	this->member = member;
}