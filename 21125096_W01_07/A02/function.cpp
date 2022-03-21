#include "header.h"

arr_cir load_array_cir(char filename[]) {
	ifstream fin;
	fin.open(filename);
	arr_cir ans;
	fin >> ans.length;
	ans.arr = new circle[ans.length];
	for (int i = 0; i < ans.length; i++) {
		fin >> (ans.arr)[i].x >> (ans.arr)[i].y >> (ans.arr)[i].r;
	}
	fin.close();
	return ans;
}

float sum_circle_area(arr_cir x, char filename[]) {
	ofstream fout;
	fout.open(filename);
	float sum = 0;
	float area;
	for (int i = 0; i < x.length; i++) {
		area = (x.arr)[i].r * (x.arr)[i].r * 3.14;
		sum += area;
	}
	fout << sum;
	fout.close();
	return sum;
}