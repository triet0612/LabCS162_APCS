#include "function.cpp"

int main() {
	cout << "Welcome to the theatre ticket seller" << endl;
	char filename[] = "theatre_seat.txt";
	char pricefile[] = "price_file.txt";
	theatre_auditorium thr = Input_theatre(filename);
	cout << "Please choose the way to input seat prices: " << endl;
	cout << "[1] to use file" << endl;
	cout << "[2] to use std" << endl;
	int input;
	cin >> input;
	while (input != 1 && input != 2){
		cout << "Please enter the input method again: " << endl;
		cin >> input;
	}
	system("cls");
	if (input == 1) {
		Input_seatprice_file(pricefile, thr);
	}
	else if (input == 2) {
		Input_seatprice_std(thr);
	}
	Print_seats(thr);
	cout << "Choose command: [S] to sell tickets, [X] to show total ticket sales, [O] to show sold seats/rows, [A] to show available seats/rows, [V] to show total available, [T] to exit the program" << endl;
	char command;
	cin >> command;
	while (command != 'T') {
		switch (command)
		{
			case 'S':
				Input_ticket_sale(thr);
				break;
			case 'X':
				All_ticket_sold(thr);
				break;
			case 'O':
				Print_sold_row(thr);
				break;
			case 'A':
				Print_available_row(thr);
				break;
			case 'V':
				Print_total_available(thr);
				break;
			default:
				break;
		}
		Print_seats(thr);
		cout << "Choose command: [S] to sell tickets, [X] to show total ticket sales, [O] to show sold seats/rows, [A] to show available seats/rows, [T] to exit the program" << endl;
		cin >> command;
	}
	To_file(filename, thr);
}