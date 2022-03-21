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
    char fin1[] = "input3.txt";
    array_fraction* arr = load_frac_array(fin1);
    sort_frac_array(*arr);
    char fout1[] = "output3.txt";
    save_frac_array(fout1, *arr);
    return 0;
}
