#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int slot[3][3];
	char spin;

	srand(time(0));

	do {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				slot[i][j] = rand() % 3;
			}
			cout << endl;
		}
		cout << "Spin? (y/n): ";
		cin >> spin;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << slot[i][j] << " ";
			}
			cout << endl;
		} 
		if ((slot[0][0] == slot[0][1] && slot[0][0] == slot[0][2]) && (slot[1][0] == slot[1][1] && slot[1][0] == slot[1][2]) && (slot[2][0] == slot[2][1] && slot[2][0] == slot[2][2])) {
			cout << "*** JACKPOT!!! ***" << endl;
			cout << "*** JACKPOT!!! ***" << endl;
			cout << "*** JACKPOT!!! ***" << endl;
		}
		else if ((slot[0][0] == slot[0][1] && slot[0][0] == slot[0][2]) && (slot[1][0] == slot[1][1] && slot[1][0] == slot[1][2])) {
			cout << "DOUBLE Win!!!" << endl;
		}
		else if ((slot[0][0] == slot[0][1] && slot[0][0] == slot[0][2]) && (slot[2][0] == slot[2][1] && slot[2][0] == slot[2][2])) {
			cout << "DOUBLE Win!!!" << endl;
		}
		else if ((slot[1][0] == slot[1][1] && slot[1][0] == slot[1][2]) && (slot[2][0] == slot[2][1] && slot[2][0] == slot[2][2])) {
			cout << "DOUBLE Win!!!" << endl;
		}
		else if ((slot[0][0] == slot[0][1] && slot[0][0] == slot[0][2]) || (slot[1][0] == slot[1][1] && slot[1][0] == slot[1][2]) || (slot[2][0] == slot[2][1] && slot[2][0] == slot[2][2])) {
			cout << "Win!!!" << endl;
		}
		else {
			cout << "Loss..." << endl;
		}
	} while (spin == 'y');
}