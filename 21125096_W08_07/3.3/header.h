#include <iostream>
using namespace std;

struct chessboard{
    int size;
    int** data;
    chessboard(int n){
        size = n;
        data = new int*[n];
        for (int i = 0; i < n; i++){
            data[i] = new int[n];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                data[i][j] = -1;
            }
        }
    }
    void Delete(){
        for (int i = 0; i < size; i++){
            delete[]data[i];
        }
        delete[]data;
    }
    void Print(){
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

void TryKnight(chessboard &brd, int row, int col, int step, bool &solved);

bool CheckCell(chessboard brd, int row, int col);
