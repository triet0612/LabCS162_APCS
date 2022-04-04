#include <iostream>
#include <vector>
using namespace std;

vector<string> letterCasePermutation(string s);

void Permutation(string &s, int x, int len, vector<string> &v);

bool check(string s, vector<string> v);

int main(){
    string a = "cd23";
    vector<string> v = letterCasePermutation(a);
    for (auto i : v){
        cout << i << endl;
    }
    return 0;
}

vector<string> letterCasePermutation(string s) {
    int len = s.size();
    vector<string> ans;
    bool ph = true;
    Permutation(s, 0, len, ans);
    return ans;
}

bool check(string s, vector<string> v){
    for (auto i : v){
        if (i == s){
            return true;
        }
    }
    return false;
}

void Permutation(string &s, int x, int len, vector<string> &v){
    if (x == len){
        v.push_back(s);
        return;
    }
    if(!isalpha(s[x])){
        Permutation(s, x + 1, len, v);
    }else{
        s[x] = toupper(s[x]);
        Permutation(s, x + 1, len, v);
        s[x] = tolower(s[x]);
        Permutation(s, x + 1, len, v);
    }
}
