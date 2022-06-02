#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"
#include "Product.h"
#include <tuple>

class PurchasedProductHistoryUI
{
public:
	void showPurchasedProductHistory(FILE* out_fp);
};

class PurchasedProductHistory
{
private:
	Product* product;
	PurchasedProductHistoryUI purchasedProductHistoryUI;
public:
	PurchasedProductHistory();
  PurchasedProductHistory(Product* product);
  void startInterface(FILE* in_fp, FILE* out_fp, Product* product);
};

