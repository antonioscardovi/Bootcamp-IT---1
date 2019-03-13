#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	// ZADATAK 1
	/*int broj;
	string spremanje;
	cin >> broj;


	ofstream output;
	output.open("brojevi.txt", ios::out);
	for (int i = 0; i <= broj; i++) {
		spremanje = to_string(i) + "\n";
		output << spremanje;
	}
	output.close();

	ifstream input("brojevi.txt");
	vector<string> brojevi;
	string line;

	while (input) {
		getline(input, line);
		brojevi.push_back(line);
	}

	input.close();

	for (int i = 0; i < brojevi.size() - 1; i++) {
		cout << brojevi[i] << endl;
	}*/

	
	// ZADATAK 2
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


}
