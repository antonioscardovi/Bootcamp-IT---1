#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

struct Svemirskibrod {
	int x;
	int y;
};

void pomicanje(Svemirskibrod &k);
void ispis(Svemirskibrod k);
void putovanje(Svemirskibrod k);

int main()
{
	char odg;

	Svemirskibrod mfalcon;

	cout << "Unesi koordinatu X: " << endl;
	cin >> mfalcon.x;
	cout << "Unesi koordinatu Y: " << endl;
	cin >> mfalcon.y;

	ispis(mfalcon);
	pomicanje(mfalcon);
	putovanje(mfalcon);

}


void pomicanje(Svemirskibrod &k) {
	srand(time(NULL));
	k.x = rand() % 20 + 1;
	k.y = rand() % 20 + 1;
}
void ispis(Svemirskibrod k) {
	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {

			if (i != k.x || j != k.y) {
				cout << "X" << " ";
			}
			else {
				cout << "O" << " ";
			}
		}
		cout << endl;
	}
	
}
void putovanje(Svemirskibrod k) {
	char odg;
	do {
		cout << "Putovanje? (d/n): " << endl;
		cin >> odg;
		if (odg != 'd') {
			break;
		}
		system("CLS");
		pomicanje(k);
		ispis(k);
	} while (odg == 'd');
}