#include <iostream>
#include <fstream>
using namespace std;

struct date{
    int day;
    int month;
    int year;
};

void create_date(date &d, int da, int m, int y);

date FindNewestDay(date arr[], int n);

void ReadDateArr(date* &arr, int &n);

void WriteDateArr(date arr[], int n);

void UserOption();

void DoOpt1();

void DoOpt2();
