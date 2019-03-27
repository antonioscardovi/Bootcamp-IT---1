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
void mbo_sort(vector <Pacijent> pacijent);
bool search(vector <Pacijent> pacijent, int &mbo);


int main()
{
	vector <Pacijent> pacijent;
	Pacijent pc;
	int unos;
	ifstream input;
	input.open("pacijenti.txt");

	string MBO, ime, prezime, lijek;

	while (input) {
		getline(input, MBO);
		pc.MBO = stoi(MBO);
		getline(input, pc.ime);
		getline(input, pc.prezime);
		vector <string> medicina;
		do {
			getline(input, lijek);
			if (lijek != "-") {
				medicina.push_back(lijek);
			}
		} while (lijek != "-");
		pc.lijekovi = medicina;
		pacijent.push_back(pc);
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
		cout << "Unesite ljekove: ";
		cin >> p.lijekovi.push_back();
		pacijent.push_back(p);
		spremanje(pacijent);
	}
}

void spremanje(vector <Pacijent> pacijent) {
	ofstream output;
	output.open("pacijenti.txt", ios::out);
	output << "MBO" << "\t" << "IME" << "\t" << "PREZIME" << "\t" << "LIJEKOVI" << endl;
	for (int i = 0; i < pacijent.size(); i++) {
		output << "\n" << pacijent[i].MBO << "\n" << pacijent[i].ime << "\n" << pacijent[i].prezime << "\n-" << endl;
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


void mbo_sort(vector <Pacijent> pacijent) {
	int min;
	Pacijent temp;

	for (int i = 0; i < pacijent.size(); i++) {
		min = i;

		for (int j = 0; j < pacijent.size(); j++) {
			if (pacijent[j].MBO > pacijent[min].MBO) {
				min = j;
			}
			temp = pacijent[i];
			pacijent[i] = pacijent[min];
			pacijent[min] = temp;
		}
	}
}




///////////////////////////////

// Karlo Dzafic's kod:

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<queue>

#define MAX 100
using namespace std;


typedef struct
{
	string MBO[MAX];
	string ime[MAX], prezime[MAX];
	string popis_lijekova[MAX][MAX];
}pacijenti;

void swap(string *xp, string *yp)
{
	string temp;
	temp = *xp;
	*xp = *yp;
	*yp = temp;
}
//void sortiranjeuzapisu(string arr[], int n)
//{
//  int i, j, min_idx;
//  vector<string>input;
//  vector<string>inputcijelired;
//
//  ifstream citanjeudatoteku("pacijenti.txt");
//  string line;
//  while (citanjeudatoteku)
//  {
//      citanjeudatoteku >> line;
//      input.push_back(line);
//      getline(citanjeudatoteku, line);
//      inputcijelired.push_back(line);
//  }
//
//  // One by one move boundary of unsorted subarray
//  for (i = 0; i < n - 1; i++)
//  {
//      // Find the minimum element in unsorted array
//      min_idx = i;
//      for (j = i + 1; j < n; j++)
//      {
//          if (arr[j] < arr[min_idx])
//          {
//              min_idx = j;
//          }
//
//      }
//      // Swap the found minimum element with the first element
//      swap(&inputcijelired[min_idx], &inputcijelired[i]);
//      swap(&input[min_idx], &input[i]);
//  }
//  //brisat pa ponovno pisati soritrani niz
//  citanjeudatoteku.clear();
//  ofstream novipacijeni;
//  novipacijeni.open("sortiranipacijenti.txt", ios::out | ios::app);
//  for (int i = 0; i < input.size(); i++)
//  {
//      novipacijeni << input[i] << inputcijelired[i]<<endl;
//  }
//  novipacijeni.close();
// 
//
//}

void selectionSort(string arr[], int n)
{
	int i, j, min_idx;
	vector<string>input;
	vector<pacijenti>POPIS;

	ifstream citanjeudatoteku("pacijenti.txt");
	string line;
	while (citanjeudatoteku)
	{
		citanjeudatoteku >> line;
		input.push_back(line);

	}


	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}

		}
		while (citanjeudatoteku)
		{
			getline(citanjeudatoteku, line);
			input.push_back(line);

		}
		citanjeudatoteku.close();
		ofstream pisanjeudatoteku;
		pisanjeudatoteku.open("sortpacijenti.txt", ios::out | ios::app);
		// Swap the found minimum element with the first element
		for (int i = 0; i < input.size(); i++)
		{
			if (i == min_idx)
			{
				pisanjeudatoteku << input[i] << endl;
			}
		}
		pisanjeudatoteku.close();

	}
	//brisat pa ponovno pisati soritrani niz


}



