// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 2 2 4 2 6 0
// Output: 2 4 6 7 0\n3 5 7 0

// Test case 2
// Input: 1 2 0
// Output: 1 0\n2 0

// Test case 3
// Input: 0
// Output: 0

#include "function.cpp"

int main(){
    char input[] = "input.txt";
    char output[] = "output.txt";
    ofstream fout;
    fout.open(output);
    Node* odd;
    Node* even;
    Init(odd);
    Init(even);
    InputLinkedList(odd, input);
    SeperateEvenAndOdd(odd, even);
    OutputLinkedList(odd, even, fout);
    fout.close();
    DeleteLinkedList(even);
    DeleteLinkedList(odd);
    return 0;
}
