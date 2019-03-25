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
#include <string>
#include <vector>

using namespace std;

struct Pacijent {
	int MBO;
	string ime;
	string prezime;
	vector<string> ljekovi;
};

void izbornik();

int main()
{
	vector <Pacijent> pc;
	int broj_pacijenta;


}

void izbornik() {
	cout << "\tLjecnicka ordinacija\n" << endl;
	cout << "1) - Unos novog pacijenta u kartoteku" << endl;
	cout << "2) - Ispis svih pacijenata" << endl;
	cout << "3) - Pretraga pacijenata po MBO" << endl;
	cout << "4) - Cekaonica" << endl;
	cout << "5) - Dodavanje recepata na korisnicki racun pacijenta" << endl;
}