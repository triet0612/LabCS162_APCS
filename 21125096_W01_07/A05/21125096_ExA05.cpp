#include "header.h"

int main() {
	char input[] = "input3.txt";
	arr_student s = load_array_student(input);
	char output[] = "output3.txt";
	student max = highest_gpa(s, output);
	cout << max.id << endl << max.fullname << endl << max.gpa;
	return 0;
}
