#include "header.h"

vector<vector<int>> permute(int n){
    vector<vector<int>> ans;
    vector<int> num;
    for (int i = 1; i <= n; i++){
        num.push_back(i);
    }
    int len = num.size();
    permutation(num, 0, len, ans);
    return ans;
}

void permutation(vector<int> &num, int x, int &len, vector<vector<int>> &ans){
    if (x == len)
        ans.push_back(num);
    for (int j = x; j < len; j++){
        swap(num[x], num[j]);
        permutation(num, x+1, len, ans);
        swap(num[x], num[j]);
    }
}