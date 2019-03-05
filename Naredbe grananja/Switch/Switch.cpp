
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

	// ZADATAK 1
	int a = 0, b = 0;
	char op;

	cout << "Broj 1: ";
	cin >> a;
	cout << "Broj 2: ";
	cin >> b;
	cout << "Operator: ";
	cin >> op;

	switch (op) {
	case '+':
		cout << "Zbroj: " << a + b << endl;
		break;
	case '-':
		cout << "Razlika: " << a - b << endl;
		break;
	case '*':
		cout << "Umnozak: " << a * b << endl;
		break;
	case '/':
		cout << "Kvocijent: " << a / b << endl;
		break;
	default:
		cout << "Krivi operator." << endl;
		break;
	}
	// KRAJ


	// ZADATAK 2
	int x = 0;
	int y = 0;

	cout << "Ispis broja (1), pozdrav (2) ili izadi iz programa (3): ";
	cin >> x;

	switch (x) {
	case 1:
		cout << "Upisi broj: ";
		cin >> y;
		cout << "Ispis: " << y;
		break;
	case 2:
		cout << "Dobar dan";
		break;
	case 3:
		cout << "Exit";
		exit(0);
		break;
	}
	// KRAJ


	// ZADATAK 3

		

}

