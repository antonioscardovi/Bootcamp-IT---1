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
	stack <char> s;
	string rijeci;
	int n = rijeci.size();

	cout << "Unesi rijec/i: ";
	cin >> rijeci;
	
	
	for (int i = 0; i < n / 2; i++) {
		s.push(rijeci[i]);
	}

	for (int i = (n + 1) / 2; i < n; i++) {
		if (s.top() != rijeci[i]) {
			cout << "Nije palindrom";
		}

		s.pop();
	}

	cout << "PALINDROM";

	
}