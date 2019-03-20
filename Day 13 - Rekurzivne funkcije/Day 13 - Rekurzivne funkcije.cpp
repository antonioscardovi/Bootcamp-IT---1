#include "pch.h"
#include <iostream>

using namespace std;

void manjipremavecem(int i);
void vecipremamanjem(int i);
void beskonacna(int i);
int faktorijel(int i);
int fib(int i);
void fib_niz(int i);

int main()
{
	int i;
	cout << "Do kojeg broja: ";
	cin >> i;
	manjipremavecem(i);
	cout << "Od kojeg broja: ";
	cin >> i;
	vecipremamanjem(i);

	/*cout << "ONounavaopsdnvaopve: ";
	cin >> i;
	beskonacna(i);*/

	cout << "Faktorijela broja: ";
	cin >> i;
	cout << faktorijel(i) << endl;

	cout << "Fibbonacijev broj za element u nizu: ";
	cin >> i;
	cout << fib(i) << endl;

	cout << "Fibonacijev niz do: ";
	cin >> i;
	fib_niz(i);
}

void manjipremavecem(int i) {
	i--;
	if (i > 0) {
		manjipremavecem(i);
	}
	cout << i + 1 << endl;
}

void vecipremamanjem(int i) {
	cout << i << endl;
	i--;
	if (i > 0) {
		vecipremamanjem(i);
	}
}

void beskonacna(int i) {
	cout << i << endl;
	i++;
	for (int j = 0; j < i; j++) {
		beskonacna(i);
	}
	
}

int faktorijel(int i) {
	if (i == 1) {
		return 1;
	}
	else {
		return faktorijel(i - 1) * i;
	}
}

int fib(int i) {
	if (i == 0) {
		return 0;
	}
	else if (i == 1) {
		return 1;
	}
	else {
		return fib(i - 1) + fib(i - 2);
	}
}

void fib_niz(int i) {
	if (i > 0) {
		fib_niz(i - 1);
	}
	cout << fib(i) << endl;
}