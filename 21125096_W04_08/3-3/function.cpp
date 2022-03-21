#include "header.h"

void Init(Node* &pHead){
    pHead = new Node{0, NULL};
}

void InputLinkedList(Node* &pHead, char filename[]){
    ifstream fin;
    fin.open(filename);
    int n;
    fin >> n;
    if (n == 0){
        return;
    }
    pHead->data = n;
    Node* cur = pHead;
    while(n != 0){
        fin >> n;
        if (n == 0) break;
        cur->pNext = new Node{n, NULL};
        cur = cur->pNext;
    }
    fin.close();
    return;
}

void OutputLinkedList(Node* &pHead, char filename[]){
    ofstream fout;
    fout.open(filename);
    if (pHead == NULL || pHead->data == 0){
        fout << 0;
        return;
    }
    for (Node* cur = pHead; cur != NULL; cur = cur->pNext){
        fout << cur->data << " ";
    }
    fout << 0;
    fout.close();
    return;
}

void DeleteLinkedList(Node* &pHead){
    while (pHead != NULL){
        Node* temp = pHead;
        pHead = temp->pNext;
        delete temp;
    }
    return;
}

void ReverseLinkedList(Node* &pHead){
    if (pHead == NULL || pHead->pNext == NULL){
        return;
    }
    if (pHead->pNext->pNext == NULL){
        pHead->pNext->pNext = pHead;
        Node* temp = pHead->pNext;
        pHead->pNext = NULL;
        pHead = temp;
        return;
    }
    Node* prev = pHead;
    Node* cur = pHead->pNext;
    Node* next = pHead->pNext->pNext;
    while (next != NULL){
        cur->pNext = prev;
        if (prev == pHead){
            prev->pNext = NULL;
        }
        prev = cur;
        cur = next;
        next = next->pNext;
    }
    cur->pNext = prev;
    pHead = cur;
    return;
}
