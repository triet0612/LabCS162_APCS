#include "header.h"

void TryKnight(chessboard &brd, int row, int col, int step, bool &solved){
    if (solved){
        return;
    } else {
        if (row >= brd.size || col >= brd.size || row < 0 || col < 0 || brd.data[row][col] != -1){
            return;
        }
        brd.data[row][col] = step;
        if (step == brd.size*brd.size){
            brd.Print();
            solved = true;
            return;
        }
        else{
            TryKnight(brd, row+2, col+1, step + 1, solved);
            TryKnight(brd, row+2, col-1, step + 1, solved);
            TryKnight(brd, row+1, col+2, step + 1, solved);
            TryKnight(brd, row+1, col-2, step + 1, solved);
            TryKnight(brd, row-1, col-2, step + 1, solved);
            TryKnight(brd, row-1, col+2, step + 1, solved);
            TryKnight(brd, row-2, col-1, step + 1, solved);
            TryKnight(brd, row-2, col+1, step + 1, solved);
        }
        brd.data[row][col] = -1;
    }
}
    
