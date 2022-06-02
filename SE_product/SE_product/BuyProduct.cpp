#pragma once
#include "BuyProduct.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;


void BuyProductUI::showBuyProduct(FILE* out_fp, ProductList* productList) {
	char sellerName[20];
	char productName[20];
	char manufactureCompany[20];
	strcpy(sellerName, productList->sellerName.c_str());
	strcpy(productName, productList->productName.c_str());
	strcpy(manufactureCompany, productList->manufactureCompany.c_str());

	fprintf(out_fp, "4.2. 상품 구매 \n>%s %s \n\n", &sellerName, &productName);
}

void BuyProduct::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {
	string productName;
	ProductList* productList = &(product->productList[product->searchIdx]);
	product->productList[product->searchIdx].productCount--;
	product->productList[product->searchIdx].productCountSold++;
	//boundary class에게 productName 입력받으라고 요청
	buyProductUI.showBuyProduct(out_fp, productList);
}
BuyProduct::BuyProduct() {

}
BuyProduct::BuyProduct(Product* product) {
	this->product = product;
}
