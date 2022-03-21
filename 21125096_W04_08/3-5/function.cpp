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

void InsertSorted(Node* &pHead, int x){
    if (pHead == NULL){
        pHead = new Node{x, NULL};
        return;
    }
    if (pHead->pNext == NULL){
        if (pHead->data >= x){
            Node* temp = pHead;
            pHead = new Node{x, temp};
            return;
        } else {
            pHead->pNext = new Node{x, NULL};
            return;
        }
    }
    if (x < pHead->data){
        Node* temp = pHead;
        pHead = new Node{x, temp};
        return;
    }
    for(Node* cur = pHead; cur->pNext != NULL; cur = cur->pNext){
        if (x > cur->pNext->data && cur->pNext->pNext == NULL){
            cur->pNext->pNext = new Node{x, NULL};
            cur = cur->pNext;
            return;
        }
        else if (x >= cur->data && x <= cur->pNext->data){
            Node* temp = cur->pNext;
            cur->pNext = new Node{x, temp};
            return;
        }
    }
}
