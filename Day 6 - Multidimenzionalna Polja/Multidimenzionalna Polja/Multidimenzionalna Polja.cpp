#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// ZADATAK 1 - Tablica mnozenja
	int tablica[10][10];
	cout << "Tablica[10][10] mnozenja:\n";
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			tablica[i - 1][j - 1] = i * j;
			cout << tablica[i - 1][j - 1] << "\t";
		}
		cout << endl;
	}

	cout << endl;


	// ZADATAK 2 - Tablica * 3

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			tablica[i - 1][j - 1] *= 3;
			cout << tablica[i - 1][j - 1] << "\t";
		}
		cout << endl;
	}

	cout << endl;


	// ZADATAK 3 - 3D tablica sa unosom
	/*
	char polje[2][2][2];
	char z;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout << "Odaberi lokaciju: \n";
				cin >> i >> j >> k;
				cout << "Odaberi unos: ";
				cin >> z;
				polje[i][j][k] = z;
				cout << "polje[" << i << "][" << j << "][" << k << "] = " << polje[i][j][k] << endl;
			}
		}
	}
	*/

	


	// ZADATAK 4 - 2D polje sa znakovima "O"
	char znakovi[10][10];

	for (int x = 1; x < 10; x++) {
		for (int y = 1; y < 10; y++) {
			znakovi[x - 1][y - 1] = 'O';
			cout << znakovi[x - 1][y - 1] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (int x = 1; x < 10; x++) {
		for (int y = 1; y < 10; y++) {
			if (x == y || x + y == 10) {
				znakovi[x-1][y-1] = 'X';
			}
			cout << znakovi[x - 1][y - 1] << " ";
		}
		cout << endl;
	}

}