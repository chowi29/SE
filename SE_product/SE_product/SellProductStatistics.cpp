#pragma once
#include "SellProductStatistics.h"
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

void SellProductStatisticsUI::showSellProductStatistics(FILE* out_fp) {
  fprintf(out_fp, "5.1. 판매 상품 통계\n");
}

void SellProductStatistics::startInterface(FILE* in_fp, FILE* out_fp, Product* product) {
  sellProductStatisticsUI.showSellProductStatistics(out_fp);

  ProductList productList = product -> getAllProduct(out_fp);
}