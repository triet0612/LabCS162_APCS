#include <iostream>
#include <fstream>
using namespace std;

struct Node{
    int data;
    Node* pNext;
};

void Init(Node* &pHead);

void InputLinkedList(Node* &pHead, char filename[]);

void OutputLinkedList(Node* &pHead, char filename[]);

void DeleteLinkedList(Node* &pHead);

void RemoveDuplicates(Node* &pHead);

void RemoveAllX(Node* &pHead, int x);
