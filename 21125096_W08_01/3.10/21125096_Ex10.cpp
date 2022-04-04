#include "function.cpp"

int main(){
    string in = "avs";
    vector<string> v = permute(in);
    for (auto i : v){
        cout << i << endl;
    }
    return 0;
}
