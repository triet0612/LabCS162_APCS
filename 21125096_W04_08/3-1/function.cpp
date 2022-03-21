#include "Header.h"

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

void RemoveAllX(Node* &pHead, int x){
    while (pHead != NULL && pHead->data == x){
        Node* temp = pHead;
        pHead = pHead->pNext;
        delete temp;
    }
    if (pHead == NULL || pHead->data == 0){
        return;
    }
    Node* cur = pHead;
    while (cur->pNext != NULL){
        if (cur->pNext->data == x){
            Node* temp = cur->pNext;
            cur->pNext = cur->pNext->pNext;
            delete temp;
        } else {
            cur = cur->pNext;
        }
    }
    return;
}
