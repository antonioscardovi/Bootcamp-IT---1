
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int ocjene[10];
	int prosjek = 0;

	for (int i = 0; i < 10; i++) {
		cin >> ocjene[i];
		prosjek += ocjene[i];
	}

	cout << endl;
	cout << "Popis ocjena: " << endl;

	for (int i = 0; i < 10; i++) {
		cout << ocjene[i] << endl;
	}

	cout << "Prosjek ocjena: ";
	cout << float(prosjek) / 10;


	
}

