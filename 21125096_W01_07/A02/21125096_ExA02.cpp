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
	char output[] = "output3.txt";
	arr_cir c = load_array_cir(input);
	float ans = sum_circle_area(c, output);
	return 0;
}