// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: abcba
// Output: true

// Test case 2
// Input: abca
// Output: false

// Test case 3
// Input: abcbbcba
// Output: true

#include "Header.h"

int main() {
	char str[] = "abcbbcba";
	cout << isPalindrome(str);
	return 0;
}