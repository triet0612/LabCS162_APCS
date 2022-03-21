#include "Header.h"

double MedianValue(int* arr, int n) {
	if (n % 2 != 0) {
		double ans = *(arr + (n / 2));
		return ans;
	}
	else if (n == 0) {
		return 0;
	}
	double ans = (double(*(arr + (n / 2 - 1))) + double(*(arr + (n / 2)))) / 2;
	return ans;
}