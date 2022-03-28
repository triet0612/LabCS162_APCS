#include "function.cpp"

int main(){
    int arr[12] = { 1,1,1,2,2,2,3,3,3,4,512,321};
    PrintArray(arr, 11);
    cout << endl;
    PrintArrayReversed(arr, 11);
    cout << endl;
    cout << SumOfArray(arr, 11) << endl;
    list<int> lst;
    cout << DistinctValue(arr, 11, lst) << endl;
    return 0;
}