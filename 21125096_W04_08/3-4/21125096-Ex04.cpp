// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 2 2 4 2 6 0
// Output: 2 1 4 2 6 2 8 4 10 2 12 6 0

// Test case 2
// Input: 1 0
// Output: 2 1 0

// Test case 3
// Input: 0
// Output: 0

#include "function.cpp"

int main(){
    Node* pHead;
    char input[] = "input.txt";
    char output[] = "output.txt";
    Init(pHead);
    InputWithEvanLinkedList(pHead, input);
    OutputLinkedList(pHead, output);
    DeleteLinkedList(pHead);
    return 0;
}