int binarySearch(string arr[], int l, int r, string x)
{
	static int i = 0;
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (arr[mid] == x)
		{
			return mid;
		}


		if (arr[mid] > x)
		{

			return binarySearch(arr, l, mid - 1, x);
		}
		else
		{


			return binarySearch(arr, mid + 1, r, x);
		}
	}


	return -1;
}

void pretragapombo()
{
	vector<string>input;
	vector<string>inputcijelired;
	string maticni;
	ifstream citanjeudatoteku("pacijenti.txt");
	string line;
	while (citanjeudatoteku)
	{
		citanjeudatoteku >> line;
		input.push_back(line);
		getline(citanjeudatoteku, line);
		inputcijelired.push_back(line);
	}

	cout << "Unesite MBO: ";
	cin >> maticni;
	int rez;
	selectionSort(&input[0], input.size());
	rez = binarySearch(&input[0], 0, input.size(), maticni);


	citanjeudatoteku.close();
	if (rez == -1)
	{
		cout << "Nema tog pacijenta:" << endl;
	}
	else
	{
		cout << "To je pacijent:" << input[rez] << " " << inputcijelired[rez] << endl;
	}

	citanjeudatoteku.close();
}


void ispis()
{
	vector<string>input;
	ifstream citanjeudatoteku("pacijenti.txt");
	string line;
	while (citanjeudatoteku)
	{
		getline(citanjeudatoteku, line);
		input.push_back(line);
	}

	for (int i = 0; i < input.size() - 1; i++)
	{
		cout << input[i] << endl;
	}


}

void unos_novih_pacijenta()
{
	system("cls");

	pacijenti pacijent;
	vector <string>citanje_MBO;
	ofstream pisanjeudatoteku;

	int n;
	int brojlijekova;
	int zastavica = 0;
	int provjera = 0;
	int indexi, indexj;
	string MbO;








	cout << endl;
	cout << "Koliko novih pacijenata zelite: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Za " << i + 1 << ". pacijenta:" << endl;
		cout << endl;
		//ovdje citamo iz datoteke sta smo zapisali
		ifstream citanjeudatoteku("pacijenti.txt");
		string line;

		while (citanjeudatoteku)
		{
			citanjeudatoteku >> line;
			citanje_MBO.push_back(line);
		}

		citanjeudatoteku.close();//zatvaramo datoteku za citanje
		cout << "Molim Vas da unesete pacijentov MBO: ";
		cin >> MbO;

		do {
			provjera = 0;



			//ovdje provjeravamo di je prazno mjesto


			for (int j = 0; j < citanje_MBO.size(); j++)
			{
				if (MbO == citanje_MBO[j])
				{
					cout << "Morate odrediti drugi MBO!" << endl;
					cin >> MbO;
					provjera = 1;

					break;
				}
			}
		} while (provjera);

		//sad cemo unijeti podatke
		pisanjeudatoteku.open("pacijenti.txt", ios::out | ios::app);

		pisanjeudatoteku << endl;
		pacijent.MBO[i] = MbO;
		pisanjeudatoteku << pacijent.MBO[i];
		cout << endl;
		cout << "Molim Vas da unesete pacijentovo ime: ";
		cin >> pacijent.ime[i];
		pisanjeudatoteku << " " << pacijent.ime[i];
		cout << endl;
		cout << "Molim Vas da unesete pacijentovo prezime: ";
		cin >> pacijent.prezime[i];
		pisanjeudatoteku << " " << pacijent.prezime[i];
		cout << endl;
		cout << "Koliko lijekova ima pacijent: ";
		cin >> brojlijekova;
		cout << endl;
		cout << "Uneiste lijekove za pacijenta: " << pacijent.ime[i] << " " << pacijent.prezime[i] << endl;
		for (int j = 0; j < brojlijekova; j++)
		{
			cout << j + 1 << ". lijek: ";
			cin >> pacijent.popis_lijekova[i][j];
			pisanjeudatoteku << " " << pacijent.popis_lijekova[i][j];
			cout << endl;
		}

		pisanjeudatoteku.close();
		system("cls");
	}




}
void dodavanje(int index, int brojlijekova)
{
	ofstream pisanjeudatoteku;
	pacijenti pacijent;
	int i = index;
	pisanjeudatoteku.open("pacijenti.txt", ios::out | ios::app);
	cout << "Uneiste lijekove za pacijenta: " << pacijent.ime[i] << " " << pacijent.prezime[i] << endl;
	for (int j = 0; j < brojlijekova; j++)
	{
		cout << j + 1 << ". lijek: ";
		cin >> pacijent.popis_lijekova[i][j];
		pisanjeudatoteku << " " << pacijent.popis_lijekova[i][j];
		cout << endl;
	}
	pisanjeudatoteku.close();
}



