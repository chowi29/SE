#pragma once
#include "PurchasedSatisfaction.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

void PurchasedSatisfactionUI::showPurchasedSatisfaction(FILE* out_fp) {
  fprintf(out_fp, "4.4. 상품 구매만족도 평가\n");
}

tuple<string, int> PurchasedSatisfactionUI::getSatisfaction(FILE* in_fp, FILE* out_fp) {
  char c_productName[20];
  int satisfaction;
	fscanf(in_fp, "%s %d", &c_productName, &satisfaction);
  string productName(c_productName);

	return tuple<string, int>(productName, satisfaction);
}

void PurchasedSatisfaction::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {
  tuple<string, int> purchasedSatisfactionInformation = purchasedSatisfactionUI.getSatisfaction(in_fp, out_fp);
  purchasedSatisfactionUI.showPurchasedSatisfaction(out_fp);

  ProductList productList = product -> getAllProduct(out_fp);
}
