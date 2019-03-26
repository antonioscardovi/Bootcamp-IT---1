//Testiranje iz područja algoritmi i strukture podataka
//1. Napravi program koji će simulirati liječničku ordinaciju.Unutar main() funkcije se treba nalaziti izbornik s mogućnostima :
	//a.Unos novih pacijenata u kartoteku(MBO, ime, prezime, popis lijekova)
	//b.Ispis svih pacijenata
	//c.Pretraga pacijenata po MBO(binarno – rekurzivno)
	//d.Sustav čekaonice
		//d.i.Prijava – kada dođu pa se jave sestri
		//d.ii.Odjava – kada obave pregled
	//e.Dodavanje recepata za lijekove na korisnički račun pacijenta.
//Nakon unosa svakog novog pacijenta on se mora unijeti u bazu(vanjsku datoteku) i cijeli popis pacijenata se treba sortirati po MBO(SHELL SORT).Prije unosa novog pacijenta treba provjeriti postoji li već pacijent s tim MBO(ne smiju postojati 2 pacijenta s istim MBO).
//Pri ulasku u program, iz datoteke se treba učitati popis pacijenata u određenu strukturu podataka(izaberite sami).
//SHELL SORT – pogledajte https ://www.youtube.com/watch?v=qzXAVXddcPU
//Za pacijenta koristite strukturu.

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Pacijent {
	int MBO;
	string ime;
	string prezime;
	vector<string> lijekovi;
};

void menu();
void novi_pacijent(vector <Pacijent> &pacijent);
void ispis_pacijenata(vector <Pacijent> pacijent);
void spremanje(vector <Pacijent> pacijent);
void mbo_sort(vector <Pacijent> pacijent, int velicina);
bool search(vector <Pacijent> pacijent, int &mbo);


int main()
{
	vector <Pacijent> pacijent;
	Pacijent pacovi;
	int unos;
	ifstream input;
	input.open("pacijenti.txt");

	string MBO, ime, prezime, lijek;

	while (input) {
		getline(input, MBO);
		pacovi.MBO = stoi(MBO);
		getline(input, pacovi.ime);
		getline(input, pacovi.prezime);
		vector <string> medicina;
		do {
			getline(input, lijek);
			if (lijek != "-") {
				medicina.push_back(lijek);
			}
		} while (lijek != "-");
		pacovi.lijekovi = medicina;
		pacijent.push_back(pacovi);
		if (input.eof()) {
			break;
		}
	}
	

	do {
		system("cls");
		menu();
		cin >> unos;

		switch (unos) {
		case 1:
			novi_pacijent(pacijent);
			break;
		case 2:
			ispis_pacijenata(pacijent);
			break;
	/*	case 3:
			pretraga_mbo(pacijent);
			break;
		case 4: 
			cekaonica(pacijent);
			break;
		case 5:
			recepti(pacijent);
			break;*/
		default:
			cout << "Krivi unos" << endl;
			break;
		}
	} while (unos != 0);
}

void menu() {
	cout << "\t\tLjecnicka Ordinacija\n" << endl;
	cout << "1 - Unos novog pacijenta" << endl;
	cout << "2 - Ispis svih pacijenata" << endl;
	cout << "3 - Pretraga pacijenata po MBO" << endl;
	cout << "4 - Cekaonica" << endl;
	cout << "5 - Dodavanje recepata na korisnicki racun pacijenta" << endl;
	cout << "0 - Izlaz" << endl;
	cout << "Unesite broj: ";
}


bool search(vector <Pacijent> pacijent, int &mbo) {
	bool postoji = false;

	for (int i = 0; i < pacijent.size(); i++) {
		if (pacijent[i].MBO == mbo) {
			postoji = true;
		}
		else {
			postoji = false;
		}
	}
	return postoji;
}


void novi_pacijent(vector <Pacijent> &pacijent) {
	Pacijent p;
	int x = 0;
	system("cls");
	cout << "Unesite MBO pacijenta: ";
	cin >> x;
	if (search(pacijent, x) == true) {
		cout << "\nVec postoji pacijent s tim MBO-om!\n";
		system("pause");
		novi_pacijent(pacijent);
	}
	else {
		p.MBO = x;
		cout << "Unesite ime pacijenta: ";
		cin >> p.ime;
		cout << "Unesite prezime pacijenta: ";
		cin >> p.prezime;
		//cout << "Unesite ljekove: ";
		//cin >> p.lijekovi.push_back();
		pacijent.push_back(p);
		spremanje(pacijent);
	}
}

void spremanje(vector <Pacijent> pacijent) {
	ofstream output;
	output.open("pacijenti.txt", ios::out);
	output << "MBO" << "\t" << "IME" << "\t" << "PREZIME" << "\t" << "LIJEKOVI" << endl;
	for (int i = 0; i < pacijent.size(); i++) {
		output << i << "\n" << pacijent[i].MBO << "\n" << pacijent[i].ime << "\n" << pacijent[i].prezime << "\n-" << endl;
	}
	output.close();
}

void ispis_pacijenata(vector <Pacijent> pacijent) {
	system("cls");
	cout << "Popis pacijenata: " << endl;
	for (int i = 0; i < pacijent.size(); i++) {
		cout << pacijent[i].MBO << " " << pacijent[i].ime << " " << pacijent[i].prezime << endl;
	}
	system("PAUSE");
}

void pretraga_mbo(vector <Pacijent> pacijent) {
	int start = 0;
	int kraj = pacijent.size();
	int sredina = (start + kraj) / 2;
	int mbo;
	int index = 0;
	cout << "Unesite MBO: ";
	cin >> mbo;
	while (start<=kraj && pacijent[sredina].MBO != mbo){

	}
 }


void mbo_sort(vector <Pacijent> pacijent, int velicina) {
	int min;
	Pacijent temp;

	for (int i = 0; i < velicina; i++) {
		min = i;

		for (int j = 0; j < velicina; j++) {
			if (pacijent[j].MBO > pacijent[min].MBO) {
				min = j;
			}
			temp = pacijent[i];
			pacijent[i] = pacijent[min];
			pacijent[min] = temp;
		}
	}
}