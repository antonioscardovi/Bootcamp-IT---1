#include "pch.h"
#include <iostream>

using namespace std;

int pogodi(int polje[], int velicina, int broj);

int main()
{
	int brojevi[100];
	int n;
	char odg;

	for (int i = 0; i < 100; i++) {
		brojevi[i] = i + 1;
	}

	cout << "Unesi broj: ";
	cin >> n;

	cout << "Dali je broj veci od 50? (y/n)";
	cin >> odg;

	if (odg == 'y') {
		int start = 50;
		int kraj;
	}



	
}

int pogodi(int polje[], int velicina, int broj) {
	int start = 0;
	int kraj = velicina;
	int sredina = (start + kraj) / 2;

	while (start <= kraj && polje[sredina] != broj) {
		if (polje[sredina] < broj) {
			start = sredina + 1;
		}
		else {
			kraj = sredina - 1;
		}
		sredina = (start + kraj) / 2;
	}

	if (polje[sredina] == broj) {
		cout << "Broj je: " << sredina;
		return sredina;
	}
	else {
		return -1;
	}
}