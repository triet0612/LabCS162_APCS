// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: {}, 0
// Output: 0

// Test case 2
// Input: {99231}, 1
// Output: 99231

// Test case 3
// Input: {2, 3, 4, 5, 6, 7}, 6
// Output: 4.5

#include "Header.h"

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(arr + i);
	}
	cout << MedianValue(arr, n);
	delete[]arr;
	return 0;
}