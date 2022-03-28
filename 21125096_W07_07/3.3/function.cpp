#include "header.h"

string toHex(int x){
    if (x == 0){
        return "";
    }
    switch (x%16)
    {
    case 10:
        return toHex(x/16) + "A";
        break;
    case 11:
        return toHex(x/16) + "B";
        break;
    case 12:
        return toHex(x/16) + "C";
        break;
    case 13:
        return toHex(x/16) + "D";
        break;
    case 14:
        return toHex(x/16) + "E";
        break;
    case 15:
        return toHex(x/16) + "F";
        break;
    default:
        return toHex(x/16) + to_string(x%16);
        break;
    }
    return toHex(x / 16) + to_string(x % 16);
}
