// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 2 2 4 6 0 - 2
// Output: 1 2 2 2 4 6 0

// Test case 2
// Input: 1 1 1 1 1 1 1 0 - 1
// Output: 1 1 1 1 1 1 1 1 0

// Test case 3
// Input: 2 3 4 5 6 7 7 0 - 99
// Output: 2 3 4 5 6 7 7 99 0

#include "function.cpp"

int main(){
    char input[] = "input.txt";
    char output[] = "output.txt";
    Node* pHead;
    Init(pHead);
    InputLinkedList(pHead, input);
    int x;
    cin >> x;
    InsertSorted(pHead, x);
    OutputLinkedList(pHead, output);
    DeleteLinkedList(pHead);
    return 0;
}
