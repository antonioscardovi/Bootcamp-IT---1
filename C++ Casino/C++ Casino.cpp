#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int money, chips, entry;

	cout << "\n\n\t\t\tWelcome to C++ Casino!\n\n\n";
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your cash amount: ";
	cin >> money;
	cout << endl;

	// Menu
	cout << "\tMENU\n" << endl;
	cout << "1) Buy chips" << endl;
	cout << "2) Cash out" << endl;
	cout << "3) Select game" << endl;
	cout << "4) High score" << endl;
	cout << "5) Quit game" << endl;
	cin >> entry;

	switch (entry) {
	case 1:
		cout << "How many chips do you want to buy?\nChips: ";
		cin >> chips;
		if (money < chips * 5) {
			do {
				cout << "Not enough money" << endl;
				cout << "Chips: ";
				cin >> chips;
			} while (money < chips * 5);
		}
		money -= chips * 5;
		break;
	case 2:
		cash_out();
		break;
	case 3:
		int entry3;
		cout << "\t GAME MENU\n" << endl;
		cout << "1) Dices" << endl;
		cout << "2) Slots" << endl;
		cout << "3) High-Low" << endl;
		cin >> entry3;
	}

}

// KOCKICEEEEEEEEE
/*
srand(time(0));

	int Marko = 0, Petar = 0;

	ofstream output;
	output.open("pobjede.txt", ios::out);

	for (int i = 0; i < 10; i++)
	{
		int dice1 = (int)(1 + rand() % 6);
		int dice2 = (int)(1 + rand() % 6);

		cout << "Marko: " << dice1 << endl;
		cout << "Petar: " << dice2 << endl;

		string izlaz1 = "Marko " + to_string(dice1 ) + "\n";
		string izlaz2 = "Petar " + to_string(dice2) + "\n";

		if (dice1 > dice2) {
			cout << "Pobjeda - Marko" << endl;
			output << izlaz1;
			Marko++;
		}
		else if (dice1 < dice2) {
			cout << "Pobjeda - Petar" << endl;
			output << izlaz2;
			Petar++;
		}
		else if (dice1 == dice2) {
			cout << "Nerjeseno." << endl;
		}


	}


	string izlaz3 = string("Rezultat:\n") + "Marko - " + to_string(Marko) + "\n";
	string izlaz4 = "Petar - " + to_string(Petar) + "\n";

	output << izlaz3 << izlaz4;

	if (Marko > Petar) {
		output << "Pobjednik: " << "Marko";
	}
	else if (Petar > Marko) {
		output << "Pobjednik: " << "Petar";
	}
	else if (Petar == Marko) {
		output << "Nerjeseno";
	}

	output.close();
	return 0;
*/