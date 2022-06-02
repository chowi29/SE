#pragma once
#include "RegisterProduct.h"
#pragma warning(disable: 4996)
#include <iostream>
#include <tuple>
using namespace std;


tuple<string, string, int, int> RegisterProductUI::inputProductSpec(FILE* in_fp, FILE* out_fp) {

	char c_productName[20];
	char c_manufactureCompany[20];
	int productPrice;
	int productCount;

	fscanf(in_fp, "%s %s %d %d", &c_productName, &c_manufactureCompany, &productPrice, &productCount);
	string productName(c_productName);
	string manufactureCompany(c_manufactureCompany);

	return tuple<string, string, int, int>(productName, manufactureCompany, productPrice, productCount);
}


void RegisterProductUI::showProductSpec(FILE* out_fp, string productName, string manufactureCompany, int productPrice, int productCount) {

	cout << productName << manufactureCompany << productPrice << productCount << endl;

	char c_productName[20];
	char c_manufactureCompany[20];

	strcpy(c_productName, productName.c_str());
	strcpy(c_manufactureCompany, manufactureCompany.c_str());
	//fprintf(out_fp, "%s", &sellerName);
	fprintf(out_fp, "3.1. 판매의류 등록 \n>%s %s %d %d \n", &c_productName, &c_manufactureCompany, &productPrice, &productCount);
}

void RegisterProduct::startInterface(FILE* in_fp, FILE* out_fp, Member* member, Product* product, int productIndex) {


	string productName;
	string manufactureCompany;
	int productPrice;
	int productCount;

	tuple<string, string, int, int> productSpec = registerProductUI.inputProductSpec(in_fp, out_fp); //boundary class에게 상품정보 입력받으라고 요청
	productName = get<0>(productSpec);
	manufactureCompany = get<1>(productSpec);
	productPrice = get<2>(productSpec);
	productCount = get<3>(productSpec);


	//멤버와 프로덕트 관리.
	//프로덕트에 추가 회원가입처럼 인덱스 만들어야 하나.
	//회원에서 로그인된 아이디 받아서 seller name으로 넘겨 주면서 product->registerSellinProduct(프로덕트 정보, sellername, <index>)
	//member->addSellingProduct(프로덕트)
	string sellerName = member->findMember();
	ProductList productList = product->registerSellingProduct(productName, manufactureCompany, productPrice, productCount, sellerName, productIndex);
	member->addSellingProduct(productList);
	registerProductUI.showProductSpec(out_fp, productName, manufactureCompany, productPrice, productCount);
}

RegisterProduct::RegisterProduct() {

}
RegisterProduct::RegisterProduct(Member* member, Product* product) {
	this->member = *member;
	this->product = *product;
}

