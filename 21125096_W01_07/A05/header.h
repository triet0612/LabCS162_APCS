#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct student {
	int id;
	char* fullname;
	float gpa;
};

struct arr_student {
	int length;
	student* values;
};

arr_student load_array_student(char filename[]);

student highest_gpa(arr_student s, char filename[]);
