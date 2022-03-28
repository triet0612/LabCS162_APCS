// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 5
// Output: 0 1 3 6 7

// Test case 2
// Input: 12
// Output: 0 1 3 6 2 7 1 8 16 7 17 6 18

// Test case 3
// Input: 1
// Output: 1, -4, 1

#include "function.cpp"

int main(){
    list<int> lst;
    RecamanSequence(12, lst);
    for (auto i : lst){
        cout << i << " ";
    }
    return 0;
}