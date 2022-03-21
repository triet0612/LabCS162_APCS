#include "header.h"

array_fraction* load_frac_array(char filename[]) {
	ifstream fin;
	fin.open(filename);
	array_fraction arr;
	fin >> arr.size;
	arr.values = new fraction[arr.size];
	for (int i = 0; i < arr.size; i++) {
		fin >> (arr.values)[i].tu >> (arr.values)[i].mau;
	}
	fin.close();
	return &arr;
}

bool compare_frac(fraction a, fraction b) {
	return a.tu * b.mau >= b.tu * a.mau;
}

void sort_frac_array(array_fraction &arr) {
	int i, j;
	fraction key;
	for (i = 1; i < arr.size; i++) {
		key = (arr.values)[i];
		j = i - 1;
		while (j >= 0 && compare_frac((arr.values)[j], key)) {
			(arr.values)[j + 1] = (arr.values)[j];
			j = j - 1;
		}
		(arr.values)[j + 1] = key;
	}
	return;
}

void save_frac_array(char filename[], array_fraction arr) {
	ofstream fout;
	fout.open(filename);
	fout << arr.size << endl;
	for (int i = 0; i < arr.size; i++) {
		fout << (arr.values)[i].tu << " " << (arr.values)[i].mau << endl;
	}
	fout.close();
	return;
}