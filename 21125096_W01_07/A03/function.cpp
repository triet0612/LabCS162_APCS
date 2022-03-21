#include "header.h"

arr_date get_arr_date(char filename[]) {
	ifstream fin;
	fin.open(filename);
	arr_date d;
	fin >> d.length;
	d.arr = new date[d.length];
	for (int i = 0; i < d.length; i++) {
		fin >> (d.arr)[i].year >> (d.arr)[i].month >> (d.arr)[i].day;
	}
	fin.close();
	return d;
}

bool date_compare(date a, date b) {
	if (a.year < b.year) {
		return true;
	}
	else if (a.year > b.year) {
		return false;
	}
	else if (a.year == b.year) {
		if (a.month < b.month) {
			return true;
		}
		else if (a.month > b.month) {
			return false;
		}
		else if (a.month == b.month) {
			if (a.day <= b.day) {
				return true;
			}
			else if (a.day > b.day) {
				return false;
			}
		}
	}
	return false;
}

void sort_arr_date(arr_date &a) {
	int i, j;
	date key;
	for (i = 1; i < a.length; i++) {
		key = (a.arr)[i];
		j = i - 1;
		while (j >= 0 && date_compare(key, (a.arr)[j])) {
			(a.arr)[j + 1] = (a.arr)[j];
			j = j - 1;
		}
		(a.arr)[j + 1] = key;
	}
}

void save_arr_date(arr_date &a, char filename[]) {
	ofstream fout;
	fout.open(filename);
	for (int i = 0; i < a.length; i++) {
		fout << (a.arr)[i].year << " " << (a.arr)[i].month << " " << (a.arr)[i].day << endl;
		cout << (a.arr)[i].year << " " << (a.arr)[i].month << " " << (a.arr)[i].day << endl;
	}
	fout.close();
}