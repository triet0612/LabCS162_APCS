#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Stack{
    Node *head;
    int capacity;
};

void init(Stack &s, int c);

void push(Stack &s, int x);

int pop(Stack &s);

bool isEmpty(Stack s);

void empty(Stack &s);

int size(Stack s);
