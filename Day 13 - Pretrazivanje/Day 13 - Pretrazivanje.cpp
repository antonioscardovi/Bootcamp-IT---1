#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void trazenjePojma1(vector<string> pojmovi, string pojam);
vector <int> trazenjePojmova(vector<string> pojmovi, string pojam);

int main()
{
	vector <string> pojmovi;
	ifstream input("pojmovi.txt");

	string pojam;
	while (input) {
		getline(input, pojam);
		pojmovi.push_back(pojam);
	}

	input.close();

	for (int i = 0; i < pojmovi.size() - 1; i++) {
		cout << pojmovi[i] << endl;
	}


	cout << "Unesi pojam: ";
	cin >> pojam;
	trazenjePojma1(pojmovi, pojam);
	trazenjePojmova(pojmovi, pojam);
	for (int i = 0; i < trazenjePojmova(pojmovi, pojam).size(); i++){
		cout << trazenjePojmova(pojmovi, pojam)[i] << endl;
}

}

void trazenjePojma1(vector<string> pojmovi, string pojam) {
	system("cls");
	for (int i = 0; i < pojmovi.size(); i++) {
		if (pojmovi[i] == pojam) {
			cout << pojam << "se prvi put pojavljuje na indexu: ";
			cout << i << endl;
			cout << endl;
			break;
		}
	}

}

vector <int> trazenjePojmova(vector<string> pojmovi, string pojam) {
	vector<int> pozicije;
	for (int i = 0; i < pojmovi.size(); i++) {
		if (pojmovi[i] == pojam) {
			pozicije.push_back(i);
		}
	}
	return pozicije;
}