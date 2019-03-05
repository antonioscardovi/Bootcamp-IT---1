
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
		cout << "Ispis: " << y << endl;
		break;
	case 2:
		cout << "Dobar dan" << endl;
		break;
	case 3:
		cout << "Exit";
		exit(0);
		break;
	}
	// KRAJ


	// ZADATAK 3
	int stih = 0;

	cout << "Odaberi stih(1-6): ";
	cin >> stih;

	switch (stih) {
	case 1:
		cout << "Sew your skeleton to mine\n";
	case 2:
		cout << "I'm no good on my own\n";
	case 3:
		cout << "Stitch yourself to either side of me so I will never be alone\n";
	case 4:
		cout << "We mend our past mistakes\n";
	case 5:
		cout << "As a symbol that we've grown\n";
	case 6:
		cout << "So we no longer place our weight on top of broken bones\n";
	}
	// KRAJ  // nismo koristili break; tako da se ispisuje sve poslje broja koji odaberemo

}

