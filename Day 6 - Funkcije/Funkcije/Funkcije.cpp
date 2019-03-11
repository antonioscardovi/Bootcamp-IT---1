
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

//void pozdrav();
//void zamjena1(int left, int right);
//void zamjena2(int &left, int &right);
//void zamjena3(int *p_left, int *p_right);
//int zbroj(int x, int y);

// ZADATAK 1
void bottles();
// ZADATAK 2
int zbroj(int x, int y);
// ZADATAK 3
void check_password(string pw, string entry);
// ZADATAK 4
void tablica_mnozenje();
// ZADATAK 5
void izbornik(int a);

// 
// M A I N
// 
int main()
{
	int x= 0, y=0;
	string a = "12345";
	string b;
	/*pozdrav();

	int x = 5;
	int y = 3;

	cout << x << endl;
	cout << &x << endl;

	zamjena1(x, y);
	cout << x << endl;
	cout << y << endl;

	zamjena2(x, y);
	cout << x << endl;
	cout << y << endl;*/

	// ZADATAK 1
	bottles();
	// KRAJ

	cout << "\n\n\n";

	// ZADATAK 2
	zbroj(x, y);
	//KRAJ

	cout << "\n\n\n";

	// ZADATAK 3
	check_password(a, b);

	cout << "\n\n\n";

	// ZADATAK 4
	tablica_mnozenje();

	cout << "\n\n\n";

	// ZADATAK 5
	izbornik();

}

//void pozdrav() {
//	cout << "Pozdrav!" << endl;
//}
//
//int zbroj(int x, int y)
//{
//	return x + y;
//}
//
//void zamjena1(int left, int right) {
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//}
//
//void zamjena2(int &left, int &right) {
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//void zamjena3(int *p_left, int *p_right) {
//	int temp = *p_left;
//	*p_left = *p_right;
//	*p_right = temp;
//}

// ZADATAK 1
void bottles() {
	string song = " bottles of beer on the wall\n";
	int bot = 100;

	do {
		cout << bot << "bottles of beer on the wall, " << bot << " bottles of beer.\n";
		cout << "Take one down and pass it around, " << bot << " bottles of beer on the wall.\n\n";
		bot--;
	} while (bot > 0);
	cout << "No more bottles of beer on the wall, no more bottles of beer.";
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
}

// ZADATAK 2
int zbroj(int x, int y) {
	do {
		cout << "Unesi broj: ";
		cin >> x;
		y = x + y;
		cout << "Rezultat: " << y;
		cout << endl;
	} while (x != 0);
	return y;
}


// ZADATAK 3
void check_password(string pw, string entry) {
	
	for (int i = 0; i < 3; i++) {
		cout << "Enter Password: ";
		cin >> entry;
		if (entry == pw) {
			cout << "Access Granted";
			break;
		}
		else {
			cout << "Wrong Password" << endl;
		}
	}
}


// ZADATAK 4
void tablica_mnozenje() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
}


// ZADATAK 5
void izbornik(int a) {
	cout << "Odaberi funkciju: \n[1] bottles()\n [2] zbroj()\n [3] check_password\n [4] tablica_mnozenje()";
	cin >> a;
	if (a == 1) {
		bottles();
	}
	else if (a == 2) {
		zbroj(int a, int b);
	}
	else if (a == 3) {
		check_password();
	}
	else if (a == 4) {
		tablica_mnozenje();
	}
}