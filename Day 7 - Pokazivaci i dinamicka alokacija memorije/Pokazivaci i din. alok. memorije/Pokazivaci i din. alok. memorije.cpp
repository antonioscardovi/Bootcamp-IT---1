#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	/* 
	int x = 7;

	int *p_x = nullptr;
	p_x = &x;

	cout << "x = " << x << endl;
	cout << "p_x = " << p_x << endl;
	cout << "&x = " << &x << endl;
	cout << "*p_x = " << *p_x << endl;
	*/


	// Alokacija dinamièke memorije i oslobaðanje nakon korištenja.
	/* 
	int *p_x = new int;

	*p_x = 10;

	cout << "Na adresi " << p_x << " upisana je vrijednost " << *p_x << endl;

	delete p_x;

	p_x = nullptr;
	*/


	// Primjer dinamicke alokacije memorije polja (npr. kada korisinik treba odrediti velicinu polja)
	// te delokacija memorije nakon koristenja
	/*
	int x;
	cout << "Unesite velicinu polja: ";
	cin >> x;

	int *polje = new int[x];

	for (int i = 0; i < x; i++) {
		cout << "Polje " << i << ": ";
		cin >> polje[i];
	}

	for (int i = 0; i < x; i++) {
		cout << i << "\t";
	}

	delete polje;
	polje = nullptr;
	*/

	// ZADATAK 1
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//
	//int *p_a = &a;
	//int *p_b = &b;
	//int *p_c = &c;

	//cout << "Adresa a: " << p_a << endl << "Adresa b: " << p_b << endl <<  "Adresa c: " << p_c << endl;


	// ZADATAK 2
	/*int x;
	cout << "Unesite velicinu polja: ";
	cin >> x;

	int *polje = new int[x];

	for (int i = 0; i < x; i++) {
		cout << "Polje " << i << ": ";
		cin >> polje[i];
	}

	for (int i = 0; i < x; i++) {
		cout << i << "\t";
	}

	delete polje;
	polje = nullptr;*/


	// ZADATAK 3
	int x;
	char ispisi = 'n';
	cout << "Unesite velicinu polja: ";
	cin >> x;

	int *polje = new int[x];

	for (int i = 0; i < x; i++) {
		cout << "Polje " << i << ": ";
		cin >> polje[i];
		if (i == (x-1)) {
			x = x + (x / 2);
			cout << "Polje se povecalo za pola" << endl;
			cout << "Ispisi polje? (d/n): ";
			cin >> ispisi;
			if (ispisi == 'd') {
				for (int i = 0; i < x; i++) {
					cout << polje[i] << "\t";
				}
			}
		}
	}


	delete polje;
	polje = nullptr;


	// ZADATAK 4 - Dvodimenzionalno dinamicko polje
	int a, b;
	cin >> a, b;

	

	// ZADATAK 5
	//int a, b, c;
	//cout << "Unesi velicinu polja 1, 2 i 3: ";
	//cin >> a >> b >> c;

	//int *p_a = new int[a];
	//int *p_b = new int[b];
	//int *p_c = new int[c];


}
