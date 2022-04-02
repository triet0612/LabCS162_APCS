#include "function.cpp"

int main(){
    chessboard brd = chessboard(9);
    bool flag = false;
    TryKnight(brd, 0, 0, 1, flag);
    brd.Delete();
}
