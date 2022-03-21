#include "header.h"

arr_student load_array_student(char filename[]) {
	ifstream fin;
	fin.open(filename);
	arr_student a;
	fin >> a.length;
	a.values = new student[a.length];
	for (int i = 0; i < a.length; i++) {
		fin >> (a.values[i]).id;
		char* temp = new char[256];
		fin.ignore(256, '\n');
		fin.getline(temp, 256);
		(a.values)[i].fullname = new char[strlen(temp)+1];
		strcpy_s((a.values)[i].fullname, strlen(temp)+1, temp);
		delete[]temp;
		fin >> (a.values)[i].gpa;
	}
	fin.close();
	return a;
}

student	highest_gpa(arr_student s, char filename[]) {
	student max = (s.values)[0];
	for (int i = 1; i < s.length; i++) {
		if (max.gpa < (s.values)[i].gpa) {
			max = (s.values)[i];
		}
		if (max.gpa == (s.values)[i].gpa) {
			if (max.id > (s.values)[i].id) {
				max = (s.values)[i];
			}
		}
	}
	ofstream fout;
	fout.open(filename);
	fout << max.id << endl << max.fullname << endl << max.gpa;
	fout.close();
	return max;
}