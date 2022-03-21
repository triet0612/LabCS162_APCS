#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

struct Queue{
    Node *head;
    Node *tail;
    int capacity;
};

void init(Queue &s, int capacity);

void enqueue(Queue &s, int x);

int dequeue(Queue &s);

bool isEmpty(Queue s);

void empty(Queue &s);

int size(Queue s);
