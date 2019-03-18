#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
	int ID;
	string ime;
	string prezime;
	char spol;
	int rez1;
	int rez2;
	int zavrsni;
	int uspjeh;
};

void izbornik();
Student novi_unos();

int main()
{
	vector <Student> s;
	int unos;
	izbornik();
	cin >> unos;

	switch (unos) {
	case 1:
		s.push_back(novi_unos());
		break;
	case 2:
		brisanje();
		break;
	case 3:
		izmjena();
		break;
	case 4:
		prikaz();
		break;
	case 5:
		prosjek();
		break;
	case 6:
		najbolji();
		break;
	case 7:
		najgori();
		break;
	case 8:
		prikaz_ID();
		break;
	case 9:
		sort_uspjeh();
		break;
	}

	
	// Izmjena podataka

	// Prikaz svih studenata

	// Prikaz prosjeka po ispitu 

	// Prikaz najboljeg

	// Prikaz najgoreg

	// Prikaz po ID-u

	// Sortiranje po ukupnom uspjehu
}

void izbornik() {
	cout << "Izbornik: " << endl;
	cout << "1) Unos novih studenata" << endl;
	cout << "2) Brisanje (po ID-u)" << endl;
	cout << "3) Izmjena podataka" << endl;
	cout << "4) Prikaz svih studenata" << endl;
	cout << "5) Prikaz prosjeka po ispitu " << endl;
	cout << "6) Prikaz najboljeg" << endl;
	cout << "7) Prikaz najgoreg" << endl;
	cout << "8) Prikaz po ID-u" << endl;
	cout << "9) Sortiranje po ukupnom uspjehu" << endl;
	cout << "Unesi broj: ";
}
// Unos novih studenata
Student novi_unos() {
	Student p;
	cout << "Unesi ID: ";
	cin >> p.ID;
	cout << "Unesi ime: ";
	cin >> p.ime;
	cout << "Unesi prezime: ";
	cin >> p.prezime;
	cout << "Unesi spol: ";
	cin >> p.spol;
	cout << "Unesi rezultat prvog kolokvija: ";
	cin >> p.rez1;
	cout << "Unesi rezultat drugog kolokvija: ";
	cin >> p.rez2;
	cout << "Unesi rezultat zavrsnog ispita: ";
	cin >> p.zavrsni;
	cout << "Unesi ukupni uspjeh: ";
	cin >> p.uspjeh;
	return p;
}
// Brisanje (po ID-u)
void brisanje() {
	
}