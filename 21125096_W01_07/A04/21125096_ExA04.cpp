// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: input1.txt
// Output: output1.txt

// Test case 2
// Input: input2.txt
// Output: output2.txt

// Test case 3
// Input: input3.txt
// Output: output3.txt

#include "header.h"

int main() {
	char input[] = "input3.txt";
	arr_product a = get_arr_prod(input);
	char output[] = "output3.txt";
	int t = total_payment(a, output);
	cout << t;
	return 0;
}