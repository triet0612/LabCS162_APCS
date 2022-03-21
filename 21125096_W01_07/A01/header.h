#include <iostream>
#include <fstream>
using namespace std;

struct fraction {
	int tu;
	int mau;
};

struct array_fraction {
	int size;
	fraction* values;
};

array_fraction* load_frac_array(char filename[]);

bool compare_frac(fraction a, fraction b);

void sort_frac_array(array_fraction &arr);

void save_frac_array(char filename[], array_fraction arr);
