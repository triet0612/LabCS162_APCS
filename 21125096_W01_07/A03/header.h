#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct date {
	int year;
	int day;
	int month;
};

struct arr_date {
	int length;
	date* arr;
};

arr_date get_arr_date(char filename[]);

bool date_compare(date a, date b);

void sort_arr_date(arr_date &arr);

void save_arr_date(arr_date &arr, char filename[]);
