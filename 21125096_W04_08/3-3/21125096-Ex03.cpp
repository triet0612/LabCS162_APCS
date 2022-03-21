// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 2 3 4 5 0
// Output: 5 4 3 2 1 0

// Test case 2
// Input: 4 6 0
// Output: 6 4 0

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
    ReverseLinkedList(pHead);
    OutputLinkedList(pHead, output);
    DeleteLinkedList(pHead);
    return 0;
}