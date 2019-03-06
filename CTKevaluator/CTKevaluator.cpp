
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	/*
	// STANDARDNA DEVIJACIJA
	float a, b, c, d, e;
	float sre;

	cin >> a >> b >> c >> d >> e;
	sre = (a + b + c + d + e) / 5;
	cout << setprecision(2) << fixed << sre << endl;
	cout << setprecision(2) << fixed << sqrt((pow(a - sre, 2) + pow(b - sre, 2) + pow(c - sre, 2) + pow(d - sre, 2) + pow(e - sre, 2)) / 5);
	*/

	// APSOLUTNA RAZLIKA
	int a, b;

	cin >> a >> b;
	cout << abs(b - a);
} 

