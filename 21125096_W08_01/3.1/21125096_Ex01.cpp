#include "function.cpp"

int main(){
    twodArr board = twodArr(4);
    init(board);
    solveQueen(board, 0);
    Print_queen(board);
    board.Delete();
}