int main()
{
	string odgovor;
	queue<string> q;
	string ime;
	float odabir;
	do {
		//clean screen
		system("cls");
		cout << endl;
		//menu for patient
		cout << "          Dobro dosli u nasu obiteljsku ordinaciju!!!" << endl;
		cout << endl;
		cout << "1. Unos novih pacijenata u kartoteku (MBO,ime,prezime,popis lijekova)" << endl;
		cout << "2. Ispis svih pacijenata" << endl;
		cout << "3. Pretraga pacijenata po MBO" << endl;
		cout << "4. Sustav cekaonice" << endl;
		cout << "   4.1 Prijava-kada dodu pa se jave sestri " << endl;
		cout << "   4.2 Odjava-kada obave pregled " << endl;
		cout << "5.Dodavanje recepata za lijekove na korisnicki racun pacijenta" << endl;

		//slecet menu


		cout << endl;
		cout << "Vas odabir je pod rednim brojem?: ";
		cin >> odabir;

		//if statements
		if (odabir == 1)
		{
			unos_novih_pacijenta();
		}
		else if (odabir == 2)
		{
			ispis();
		}
		else if (odabir == 3)
		{
			pretragapombo();
		}
		else if (odabir == 41)
		{
			cout << "Unos prijava pacijenta: ";
			cin >> ime;

			q.push(ime);
		}
		else if (odabir == 42)
		{
			cout << q.front() << " se odjavio" << "\n";
			q.pop();
		}
		else if (odabir == 5)
		{
			cout << "Koji pacijent po redu: ";
			int index;
			cin >> index;
			int brojlijekova;
			cout << "Koliko lijekova:";
			cin >> brojlijekova;
			dodavanje(index, brojlijekova);

		}




		cout << endl;
		cout << "Zelite li jos koje promjene raditi?: ";
		cin >> odgovor;
	} while (odgovor == "DA");




	system("cls");
	cout << endl;
	cout << "Izlaz iz programa..." << endl;
	cout << endl;
	system("pause");
	return 0;
}


//Luka Baljak kod:

