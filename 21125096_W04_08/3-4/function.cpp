#include "header.h"

void Init(Node* &pHead){
    pHead = new Node{0, NULL};
}

void InputWithEvanLinkedList(Node* &pHead, char filename[]){
    ifstream fin;
    fin.open(filename);
    int x = 2;
    int n;
    fin >> n;
    if (n == 0){
        return;
    }
    pHead->data = x;
    pHead->pNext = new Node{n , NULL};
    x += 2;
    Node* cur = pHead->pNext;
    while(n != 0){
        fin >> n;
        if (n == 0) break;
        cur->pNext = new Node {x, NULL};
        cur = cur->pNext;
        cur->pNext = new Node{n, NULL};
        cur = cur->pNext;
        x += 2;
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
