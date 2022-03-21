// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1 2 3 4 5 0\n22 33 4 0
// Output: 1 2 3 4 5 22 33 4 0

// Test case 2
// Input: 0\n1 2 3 0
// Output: 1 2 3 0

// Test case 3
// Input: 0\n0
// Output: 0

#include "function.cpp"

int main(){
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    Node* f_lst;
    Node* s_lst;
    Node* j_lst;
    InputLst(fin, f_lst);
    InputLst(fin, s_lst);
    JoinLst(f_lst, s_lst, j_lst);
    OutputLst(fout, j_lst);
    DeleteLst(j_lst);
    fin.close();
    fout.close();
    return 0;
}
