#include "header.h"

void PrintPattern(int n, int m){
    if (n <= 0){
        cout << n << ", ";
        return;
    }
    cout << n << ", ";
    PrintPattern(n-5, m);
    if (n == m){
        cout << n;
        return;
    }
    cout << n << ", ";
    return;
}
