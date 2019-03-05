

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// treci zadatak (globalna varijabla)
float PI = 3.14;

int main()
{

	// prvi zadatak
	/*int a = 1;
	char b = 'B';
	float c = 2.1;
	double d = 4.23847956254;
	bool e = 1;

	cout << a << "\n" << b << "\n" << c << "\n"  << d << "\n" << e << endl;
	cout << "\n -----------------------------\n\n";*/
	// KRAJ


	// drugi zadatak
	/*
	cout << "Unesi broj: ";
	cin >> a;
	cout << "Unesi slovo: ";
	cin >> b;
	cout << "Unesi decimalni broj: ";
	cin >> c;
	cout << "Unesi veliki decimalni broj: ";
	cin >> d;
	cout << "Unesi 1 ili 0: " << endl;
	*/
	// KRAJ



	// cetvrti zadatak
	/*
	int x, y, z;
	cout << "Prvi broj: ";
	cin >> x;
	cout << "Drugi broj: ";
	cin >> y;
	cout << x << " " << y << endl;

	z = x;
	x = y;
	y = z;

	// bez dodatne varijable

	x = x - y;
	y = x - y;
	x = y - x;
	

	cout << x << " " << y << endl;
	*/
	// KRAJ


	// Peti zadatak
	/*
	float a, b;
	int c;
	cout << "Prvi broj: ";
	cin >> a;
	cout << "Drugi broj: ";
	cin >> b;

	cout << "Zbroj: " << a + b << endl;
	cout << "Razlika: " << a - b << endl;
	cout << "Produkt: " << a * b << endl;
	cout << setprecision(2) << fixed << "Kvocijent: " << a / b << endl;

	cout << "Cetveroznamenkasti broj: ";
	cin >> c;
	cout << "Tisucice: " << c  / 1000 << endl;
	cout << "Stotice: " << ( c % 1000 ) / 100 << endl;
	cout << "Desetice: " << ((c % 1000)%100)/10 << endl;
	cout << "Jedinice: " << (((c % 1000)%100)%10)<< endl;
	*/
	// KRAJ


	// Sesti zadatak
	/*
	cout << "(5 < 3 || (7 / 2) > !(6 == 6)) && !!true || false = ";
	cout << (5 < 3 || (7 / 2) > !(6 == 6)) && !!true || false;
	cout << "!((!(true && false) && !(true || false)) && (!(false && true) || !(false || true))) = ";
	cout << !((!(true && false) && !(true || false)) && (!(false && true) || !(false || true)));
	cout << "!(!(1 > 2 || 3 < 4) && (5 == 6 && 7 <= 8) || 9 >= 0) = ";
	cout << !(!(1 > 2 || 3 < 4) && (5 == 6 && 7 <= 8) || 9 >= 0);
	*/
	// KRAJ



	// Sedmi zadatak
	/*
	int a, b;
	cout << "Prvi broj: ";
	cin >> a;
	cout << "Drugi broj: ";
	cin >> b;

	a += b;
	cout << "a += b  -> " << a << endl;

	a -= b;
	cout << "a -= b  -> " << b << endl;

	a *= b;
	cout << "a *= b  -> " << a << endl;

	a /= b;
	cout << "a /= b  -> " << b << endl;
	*/
	// KRAJ


	// Osmi zadatak
	string a = "welcome";
	string b = "w3resource";
	string sen;
	
	cout << "Duljina:\n";
	cout << "welcome: " << a.size() << endl;
	cout << "w3resource: " << b.size() << endl;

	cout << "Znak na poziciji 3:\n";
	cout << "welcome: " << a.at(3) << endl;
	cout << "w3resource: " << b.at(3) << endl;

	cout << "Je li string prazan:\n";
	cout << "welcome: " << a.empty() << endl;
	cout << "w3resource: " << b.empty() << endl;

	cout << "4 znaka od 3. indeksa:\n";
	cout << "welcome: " << a.substr(3) << endl;
	cout << "w3resource: " << b.substr(3, 4) << endl;

	cout << "Zamijenite \"come\" s \"went\" u \"wlecome\" stringu :\n";
	cout << a.replace(3, 4, "went") << endl;

	cout << "Dodajte neki string po zelji na kraj svakog stringa:\n";
	cout << a.append(" home") << endl;
	cout << b.append(".com") << endl;

	cout << "Ubacite string \"ubacivanje\" na 3. indeks\n";
	cout << a.insert(3, "ubacivanje") << endl;

	cout << "Upisi recenicu:\n";
	cin >> sen;
	// KRAJ



}
