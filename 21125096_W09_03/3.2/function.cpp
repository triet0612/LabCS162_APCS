#include "header.h"

void create_date(date &d, int da, int m, int y){
    d.day = da;
    d.month = m;
    d.year = y;
}

void ReadDateArr(date* &arr, int &n){
    ifstream fin("date.bin", ios::binary);
    fin.read((char*)&n, sizeof(n));
    date* temp = new date[n];
    for (int i = 0; i < n; i++){
        fin.read((char*)&temp[i], sizeof(temp[i]));
    }
    arr = temp;
    fin.close();
}

void WriteDateArr(date arr[], int n){
    ofstream fout("date.bin", ios::binary);
    fout.write((char*)&n, sizeof(n));
    for (int i = 0; i < n; i++){
        fout.write((char*)&arr[i], sizeof(arr[i]));
    }
    fout.close();
}

date FindNewestDay(date arr[], int n){
    if (n == 1){
        return arr[0];
    }
    date newest = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i].year > newest.year){
            newest = arr[i];
        }
        else if (arr[i].year == arr[i].year){
            if (arr[i].month > newest.month){
                newest = arr[i];
            }
            else if (arr[i].month == newest.month){
                if (arr[i].day > newest.day){
                    newest = arr[i];
                }
            }
        }
    }
    return newest;
}

void UserOption(){
    cout << "Welcome to the date program" << endl;
    cout << "Choose your option:" << endl;
    cout << "[1] to enters an array of dates from your keyboard." << endl;
    cout << "[2] to load dates from your date.bin file and fin newest day." << endl;
    string input = "";
    while (input != "1" && input != "2"){
        cin >> input;
        if (input != "1" && input != "2") {
            cout << "Wrong input" << endl;
        }
    }
    if (input == "1"){
        DoOpt1();
    } else if (input == "2"){
        DoOpt2();
    }
}

void DoOpt1(){
    int n = -1;
    cout << "Enter number of dates:" << endl;
    while (n <= 0){
        cin >> n;
        if (n <= 0){
            cout << "Wrong input" << endl;
        }
    }
    date* arr = new date[n];
    cout << "Enter your dates" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i].day >> arr[i].month >> arr[i].year;
    }
    WriteDateArr(arr, n);
    delete[]arr;
}

void DoOpt2(){
    date* arr;
    int n;
    ReadDateArr(arr, n);
    date newest = FindNewestDay(arr, n);
    cout << newest.day << "/" << newest.month << "/" << newest.year;
    delete[]arr;
}