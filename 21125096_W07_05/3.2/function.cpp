#include "header.h"

string toBinary(int x){
    if (x / 2 == 0) return to_string(x % 2);
    return toBinary(x / 2) + to_string(x % 2);
}
