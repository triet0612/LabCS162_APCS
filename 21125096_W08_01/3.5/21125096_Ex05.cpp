#include <iostream>
using namespace std;

int tribonacci(int n);

int main(){
    cout << tribonacci(22);
    return 0;
}

int tribonacci(int n){
    int arr[3];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    if (n <= 2) return arr[n];
    for (int i = 3; i <= n; i++){
        int a = arr[0] + arr[1] + arr[2];
        arr[0] = arr[1];
        arr[1] = arr[2];
        arr[2] = a;
    }
    return arr[2];
}
