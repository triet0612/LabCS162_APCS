#include "header.h"

void InputKBArray(Ar &arr){
    cout << "Input the integer array:" << endl;
    cout << "Input size:" << endl;
    cin >> arr.n;
    cout << "Input array data:" << endl;
    arr.data = new int(arr.n);
    for (int i = 0; i < arr.n; i++){
        cin >> arr.data[i];
    }
    return;
}

void SaveArray(Ar arr, ofstream &fout){
    fout.write((char*)&arr.n, sizeof(int));
    fout.write((char*)arr.data, sizeof(int) * arr.n);
    fout.close();
}

void ReadArray(Ar &arr, ifstream &fin){
    fin.read((char*)&arr.n, sizeof(int));
    arr.data = new int[arr.n];
    fin.read((char*)arr.data, (sizeof(arr.n) * arr.n));
    cout << arr.n << endl;
    for (int i = 0; i < arr.n; i++){
        cout << arr.data[i] << " ";
    }
    cout << endl;
    fin.close();
}

float Median(Ar arr){
    float ans;
    if (arr.n == 1){
        ans = arr.data[0];
    }
    if (arr.n % 2 == 0){
        ans = (arr.data[(arr.n)/2-1] + arr.data[(arr.n)/2])/2;
    }
    else {
        ans = arr.data[arr.n/2];
    }
    cout << "Median number: " << ans << endl;
    return ans;
}
