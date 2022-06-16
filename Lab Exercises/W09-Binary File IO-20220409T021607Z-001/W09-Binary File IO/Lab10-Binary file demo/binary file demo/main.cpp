#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
// khong doc va ghi 1 byte => 1MB
//3.5MB => 1MB, 1MB, 1MB, 0.5MB
//3.5tr lan => sieu cham (doc ghi o cung)
#include "employee.cpp"

void create(Employee e){
    ofstream f("employees.dat", ios::binary | ios::app);
    f.write((char*)&e, sizeof(e));
    f.close();
}

void read(){
    ifstream f("employees.dat", ios::binary);
    Employee e;
    while(f.read((char*)&e, sizeof(e))){
        info(e);
    }
    f.close();
}

bool update(int id, string addr){
    bool found = false;
    fstream f("employees.dat", ios::in | ios::out | ios::binary);
    Employee e;
    while(f.read((char*)&e, sizeof(e))){
        if(e.Id == id){
            found = true;
            strcpy(e.Addr, addr.c_str());
            f.seekp((long)f.tellg() - sizeof(e), ios::beg);
            f.write((char*)&e, sizeof(e));
            break;
        }
    }
    f.close();
    return found;
}

bool update1(Employee e){
    bool found = false;
    fstream f("employees.dat", ios::in | ios::out | ios::binary);
    f.seekp((long)f.tellg() + sizeof(e), ios::beg);
    f.write((char*)&e, sizeof(e));
    f.close();
    return found;
}

int main(){
    cout << "Hello" << endl;
    Employee e1 = init(1, "Loc", "HCM");
    Employee e2 = init(2, "Thanh", "HCM");
    Employee e3 = init(3, "Kha", "HCM");
    Employee e4 = init(4, "Dung", "HCM");

    create(e1);
    create(e2);
    create(e3);
    create(e4);

    read();
    update(1, "Ho Chi Minh");
    update1(e3);
    read();

    return 1;
}