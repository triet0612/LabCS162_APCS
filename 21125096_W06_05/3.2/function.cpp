#include "header.h"

void init(Stack &s, int c){
    s.head = NULL;
    s.capacity = c;
}

void push(Stack &s, int x){
    if (size(s) >= s.capacity){
        return;
    }
    if (s.head == NULL){
        s.head = new Node{x, s.head};
    }
    Node* temp = new Node{x, s.head};
    s.head = temp;
}

int pop(Stack &s){
    if (size(s) == 0){
        return 0;
    }
    Node* temp = s.head;
    s.head = s.head->next;
    int data = temp->data;
    delete temp;
    return data;
}

bool isEmpty(Stack s){
    return size(s) == 0;
}

void empty(Stack &s){
    while(s.head != NULL){
        Node* temp = s.head;
        s.head = s.head->next;
        delete temp;
    }
}

int size(Stack s){
    int ans = 0;
    for (Node* cur = s.head; cur != NULL; cur = cur->next){
        ans++;
    }
    return ans;
}
