#include "header.h"

arr_product get_arr_prod(char filename[]) {
	ifstream fin;
	fin.open(filename);
	arr_product a;
	fin >> a.length;
	a.values = new product[a.length];
	for (int i = 0; i < a.length; i++) {
		fin >> (a.values)[i].id;
		char* temp = new char[1000];
		fin.ignore(256, '\n');
		fin.getline(temp, 256);
		(a.values)[i].name = new char[strlen(temp)+1];
		strcpy_s((a.values)[i].name, strlen(temp) + 1, temp);
		delete[]temp;
		fin >> (a.values)[i].stock;
		fin >> (a.values)[i].price;
	}
	fin.close();
	return a;
}

int total_payment(arr_product a, char filename[]) {
	int sum = 0;
	for (int i = 0; i < a.length; i++) {
		sum += (a.values)[i].price * (a.values)[i].stock;
	}
	ofstream fout;
	fout.open(filename);
	fout << sum;
	fout.close();
	return sum;
}