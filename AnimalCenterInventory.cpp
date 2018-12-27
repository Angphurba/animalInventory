
// Animal Inventory
// author @Angphurba

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#define MAX_REC 10

int main()
{
	std::cout << "Welcome to Ranger Animal Center!";

	class Inventory {
		char Number[15];
		int Day;
		double animalAdopted;
		void getdata();
		void showdata();
		
	
	};

	void Inventory::getdata() 
	{
		
		cout << "\nEnter number of days : ";
		cin >> Number;
		cout << "Enter day: ";
		cin >> Day;
		cout << "Enter number of animal adopted: ";
		cin >> animalAdopted;
	}

void Inventory::showdata()
{
	cout << endl;
	cout.width(15);
	cout.setf(ios::left, ios::adjustfield);
	cout << Number;

	cout.width(8);
	cout << Day;

	cout.width(15);
	cout.setf(ios::right, ios::adjustfield);
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout << animalAdopted;
}

void main() 
{
	Inventory record[MAX_REC];
	int i, n;
	clrscr();

	cout << "\n=====Inventory Management=====\n";
	cout << "\nHow many Records to be created : ";
	cin >> n;

	cout << "Enter " << n << " Records\n";
	for (i = 0; i<n; i++)
		record[i].getdata();

	cout << "\n\n---Stock Information---\n";
	cout << "\n" << setw(8) << "Number of Days"
		<< setw(10) << "Name of the Day"
		<< setw(19) << "Number of animal adopted" << endl;
	cout << "-------------------------------------------";

	for (i = 0; i<n; i++)
		record[i].showdata();


	system("pause");
	return 0;
}
