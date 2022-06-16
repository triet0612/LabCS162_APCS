#include "function.cpp"

int main(){
    Ar arr;
    cout << "~~~Welcome to the array I/O program~~~" << endl;
    cout << "[1]: Input an Array from your keyboard, then save it to a binary file" << endl;
    cout << "[2]: Load an Array from a binary file, output the median of the array to console" << endl;
    string n;
    bool flag = true;
    while (flag){
        cout << "Please input what you want to do" << endl;
        cin >> n;
        if(n == "1"){
            InputKBArray(arr);
            cout << "Input the your wanted filename: " << endl;
            string filename;
            cin >> filename;
            ofstream fout(filename+".bin", ios::binary);
            SaveArray(arr, fout);
            cout << "Thank you for using the program!!" << endl;
            flag = false;
        }
        else if (n == "2"){
            cout << "Choose the file you want to use:" << endl;
            string filename;
            cin >> filename;
            ifstream fin(filename+".bin", ios::binary);
            ReadArray(arr, fin);
            Median(arr);
            cout << "Thank you for using the program!!" << endl;
            flag = false;
        }
    }
    arr.Delete();
    system("pause");
    return 0;
}
