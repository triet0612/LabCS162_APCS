#include <iostream>
#include <vector>
using namespace std;

void permutation(vector<int> &num, int x, int &len, vector<vector<int>> &ans);

vector<vector<int>> permute(vector<int> &num);

int main(){
    vector<int> lst ({1,2,3,4,5,6,7,8,9});
    vector<vector<int>> v = permute(lst);
    for (auto i: v){
        for (auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

vector<vector<int>> permute(vector<int> &num){
    vector<vector<int>> ans;
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
