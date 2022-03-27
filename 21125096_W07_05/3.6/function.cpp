#include "header.h"

int RecamanSequence(int n, list<int> &s){
    if (n == 0){
        s.push_back(n);
        return n;
    }
    else {
        int a = RecamanSequence(n - 1, s);
        int temp1 = a - n;
        int temp2 = a + n;
        if (temp1 > 0 && !CheckExist(temp1, s)){
            s.push_back(temp1);
            return temp1;
        }
        else {
            s.push_back(temp2);
            return temp2;
        }
    }
}

bool CheckExist(int x, list<int> s){
    for (auto i: s){
        if (x == i){
            return true;
        }
    }
    return false;
}
