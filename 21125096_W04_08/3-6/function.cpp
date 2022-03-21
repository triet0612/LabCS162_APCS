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

void ListOfSum(Node* &pHead, Node* &pOut){
    int x = 0;
    Node* p = pOut;
    for (Node* cur = pHead; cur != NULL; cur = cur->pNext){
        x += cur->data;
        p->data = x;
        if (cur->pNext == NULL){
            return;
        }
        p->pNext = new Node{0, NULL};
        p = p->pNext;
    }
    return;
}
