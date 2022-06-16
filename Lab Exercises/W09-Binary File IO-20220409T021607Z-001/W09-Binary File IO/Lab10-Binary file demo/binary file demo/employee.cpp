
#include <iostream>
using namespace std;

#include "employee.h"

Employee init(int _id, string _name, string _addr){
    Employee e;
    e.Id = _id;
    strcpy(e.Name, _name.c_str());
    strcpy(e.Addr, _addr.c_str());
    return e;
}

void info(Employee e){
    cout << "ID: " << e.Id;
    cout << "\tName: " << e.Name;
    cout << "\tAddress: " << e.Addr << endl;
}