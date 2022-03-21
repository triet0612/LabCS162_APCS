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
	char input[] = "input2.txt";
	arr_date a = get_arr_date(input);
	char output[] = "output2.txt";
	sort_arr_date(a);
	save_arr_date(a, output);
	return 0;
}