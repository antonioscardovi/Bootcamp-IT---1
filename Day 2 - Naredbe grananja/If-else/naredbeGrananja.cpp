
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	// ZADATAK 1
	int a = 0, b = 0;
	
	cout << ("Osoba 1: ");
	cin >> a;
	cout << ("Osoba 2: ");
	cin >> b;

	if (a > b) {
		cout << "Osoba 1 je starija od Osobe 2." << endl;
	}
	else if (a < b) {
		cout << "Osoba 2 je starija od Osobe 1." << endl;
	}
	else {
		cout << "Osobe imaju jedanko godina." << endl;
	}

	cout << "\n";
	// KRAJ


	// ZADATAK 2
	int x = 0;

	cout << "Unesi broj: ";
	cin >> x;

	if ((x % 2) != 0) {
		cout << "Broj je neparan.";
	}
	else {
		cout << "Broj je paran." << endl;
	}

	cout << "\n";
	// KRAJ


	// ZADATAK 3
	string pass = "password";
	string enter;

	cout << "Enter Password: ";
	cin >> enter;

	if (enter == pass) {
		cout << "Access Granted." << endl;
	}
	else {
		cout << "Access Denied." << endl;
	}

	cout << "\n";
	// KRAJ


	// ZADATAK 4
	int broj1 = 0, broj2 = 0;
	char op;

	cout << "Broj 1: ";
	cin >> broj1;
	cout << "Broj 2: ";
	cin >> broj2;
	cout << "Operator: ";
	cin >> op;

	if (op == '+') {
		cout << "Zbroj = " << broj1 + broj2 << endl;
	}
	else if (op == '-') {
		cout << "Razlika = " << broj1 - broj2 << endl;
	}
	else if (op == '*') {
		cout << "Produkt = " << broj1 * broj2 << endl;
	}
	else if (op == '/') {
		cout << "Kvocijent = " << broj1 / broj2 << endl;
	}
	else {
		cout << "Krivi operator.";
	}
	// KRAJ

}

