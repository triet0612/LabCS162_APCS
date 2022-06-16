#include "header.h"

void init(twodArr &board){
    for (int i = 0; i < board.size; i++){
        for (int j = 0; j < board.size; j++){
            board.arr[i][j] = 3;
        }
    }
}

bool checkQueen(twodArr board, int r, int c){
    for (int i = 0; i < c; i++){
        if (board.arr[r][i] == 1){
            return false;
        }
    }
    for (int i = r, j = c; i >= 0 && j >= 0; i--, j--){
        if (board.arr[i][j] == 1){
            return false;
        }
    }
    for (int i = r, j = c; j >= 0 && i < board.size; i++, j--){
        if (board.arr[i][j] == 1){
            return false;
        }
    }
    return true;
}

bool solveQueen(twodArr &board, int c){
    if (c >= board.size){
        return true;
    }
    for (int i = 0; i < board.size; i++){
        if (checkQueen(board, i, c)){
            board.arr[i][c] = 1;
            if (solveQueen(board, c+1)){
                return true;
            }
            board.arr[i][c] = 3;
        }
    }
    return false;
}

void Print_queen(twodArr board){
    for (int i = 0; i < board.size; i++){
        for (int j = 0; j < board.size; j++){
            if (board.arr[i][j] == 1){
                cout << i << " " << j << endl;
            }  
        }
    }
}