//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <fstream>
//using namespace std;
//
//struct pacijent {
//  int MBO;
//  string ime;
//  string prezime;
//  vector<string>popis_lijekova;
//};
////DEKLARACIJE!!
//vector<pacijent>popis;
//queue<string>red;
//queue<string>prez;
////Cekaonica
//void shell_sortiranje();
//void prijava_pacijenata();
//void stanje();
////Menu
//void unos_lijekova();
//void citanje_filea();
//void zapis_ufile(vector<pacijent>popis);
//pacijent unos_pacijenata();
//void prikaz_pacijenata(vector<pacijent> popis);
//int pretrazivanje(vector<pacijent> popis, int start, int kraj, int trazeni_broj);
//
//int main()
//{
//  citanje_filea();
//  int odabir;
//  do {
//      system("cls");
//      cout << "Odaberite opciju:" << endl;
//      cout << "1. Unos novih pacijenata" << endl;
//      cout << "2. Prikaz pacijenata" << endl;
//      cout << "3. Pretrazivanje" << endl;
//      cout << "4. Unos lijekova za pacijenta" << endl;
//      cout << "   ***Cekaonica*** " << endl;
//      cout << "5. Prijava pacijenata" << endl;
//      cout << "6. Stanje u cekaonici" << endl;
//      cout << "   ***Izlaz*** " << endl;
//      cout << "0. Izlaz" << endl;
//      cin >> odabir;
//      switch (odabir) {
//      case 1:popis.push_back(unos_pacijenata());
//          break;
//      case 2:prikaz_pacijenata(popis);
//          system("Pause");
//          break;
//      case 3:int trazeni;
//          cout << "Unesite MBO koji zelite pronaci: " << endl;
//          cin >> trazeni;
//          shell_sortiranje();
//          int y;
//          y = pretrazivanje(popis, 0, popis.size(), trazeni);
//          /*if (y == -1) {
//              cout << "Prob";
//          }*/
//          system("pause");
//          break;
//      case 4:unos_lijekova();
//          break;
//      case 5:prijava_pacijenata();
//          break;
//      case 6:stanje();
//          system("pause");
//          break;
//      case 0:shell_sortiranje();
//          zapis_ufile(popis);
//          break;
//      default:cout << "Neispravan unos!!" << endl;
//          system("Pause");
//          break;
//      }
//  } while (odabir != 0);
//
//  system("pause");
//  return 0;
//}
////FUNKCIJE!!
////void cekaonica() {
//  //  /*int opcija;
//  //  do {
//  //      system("cls");
//  //
//  //      cout << "           !!!CEKAONICA!!!             ";
//  //      cout << "Izaberite opciju (ili 0 za izlaz): " << endl;
//  //      cout << "1.Prijava pacijenata" << endl;
//  //      cout << "2.Odjava pacijenata" << endl << "3.Stanje" << endl;
//  //      cin >> opcija;
//  //      switch (opcija) {
//  //      case 1:prijava_pacijenata();
//  //          break;
//  //      case 2:odjava_pacijenata();
//  //          system("Pause");
//  //          break;
//  //      case 3:stanje();
//  //          system("pause");
//  //          break;
//  //      case 0:
//  //          break;
//  //      }
//  //  } while (opcija != 0);*/
//  //}
//  //void odjava_pacijenata() {
//      //system("cls");
//      //for (int i = 0; i < 1; i++,red.pop()) {
//      //  cout << red.front() << " se odjavio" << endl;
//      //}
//  //}
//void prijava_pacijenata() {
//  system("cls");
//  cout << "Koliko pacijenata zelite prijaviti?: " << endl;
//  int kol;
//  cin >> kol;
//  for (int i = 0; i < kol; i++) {
//      string unos;
//      string prezime;
//      cout << "Unesite ime: " << endl;
//      cin >> unos;
//      cout << "Unesite prezime: " << endl;
//      cin >> prezime;
//      red.push(unos);
//      prez.push(prezime);
//  }
//}
//
//void stanje() {
//  system("cls");
//  if (red.size() > 1) {
//      for (int i = 0; i < 1; i++, red.pop()) {
//          cout << red.front() << " " << prez.front() << " je trenutno kod doktora" << endl;
//      }
//      cout << red.front() << " " << prez.front() << " je sljedeci na redu" << endl;
//      cout << red.size() << " ceka u cekaonici!!";
//  }
//  else if (red.size() == 1) {
//      for (int i = 0; i < 1; i++, red.pop()) {
//          if (i == 0) {
//              cout << red.front() << " " << prez.front() << " je trenutno kod doktora" << endl;
//          }
//          cout << "Nema nitko u cekaonici";
//      }
//  }
//  else {
//      cout << "Nema pacijenata!!";
//  }
//}
//
//void citanje_filea()
//{
//
//  pacijent p;
//  ifstream input;
//  input.open("pacijenti.txt");
//  string MBO, ime, prezime, lijek;
//
//  while (input) {
//      getline(input, MBO);
//      p.MBO = stoi(MBO);
//      getline(input, p.ime);
//      getline(input, p.prezime);
//      vector <string> medicina;
//      do {
//          getline(input, lijek);
//          if (lijek != "-") {
//              medicina.push_back(lijek);
//          }
//      } while (lijek != "-");
//      p.popis_lijekova = medicina;
//      popis.push_back(p);
//      if (input.eof()) {
//          break;
//      }
//  }
//}
//
////{
////  ifstream input("pacijenti.txt");
////  int i;
////  string ime;
////  string prezime;
////  string lijek;
////  vector<int>mbo;
////  vector<string>imena;
////  vector<string>prezimena;
////  //vector<string>popislijekova;
////  pacijent pom;
////  int counter = 0;
////  while (!input.eof()) {
////      input >> i >> ime >> prezime;
////      getline(input, lijek);
////      mbo.push_back(i);
////      imena.push_back(ime);
////      prezimena.push_back(prezime);
////      //popislijekova.push_back(lijek);
////      counter++;
////  }
////  input.close();
////
////  //Upis iz filea u vektor pacijenata
////
////  for (int i = 0; i < counter; i++) {
////  pacijent dummy;
////  dummy.MBO = mbo[i];
////  dummy.ime = imena[i];
////  dummy.prezime = prezimena[i];
////
////  popis.push_back(dummy);
////  }
////
////}
//
//void zapis_ufile(vector<pacijent>popis) {
//  ofstream output;
//  output.open("pacijenti.txt", ios::out);
//  for (int i = 0; i < popis.size(); i++) {
//      output << popis[i].MBO << endl << popis[i].ime << endl << popis[i].prezime << endl;
//      for (int j = 0; j < popis[i].popis_lijekova.size(); j++) {
//          output << popis[i].popis_lijekova[j] << endl;
//      }
//      output << "-" << endl;
//  }
//  output.close();
//
//  //ofstream output2;
//  //output2.open("pacijenti.txt", ios::out);
//  //for (int i = 0; i < popis.size(); i++) {
//  //  output2 << popis[i].MBO << " " << popis[i].ime << " " << popis[i].prezime;
//  //}
//  //output2.close();
//}
//
//pacijent unos_pacijenata() {
//  int a;
//  pacijent novi;
//  bool isti = false;
//  do {
//      cout << "Unesite MBO: ";
//      cin >> a;
//      for (int i = 0; i < popis.size(); i++) {
//          if (a == popis[i].MBO) {
//              cout << "Vec postoji pacijent s tim MBO\n";
//              isti = true;
//              break;
//          }
//          else {
//              isti = false;
//          }
//      }
//  } while (isti);
//  novi.MBO = a;
//
//  cout << "\nUnesite ime: ";
//  cin >> novi.ime;
//
//  cout << "\nUnesite Prezime: ";
//  cin >> novi.prezime;
//
//  return novi;
//}
//
//void unos_lijekova() {
//  //Unos lijekova
//  string lijek;
//  cout << "Ime pacijenta: " << endl;
//  string ime;
//  cin >> ime;
//  int indeks;
//  for (int i = 0; i < popis.size(); i++) {
//      if (popis[i].ime == ime) {
//          indeks = i;
//      }
//  }
//  do {
//      cout << "\nUnesite lijek (ili 0 za izlaz): " << endl;
//      cin >> lijek;
//      if (lijek == "0") {
//          break;
//      }
//      popis[indeks].popis_lijekova.push_back(lijek);
//  } while (lijek != "0");
//}
//
//void prikaz_pacijenata(vector<pacijent> popis) {
//  cout << "MBO" << "\t" << "IME" << "\t" << "PREZIME" << "\t\t" << "LIJEKOVI" << endl;
//  for (int i = 0; i < popis.size(); i++) {
//      cout << popis[i].MBO << "\t" << popis[i].ime << "\t" << popis[i].prezime << "\t\t";
//      for (int j = 0; j < popis[i].popis_lijekova.size(); j++) {
//          if (j < popis[i].popis_lijekova.size() - 1) {
//              cout << popis[i].popis_lijekova[j] << ", ";
//          }
//          else {
//              cout << popis[i].popis_lijekova[j];
//          }
//      }
//      cout << endl;
//  }
//  /*for (int i = 0; i < popis.size(); i++) {
//      cout << "MBO:" << popis[i].MBO << "\t" << "Ime:" << popis[i].ime << "\t" << "Prezime:" << popis[i].prezime << endl;
//      cout << "Lijekovi:" << endl;
//      for (int j = 0; j < popis[i].popis_lijekova.size(); j++) {
//          cout << popis[i].popis_lijekova[j] << endl;
//      }
//  }*/
//}
//
//int pretrazivanje(vector<pacijent> popis, int start, int kraj, int trazeni_broj) {
//  int sredina = (start + kraj) / 2;
//
//  if (popis[sredina].MBO == trazeni_broj) {
//      cout << popis[sredina].ime << " " << popis[sredina].prezime;
//      return 0;
//  }
//  else if (start == kraj && popis[sredina].MBO != trazeni_broj) {
//      cout << "Ne postoji taj MBO" << endl;
//      return -1;
//  }
//  else {
//      if (popis[sredina].MBO < trazeni_broj) {
//          pretrazivanje(popis, sredina + 1, kraj, trazeni_broj);
//      }
//      else if (popis[sredina].MBO > trazeni_broj) {
//          pretrazivanje(popis, start, sredina - 1, trazeni_broj);
//      }
//  }
//}
//
//void shell_sortiranje() {
//  int n = popis.size();
//  for (int k = n / 2; k > 0; k /= 2) {
//      for (int i = k; i < n; i++) {
//          pacijent pom1 = popis[i];
//          int pom = popis[i].MBO;
//          int j;
//          for (j = i; j >= k && popis[j - k].MBO > pom; j -= k) {
//              popis[j] = popis[j - k];
//
//          }
//          popis[j] = pom1;
//      }
//  }
//}