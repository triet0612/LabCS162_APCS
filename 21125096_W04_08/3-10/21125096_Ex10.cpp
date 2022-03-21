#include <iostream>
#include <fstream>
using namespace std;

struct Node{
    int data;
    Node* pNext;
};

void InputLst(ifstream& fin, Node* &pHead){
    int n;
    fin >> n;
    if (n < 0){
        pHead = NULL;
        return;
    }
    pHead = new Node{n, NULL};
    Node* cur = pHead;
    fin >> n;
    while (n >= 0){
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
    fout << -1 << endl;
    return;
}

int ListToNumber(Node* pHead){
    if(pHead == nullptr){
        return 0;
    }
    int a = pHead->data;
    if (pHead->pNext == nullptr){
        return a;
    }
    for (Node* cur = pHead->pNext; cur != nullptr; cur = cur->pNext){
        a = a*10 + cur->data;
    }
    return a;
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

int main(){
    ifstream fin;
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");
    Node* pHead;
    InputLst(fin, pHead);
    cout << ListToNumber(pHead) << endl;
    OutputLst(fout, pHead);
    fin.close();
    fout.close();
    DeleteLst(pHead);
    return 0;
}
