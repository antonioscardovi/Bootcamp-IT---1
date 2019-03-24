#include "pch.h"
#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

void palindrom();

int main()
{
	palindrom();
}

void palindrom() {
	stack <string> s;
	char rijeci[100];
	string red1, red2;

	cin >> rijeci;
	red1 = rijeci;
	
	cout << "Unesi rijec/i: ";
	for (int i = 0; i <= 15; i++) {
		/*s.push(rijeci[i]);*/
		red1 += rijeci[i];
	}
	s.push(red1);

	for (int i = 0; i <= 15; i++, s.pop()) {
		cout << s.top();
		red2 += s.top();
	}

	if (red1 == red2) {
		"PALINDROM";
	}
	else {
		"Nije palindrom.";
	}



	/*stack <int> stog;
	cout << endl << "Na ulazu u stog:" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
		stog.push(i);
	}
	cout << endl << "Na izlazku iz stoga:" << endl;
	for (int i = 1; i <= 10; i++, stog.pop()) {
		cout << stog.top() << endl;
	}*/
	
}