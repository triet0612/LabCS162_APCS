#include "Header.h"

theatre_auditorium Input_theatre(char filename[]) {
	ifstream fin;
	theatre_auditorium thr;
	fin.open(filename);
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			fin >> (thr.arr)[i][j];
		}
	}
	fin.close();
	return thr;
}

void Input_seatprice_file(char filename[], theatre_auditorium &thr) {
	ifstream fin;
	fin.open(filename);
	for (int i = 0; i < 15; i++) {
		fin >> thr.price[i];
	}
	fin.close();
	return;
}

void Input_seatprice_std(theatre_auditorium &thr) {
	cout << "Please input prices for each row" << endl;
	for (int i = 0; i < 15; i++) {
		cin >> thr.price[i];
	}
	return;
}

void Print_seats(theatre_auditorium& thr) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			cout << thr.arr[i][j];
		}
		cout << endl;
	}
	return;
}

int Input_ticket_sale(theatre_auditorium& thr) {
	int r, c;
	cout << "Input r, c: " << endl;
	cin >> r >> c;
	while (r < 0 || r >= 15 || c < 0 || c >= 30 || thr.arr[r][c] == '*') {
		system("cls");
		Print_seats(thr);
		cout << "Please input again, invalid ticket slot" << endl;
		cin >> r;
		cin >> c;
	}
	thr.arr[r][c] = '*';
	cout << "Your total purchase is " << thr.price[r] << endl;
	return thr.price[r];
}

int All_ticket_sold(theatre_auditorium& thr) {
	int sold = 0;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			if (thr.arr[i][j] == '*') {
				sold++;
			}
		}
	}
	system("cls");
	cout << sold << endl;
	return sold;
}

void Print_available_row(theatre_auditorium& thr) {
	system("cls");
	for (int i = 0; i < 15; i++) {
		int avai = 0;
		for (int j = 0; j < 30; j++) {
			if (thr.arr[i][j] == '#') {
				avai++;
			}
		}
		cout << "This is the number of available seats for row " << i << " : " << avai << endl;
	}
	return;
}

void Print_sold_row(theatre_auditorium& thr) {
	system("cls");
	for (int i = 0; i < 15; i++) {
		int sold = 0;
		for (int j = 0; j < 30; j++) {
			if (thr.arr[i][j] == '*') {
				sold++;
			}
		}
		cout << "This is the number of sold seats for row " << i << " : " << sold << endl;
	}
	return;
}

void Print_total_available(theatre_auditorium& thr) {
	system("cls");
	int sold = 0;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			if (thr.arr[i][j] == '#') {
				sold++;
			}
		}
	}
	cout << sold << endl;
	return;
}

void To_file(char filename[], theatre_auditorium thr) {
	ofstream fout;
	fout.open(filename);
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			fout << thr.arr[i][j] << endl;
		}
	}
	return;
}
