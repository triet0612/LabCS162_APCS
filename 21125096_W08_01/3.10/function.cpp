#include "header.h"

vector<string> permute(string &str){
    vector<string> ans;
    int len = str.size();
    permutation(str, 0, len, ans);
    return ans;
}

void permutation(string &str, int x, int &len, vector<string> &ans){
    if (x == len)
        ans.push_back(str);
    for (int j = x; j < len; j++){
        swap(str[x], str[j]);
        permutation(str, x+1, len, ans);
        swap(str[x], str[j]);
    }
}