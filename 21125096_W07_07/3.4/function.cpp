#include "header.h"

int sumOfDigits(int x){
    if (x < 10){
        return x;
    }
    return x%10 + sumOfDigits(x/10);
}
