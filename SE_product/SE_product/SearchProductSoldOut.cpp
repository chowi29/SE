#pragma once
#include "SearchProductSoldOut.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;



void SearchProductSoldOutUI::showProductSoldOut(FILE* out_fp, ProductList* productList, int* arr) {
	fprintf(out_fp, "3.3. 판매 완료 상품 조회 \n");
	for (int i = 0; i < 100; i++) {
		if (arr[i] == 1) {
			if (productList[i].productCount == 0)
			{
				char sellerName[20];
				char productName[20];
				char manufactureCompany[20];
				strcpy(sellerName, productList[i].sellerName.c_str());
				strcpy(productName, productList[i].productName.c_str());
				strcpy(manufactureCompany, productList[i].manufactureCompany.c_str());
				fprintf(out_fp, "> % s % s % d % d % d \n", &productName, &manufactureCompany, productList[i].productPrice, productList[i].productCountSold, productList[i].averageBuySatisfaction);
			}
		}
	}
}

void SearchProductSoldOut::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {
	string sellerName = member->findMember();
	cout << "seller !!!!!! " << sellerName << endl;
	int* arr;
	arr = product->showProductSoldOut(sellerName);

	searchProductSoldOutUI.showProductSoldOut(out_fp, product->productList, arr);

}

SearchProductSoldOut::SearchProductSoldOut() {

}
SearchProductSoldOut::SearchProductSoldOut(Product* product, Member* member) {
	this->product = product;
	this->member = member;
}