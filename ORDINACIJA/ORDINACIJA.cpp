//Testiranje iz podruèja algoritmi i strukture podataka
//1. Napravi program koji æe simulirati lijeènièku ordinaciju.Unutar main() funkcije se treba nalaziti izbornik s moguænostima :
	//a.Unos novih pacijenata u kartoteku(MBO, ime, prezime, popis lijekova)
	//b.Ispis svih pacijenata
	//c.Pretraga pacijenata po MBO(binarno – rekurzivno)
	//d.Sustav èekaonice
		//d.i.Prijava – kada doðu pa se jave sestri
		//d.ii.Odjava – kada obave pregled
	//e.Dodavanje recepata za lijekove na korisnièki raèun pacijenta.
//Nakon unosa svakog novog pacijenta on se mora unijeti u bazu(vanjsku datoteku) i cijeli popis pacijenata se treba sortirati po MBO(SHELL SORT).Prije unosa novog pacijenta treba provjeriti postoji li veæ pacijent s tim MBO(ne smiju postojati 2 pacijenta s istim MBO).
//Pri ulasku u program, iz datoteke se treba uèitati popis pacijenata u odreðenu strukturu podataka(izaberite sami).
//SHELL SORT – pogledajte https ://www.youtube.com/watch?v=qzXAVXddcPU
//Za pacijenta koristite strukturu.

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pacijent {
	int MBO;
	string ime;
	string prezime;
	vector<string> lijekovi;
};

int main() {
	
}

void menu() {
	cout << "\t\tLJECNICKA ORDINACIJA\n\n";
	cout << "1 - Unos pacijenta" << endl;
	cout << "2 - Ispis pacijenata" << endl;
	cout << "3 - MBO Pretraga" << endl;
	cout << "4 - Cekaonica" << endl;
	cout << "5 - Dodavanje recepata na racun pacijenta" << endl;
}