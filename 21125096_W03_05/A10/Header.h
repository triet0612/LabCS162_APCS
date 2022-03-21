#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct theatre_auditorium {
	int rows = 15;
	int seats = 30;
	char arr[15][30];
	int price[15];
};

theatre_auditorium Input_theatre(char filename[]);

void Input_seatprice_file(char filename[], theatre_auditorium &thr);

void Input_seatprice_std(theatre_auditorium &thr);

void Print_seats(theatre_auditorium &thr);

int Input_ticket_sale(theatre_auditorium &thr);

int All_ticket_sold(theatre_auditorium &thr);

void Print_available_row(theatre_auditorium &thr);

void Print_sold_row(theatre_auditorium &thr);

void Print_total_available(theatre_auditorium &thr);

void To_file(char filename[], theatre_auditorium thr);
