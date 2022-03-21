#include "Header.h"

int Mode_of_array(int* arr, int size) {
	int* cur = arr;
	int max = 0;
	int mode = -1;
	for (int i = 0; i < size; i++) {
		int temp = 0;
		int freq = *(cur + i);
		for (int j = i + 1; j < size; j++) {
			if (*(cur + i) == *(cur + j)) {
				temp++;
			}
		}
		if (temp > max) {
			mode = freq;
			max = temp;
		}
	}
	return mode;
}