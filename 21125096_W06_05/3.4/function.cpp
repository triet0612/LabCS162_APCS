#include "header.h"

void init(Queue &s, int capacity){
    s.capacity = capacity;
    s.head = NULL;
    s.tail = NULL;
}

void enqueue(Queue &s, int x){
    if (size(s) >= s.capacity){
        return;
    }
    if (s.head == NULL){
        s.head = s.tail = new Node{x, NULL};
        return;
    }
    Node* temp = new Node{x, NULL};
    s.tail->next = temp;
    s.tail = s.tail->next;
    return;
}

int dequeue(Queue &s){
    if (s.head == NULL){
        return 0;
    }
    else if (s.head->next == NULL){
        int data = s.head->data;
        delete s.head;
        s.head = NULL;
        s.tail = NULL;
        return data;
    }
    int data = s.head->data;
    Node* temp = s.head;
    s.head = s.head->next;
    delete temp;
    return data;
}

bool isEmpty(Queue s){
    return (size(s) == 0);
}

void empty(Queue &s){
    while (s.head != NULL){
        Node* temp = s.head;
        s.head = s.head->next;
        delete temp;
    }
    s.head = s.tail = NULL;
}

int size(Queue s){
    int ans = 0;
    for (Node* cur = s.head; cur != NULL; cur = cur->next){
        ans++;
    }
    return ans;
}
