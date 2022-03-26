#include "header.h"

int C(int n, int k){
    if (k == 0 || k == n){
        return 1;
    }
    return C(n-1, k) + C(n-1, k-1);
}
