#include <iostream>
#include <fstream>
using namespace std;

struct Node{
    int data;
    Node* pNext;
};

void Init(Node* &pHead);

void InputLinkedList(Node* &pHead, char filename[]);

void OutputLinkedList(Node* &Odd, Node* &Even, ofstream &fout);

void DeleteLinkedList(Node* &pHead);

void SeperateEvenAndOdd(Node* &odd, Node* &even);
