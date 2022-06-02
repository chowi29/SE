#pragma once
#include "PurchasedProductHistory.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

void PurchasedProductHistoryUI::showPurchasedProductHistory(FILE* out_fp) {
  fprintf(out_fp, "4.3. 상품 구매 내역 조회\n");
}

void PurchasedProductHistory::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {
  purchasedProductHistoryUI.showPurchasedProductHistory(out_fp);

  ProductList productList = product -> getAllProduct(out_fp);
}
