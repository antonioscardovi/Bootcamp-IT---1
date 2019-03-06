
#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a, b, c, d, e, raz;
	cin >> a >> b >> c >> d >> e;
	raz = (a + b + c + d + e) / 5;
	cout << setprecision(2) << fixed << raz << endl;
	cout << setprecision(2) << fixed << sqrt((pow((a - raz), 2) + pow((b - raz), 2) + pow((c - raz), 2) + pow((d - raz), 2) + pow((e - raz), 2)) / 5);
}

