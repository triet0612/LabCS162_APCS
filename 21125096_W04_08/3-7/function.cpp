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

void OutputLinkedList(Node* &Odd, Node* &Even, ofstream &fout){
    if (Odd == NULL || Odd->data == 0){
        fout << 0 << endl;
    } else if (Odd != NULL && Odd->data != 0){
        for (Node* cur = Odd; cur != NULL; cur = cur->pNext){
            fout << cur->data << " ";
        }
        fout << 0 << endl;
    }
    if (Even == NULL || Even->data == 0){
        fout << 0 << endl;
    } else if (Even != NULL && Even->data != 0){
        for (Node* cur = Even; cur != NULL; cur = cur->pNext){
            fout << cur->data << " ";
        }
        fout << 0 << endl;
    }
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

void SeperateEvenAndOdd(Node* &odd, Node* &even){
    if (odd == NULL){
        return;
    }
    if (odd->pNext == NULL){
        return;
    } else if (odd->pNext->pNext == NULL){
        even = odd->pNext;
        odd->pNext = NULL;
        return;
    }
    even = odd->pNext;
    Node* cur_e = even;
    for (Node* cur_o = odd; cur_o->pNext != NULL;){
        if (cur_o->pNext->pNext == NULL){
            break;
        }
        cur_o->pNext = cur_e->pNext;
        cur_o = cur_o->pNext;
        cur_e->pNext = cur_o->pNext;
        cur_e = cur_e->pNext;
    }
    return;
}
