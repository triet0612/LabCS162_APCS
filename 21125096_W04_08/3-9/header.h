#include <iostream>
#include <fstream>
using namespace std;

struct Node{
    int data;
    Node* pNext;
};

void InputLst(ifstream& fin, Node* &pHead);

void OutputLst(ofstream& fout, Node* &pHead);

void JoinLst(Node* &lst_f, Node* &lst_s, Node* &lst_j);

void DeleteLst(Node* &pHead);
