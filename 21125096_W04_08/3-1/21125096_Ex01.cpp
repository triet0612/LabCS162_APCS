// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 2 2 4 2 6 0 - 2
// Output: 1 4 6 0

// Test case 2
// Input: 1 1 1 1 1 1 1 0 - 1
// Output: 0

// Test case 3
// Input: 1 1 1 1 2 2 2 2 1 1 1 1 0 - 1
// Output: 2 2 2 2

#include "function.cpp"

int main(){
    char input[] = "input.txt";
    char output[] = "output.txt";
    Node* pHead;
    Init(pHead);
    InputLinkedList(pHead, input);
    int x;
    cin >> x;
    RemoveAllX(pHead, x);
    OutputLinkedList(pHead, output);
    DeleteLinkedList(pHead);
    return 0;
}
