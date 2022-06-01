#pragma once
#include "Product.h"

ProductList Product::getProduct(FILE* out_fp, string productName) {
	for (int i = 0; i < 100; i++) {
		if (productList[i].productName == productName) {
			return productList[i];
		}
	}
}