

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char repeat = 'd';

	int pobX = 0, pobO = 0;

	do {			// Do while za ponavljanje igre

	char polje[9] = {'1','2','3','4','5','6','7','8','9'};
	char znak = 'x';
	int pozicija;

	

		for (int x = 1; x <= 9; x++) {			// Veliki for loop
			system("cls");

			for (int i = 1; i <= 9; i++) {
				if (i % 3 != 0) {
					cout << polje[i - 1] << " ";
				}
				else {
					cout << polje[i - 1] << endl;
				}
			}



			cout << "Igra " << znak << endl;
			do {
				cout << "Odaberi poziciju: " << endl;
				cin >> pozicija;
			} while (polje[pozicija - 1] == 'o' || polje[pozicija - 1] == 'x' || pozicija > 9 || pozicija < 1);


			if (znak == 'x') {
				polje[pozicija - 1] = 'x';
				znak = 'o';
			}
			else {
				polje[pozicija - 1] = 'o';
				znak = 'x';
			}


			if (x > 4) {
				if (polje[0] == polje[1] && polje[1] == polje[2]) {
					cout << "Pobjedio je: " << polje[0] << endl;
					if (polje[0] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				}
				else if (polje[3] == polje[4] && polje[4] == polje[5]) {
					cout << "Pobjedio je: " << polje[3] << endl;
					if (polje[3] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				}
				else if (polje[6] == polje[7] && polje[7] == polje[8]) {
					cout << "Pobjedio je: " << polje[6] << endl;
					if (polje[6] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				}
				else if (polje[0] == polje[3] && polje[3] == polje[6]) {
					cout << "Pobjedio je: " << polje[0] << endl;
					if (polje[0] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				}
				else if (polje[1] == polje[4] && polje[4] == polje[7]) {
					cout << "Pobjedio je: " << polje[1] << endl;
					if (polje[1] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				}
				else if (polje[2] == polje[5] && polje[5] == polje[8]) {
					cout << "Pobjedio je: " << polje[2] << endl;
					if (polje[2] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				}
				else if (polje[0] == polje[4] && polje[4] == polje[8]) {
					cout << "Pobjedio je: " << polje[0] << endl;
					if (polje[0] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				}
				else if (polje[2] == polje[4] && polje[4] == polje[6]) {
					cout << "Pobjedio je: " << polje[2] << endl;
					if (polje[2] == 'x') {
						pobX++;
					}
					else {
						pobO++;
					}
					break;
				} else {
					cout << "Nerjeseno." << endl;
				}
			}

		}

		for (int i = 1; i <= 9; i++) {
			if (i % 3 != 0) {
				cout << polje[i - 1] << " ";
			}
			else {
				cout << polje[i - 1] << endl;
			}
		}


		cout << "Rezultat: " << "X: " << pobX << " - " << "Y: " << pobO << endl;


		cout << "Ponovi igru? (d/n):";
		cin >> repeat;

	} while (repeat == 'd');
	
}