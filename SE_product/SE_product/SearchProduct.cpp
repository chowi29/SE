#pragma once
#include "SearchProduct.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

string SearchProductUI::getProductName(FILE* in_fp, FILE* out_fp) {

	char c_productName[20];
	fscanf(in_fp, "%s", &c_productName);

	string productName(c_productName);

	return productName;
}

void SearchProductUI::showProduct(FILE* out_fp, ProductList productList) {
	char sellerName[20];
	char productName[20];
	char manufactureCompany[20];
	strcpy(sellerName, productList.sellerName.c_str());
	strcpy(productName, productList.productName.c_str());
	strcpy(manufactureCompany, productList.manufactureCompany.c_str());

	fprintf(out_fp, "4.1. 상품 정보 검색 \n>%s %s %s %d %d %d \n\n", &sellerName, &productName, &manufactureCompany, productList.productPrice, productList.productCount, productList.averageBuySatisfaction);
}



void SearchProduct::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {

	string productName;
	//boundary class에게 productName 입력받으라고 요청
	productName = searchProductUI.getProductName(in_fp, out_fp);
	ProductList productList = product->getProduct(out_fp, productName);
	searchProductUI.showProduct(out_fp, productList);
}
SearchProduct::SearchProduct() {

}
SearchProduct::SearchProduct(Product* product) {
	this->product = product;
}
