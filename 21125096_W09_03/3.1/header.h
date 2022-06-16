#include <iostream>
#include <fstream>
using namespace std;

struct Ar{
    int n;
    int* data;
    void Delete(){
        delete[]data;
    }
};

void InputKBArray(Ar &arr);

void SaveArray(Ar arr, ofstream &fout);

void ReadArray(Ar &arr, ifstream &fin);

float Median(Ar arr);
