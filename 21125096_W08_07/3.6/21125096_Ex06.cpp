#include "function.cpp"

int main(){
    vector<vector<int>> v = permute(3);
    for (auto i: v){
        for (auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
