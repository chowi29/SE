#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"
#include "Product.h"
#include <tuple>

class PurchasedSatisfactionUI
{
public:
	void showPurchasedSatisfaction(FILE* out_fp);
  tuple<string, int> getSatisfaction(FILE* in_fp, FILE* out_fp);
};

class PurchasedSatisfaction
{
private:
	Product* product;
  int satisfaction;
	PurchasedSatisfactionUI purchasedSatisfactionUI;
public:
	PurchasedSatisfaction();
  PurchasedSatisfaction(Product* product);
  void startInterface(FILE* in_fp, FILE* out_fp, Product* product);
};