// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 2 2 4 2 6 0
// Output: 1 3 5 9 11 17 0

// Test case 2
// Input: 2 3 4 5 31 2 33 0
// Output: 2 5 9 14 45 47 80 0

// Test case 3
// Input: 2 3 4 5 6 7 7 0
// Output: 2 5 9 14 20 27 34 0

#include "function.cpp"

int main(){
    char input[] = "input.txt";
    char output[] = "output.txt";
    Node* in;
    Node* out;
    Init(in);
    Init(out);
    InputLinkedList(in, input);
    ListOfSum(in, out);
    OutputLinkedList(out, output);
    DeleteLinkedList(in);
    DeleteLinkedList(out);
    return 0;
}
