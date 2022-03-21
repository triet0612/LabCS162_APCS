// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: { 1, 1, 2, 2, 3}, 5
// Output: 1

// Test case 2
// Input: { 12, 33, 33, 12, 11, 12, 13, 55, 12, 32, 11, 22, 33, 44, 55, 12 }, 15
// Output: 12

// Test case 3
// Input: {1,2,3,4,5,6,7,8,9,10,11,12,13}, 13
// Output: -1

#include "Header.h"

int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(arr + i);
	}
	cout << Mode_of_array(arr, n);
	delete []arr;
	return 0;
}
