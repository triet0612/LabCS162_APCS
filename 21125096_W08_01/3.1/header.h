#include <iostream>
using namespace std;

struct twodArr{
    int size;
    int** arr;
    twodArr(int x){
        size = x;
        arr = new int*[x];
        for (int i = 0; i < x; i++){
            arr[i] = new int[x];
        }
    }
    void Delete(){
        for (int i = 0; i < size; i++){
        delete[]arr[i];
    }
    delete[]arr;
    }
};

bool checkQueen(twodArr board, int r, int c);

bool solveQueen(twodArr &board, int c);

void Print_queen(twodArr board);
