#include "header.h"

void InputLst(ifstream& fin, Node* &pHead){
    int n;
    fin >> n;
    if (n == 0){
        pHead = NULL;
        return;
    }
    pHead = new Node{n, NULL};
    Node* cur = pHead;
    fin >> n;
    while (n != 0){
        cur->pNext = new Node{n, NULL};
        cur = cur->pNext;
        fin >> n;
    }
    return;
}

void OutputLst(ofstream& fout, Node* &pHead){
    for (Node* cur = pHead; cur != NULL; cur = cur->pNext){
        fout << cur->data << " ";
    }
    fout << 0 << endl;
    return;
}

void JoinLst(Node* &lst_f, Node* &lst_s, Node* &lst_j){
    if (lst_s == NULL && lst_f == NULL){
        lst_j = NULL;
        return;
    }
    if (lst_f == NULL){
        lst_j = lst_s;
        return;
    } else if (lst_s == NULL){
        lst_j = lst_f;
        return;
    }
    Node* cur = lst_f;
    for (; cur->pNext != NULL; cur = cur->pNext){
        cur = cur->pNext;
    }
    cur->pNext = lst_s;
    lst_j = lst_f;
    return;
}

void DeleteLst(Node* &pHead){
    if (pHead == NULL){
        return;
    }
    while(pHead->pNext != NULL){
        Node* temp = pHead;
        pHead = pHead->pNext;
        delete temp;
    }
    delete pHead;
    return;
}
