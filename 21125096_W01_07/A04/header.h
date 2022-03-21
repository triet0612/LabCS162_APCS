#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct product {
	int id;
	char* name;
	int stock;
	int price;
};

struct arr_product {
	int length;
	product* values;
};

arr_product get_arr_prod(char filename[]);

int total_payment(arr_product a, char filename[]);
