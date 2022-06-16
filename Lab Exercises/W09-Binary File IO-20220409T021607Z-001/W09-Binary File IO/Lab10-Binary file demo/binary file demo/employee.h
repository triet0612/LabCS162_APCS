#pragma once

#include<string>
#include<iostream>
using namespace std;

//1: 4 + 30 + 50 = 84
//2: 84 * 2
//3: 84 * 3

struct Employee
{
    int Id;
    char Name[30];//string 10, 20, 25
    char Addr[50];
};

Employee init(int _id, string _name, string _addr);
void info(Employee e);

