
#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << j * i << " ";
		}
		cout << endl;
	}


	/*
	// STANDARDNA DEVIJACIJA
	float a, b, c, d, e;
	float sre;

	cin >> a >> b >> c >> d >> e;
	sre = (a + b + c + d + e) / 5;
	cout << setprecision(2) << fixed << sre << endl;
	cout << setprecision(2) << fixed << sqrt((pow(a - sre, 2) + pow(b - sre, 2) + pow(c - sre, 2) + pow(d - sre, 2) + pow(e - sre, 2)) / 5);
	
	KRAJ */ 

	/*
	// APSOLUTNA RAZLIKA
	int a, b;

	cin >> a >> b;
	cout << abs(b - a);
	
	KRAJ */


	// KASNJENJE
	/*int a, b;
	char x;

	cin >> a >> x >> b;
	cout << b + ((a - 8) * 60);*/


	// POREZ
	/*float a, b;

	cin >> a >> b;
	cout << a * (b / 100);*/


	// PODJELA
	//int a, b;

	//cin >> a >> b;
	//cout << b / a;
	//cout << b % a;

	// VELIKI ZBROJ
	/*long int a, b;

	cin >> a >> b;
	cout << a + b;*/


	// DJELJENJE
	//float a, b;
	//cin >> a >> b;
	//cout << a / b;

	// SUMA
	//int a, sum = 0;

	//cin >> a;
	//for (int i = 1; i <= a; i++) {
	//	sum += i;
	//}
	//cout << sum;


	// SUMANIZA
	/*int R, a, sum = 0;

	cin >> R;

	for (int i = 1; i <= a, i++) {
		cin >> a;
	}*/

	int a, sum = 0;

	do {
		cin >> a;
		sum += a;
	} while (a != x);


	for(a = cin >> a; )

	cout << sum;

} 


/* TEMPLATE
#include <iostream>

using namespace std;

int main() {
	
}
*/