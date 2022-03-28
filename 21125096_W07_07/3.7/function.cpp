#include "header.h"

void PrintArray(int arr[], int n){
    if (n < 0){
        return;
    }
    PrintArray(arr, n-1);
    cout << arr[n] << " ";
    return;
}

void PrintArrayReversed(int arr[], int n){
    if (n < 0){
        return;
    }
    cout << arr[n] << " ";
    PrintArrayReversed(arr, n-1);
    return;
}

int SumOfArray(int arr[], int n){
    if (n < 0){
        return 0;
    }
    return arr[n] + SumOfArray(arr, n-1);
}

int DistinctValue(int arr[], int n, list<int> &lst){
    if (n < 0){
        return 0;
    }
    if (CheckExist(arr[n], lst)){
        return 0 + DistinctValue(arr, n-1, lst);
    }
    lst.push_back(arr[n]);
    return 1 + DistinctValue(arr, n-1, lst);
}

bool CheckExist(int x, list<int> s){
    for (auto i: s){
        if (x == i){
            return true;
        }
    }
    return false;
}
