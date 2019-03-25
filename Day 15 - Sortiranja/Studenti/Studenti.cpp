#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
	string ime;
	string prezime;
	float prosjek;
};

void izbornik();
void unos_studenata();

int main()
{
	vector <Student> st;
	int student_count;

}

void izbornik() {
	int izbor;
	cout << "Izbornik" << endl;
	cout << "1. Unos studenata" << endl;
	cout << "2. Ispis studenata" << endl;
	cout << "3. Sortiranje studenata" << endl;
	cin >> izbor;

	switch (izbor) {
	case 1:
		unos_studenata();
		break;
	}
}

void unos_studenata() {
	Student s;
	
	
	cout << "Ime: ";
	cin >> s.ime;
	cout << "Prezime: ";
	cin >> s.prezime;
	cout << "Prosjek: ";
	cin >> s.prosjek;
}

void ispis_studenata() {
	for (int i = 0; i < s.size();)
}