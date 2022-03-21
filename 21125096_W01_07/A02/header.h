#include <iostream>
#include <fstream>
using namespace std;

struct circle {
	float x = 0;
	float y = 0;
	float r = 0;
};

struct arr_cir {
	circle* arr;
	int length;
};

arr_cir load_array_cir(char filename[]);

float sum_circle_area(arr_cir x, char filename[]);
