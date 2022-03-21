// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 1 1 2 2 2 2 3 4 4 5 4 0
// Output: 1 2 3 4 5 0

// Test case 2
// Input: 3 5 3 1 2 3 1 1 2 3 3 11 2 31 23 12 312 12 0
// Output: 3 5 1 2 11 31 23 12 312 0

// Test case 3
// Input: 0
// Output: 0

#include "function.cpp"

int main(){
    Node* pHead;
    char input[] = "input.txt";
    char output[] = "output.txt";
    Init(pHead);
    InputLinkedList(pHead, input);
    RemoveDuplicates(pHead);
    OutputLinkedList(pHead, output);
    DeleteLinkedList(pHead);
    return 0;
}