#pragma once
#include <stdio.h> 
#include <string.h>
#include "Member.h"
#include "Product.h"
#include <tuple>

class SellProductStatisticsUI
{
public:
	void showSellProductStatistics(FILE* out_fp);
};

class SellProductStatistics
{
private:
	Product* product;
	SellProductStatisticsUI sellProductStatisticsUI;
public:
	SellProductStatistics();
  SellProductStatistics(Product* product);
  void startInterface(FILE* in_fp, FILE* out_fp, Product* product);
};
