//Testiranje iz podru�ja algoritmi i strukture podataka
//1. Napravi program koji �e simulirati lije�ni�ku ordinaciju.Unutar main() funkcije se treba nalaziti izbornik s mogu�nostima :
	//a.Unos novih pacijenata u kartoteku(MBO, ime, prezime, popis lijekova)
	//b.Ispis svih pacijenata
	//c.Pretraga pacijenata po MBO(binarno � rekurzivno)
	//d.Sustav �ekaonice
		//d.i.Prijava � kada do�u pa se jave sestri
		//d.ii.Odjava � kada obave pregled
	//e.Dodavanje recepata za lijekove na korisni�ki ra�un pacijenta.
//Nakon unosa svakog novog pacijenta on se mora unijeti u bazu(vanjsku datoteku) i cijeli popis pacijenata se treba sortirati po MBO(SHELL SORT).Prije unosa novog pacijenta treba provjeriti postoji li ve� pacijent s tim MBO(ne smiju postojati 2 pacijenta s istim MBO).
//Pri ulasku u program, iz datoteke se treba u�itati popis pacijenata u odre�enu strukturu podataka(izaberite sami).
//SHELL SORT � pogledajte https ://www.youtube.com/watch?v=qzXAVXddcPU
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