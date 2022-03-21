#include <iostream>
#include <fstream>
using namespace std;

struct Node{
    int data;
    Node* pNext;
};

void Init(Node* &pHead);

void InputWithEvanLinkedList(Node* &pHead, char filename[]);

void OutputLinkedList(Node* &pHead, char filename[]);

void DeleteLinkedList(Node* &pHead);
