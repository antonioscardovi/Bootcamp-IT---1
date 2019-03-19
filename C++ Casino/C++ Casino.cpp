#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <fstream>

using namespace std;

struct Login {
	string name;
	int money;
};

struct Highscore {

};

void the_game(Login &login, int &entry, int &chips);
void start(Login &x);
void player_status(Login &x, int &chips);
void chip_check(Login &x, int &bet, int &chips);
void menu(Login &x, int &entry, int &chips);
void buy_chips(Login &x, int &chips);
void cash_out(Login &x, int &chips);
void game_menu(Login &x, int &entry, int &chips);
void dices(Login &x, int &chips);

int main()
{
	Login login;
	int chips = 0, entry = 0;
	the_game(login, entry, chips);
}

// Start flag
void start(Login &x) {
	cout << "\t\t//////////////////////////////////////////" << endl;
	cout << "\t\t------------------------------------------";
	cout << "\n\n\n\t\t\tWelcome to C++ Casino!!!\n\n\n";
	cout << "\t\t------------------------------------------" << endl;
	cout << "\t\t//////////////////////////////////////////" << endl;
	cout << "\n\nEnter your name: ";
	cin >> x.name;
	cout << "Enter your cash amount: ";
	cin >> x.money;
	if (x.money <= 0) {
		int count = 0;
		do {
			cout << "We don't take credits, Only Money: ";
			cin >> x.money;
			count++;
			if (count == 4) {
				system("cls");
				start(x);
				count = 0;
			}
		} while (x.money <= 0);
	}
	cout << endl;
}
// Player Status
void player_status(Login &x, int &chips) {
	cout << "Name: " << x.name << endl;
	cout << "Money: " << x.money << "$" << endl;
	cout << "Chips: " << chips << endl;
}
// Enough Chips
void chip_check(Login &x, int &bet, int &chips) {
	if (bet > chips) {
		int count = 0;
		string buyleave;
		do {
			cout << "You don't have enough chips" << endl;
			cout << "Bet: ";
			cin >> bet;
			count++;
			if (count == 4) {
				cout << "Buy more chips or leave? - ";
				cin >> buyleave;
				if (buyleave == "buy") {
					buy_chips(x, chips);
				}
				else {
					system("cls");
					main();
				}
			}
		} while (bet > chips);
	}
}
// Menu
void menu(Login &x, int &entry, int &chips) {
	system("cls");
	player_status(x, chips);
	cout << "\t\t//////  MENU  //////\n" << endl;
	cout << "1) Buy chips" << endl;
	cout << "2) Cash out" << endl;
	cout << "3) Select game" << endl;
	cout << "4) High score" << endl;
	cout << "5) Quit game" << endl;
	cin >> entry;
}
// Buy Chips
void buy_chips(Login &x, int &chips) {
	system("cls");
	player_status(x, chips);
	cout << "How many chips do you want to buy?\nChips: ";
	cin >> chips;
	if (x.money < chips * 5) {
		do {
			cout << "Not enough money" << endl;
			cout << "Chips: ";
			cin >> chips;
		} while (x.money < chips * 5);
	}
	x.money -= chips * 5;
	system("pause");
	system("cls");
}
// Cash out
void cash_out(Login &x, int &chips) {
	system("cls");
	player_status(x, chips);
	char answer;
	cout << "Money: " << x.money << "$  " << "Chips: " << chips << endl;
	cout << "Cashing out " << chips * 5 << "$" << endl;
	cout << "Are you sure? (y/n): ";
	cin >> answer;
	if (answer == 'y') {
		x.money += chips * 5;
		chips = 0;
		cout << "You now have: " << x.money << "$" << endl;
	}
	else {
		return;
	}
	system("pause");
	system("cls");
}
// Game menu
void game_menu(Login &x, int &entry, int &chips) {
	system("cls");
	player_status(x, chips);
	cout << "\t//////  GAME MENU  //////\n" << endl;
	cout << "0) Main Menu" << endl;
	cout << "1) Dices" << endl;
	cout << "2) Slots" << endl;
	cout << "3) High-Low" << endl;
	cin >> entry;
	switch (entry) {
	case 1:
		dices(x, chips);
		break;
	case 2:
		slots(x, chips);
		break;
	case 3:
		/*high_low();*/
		break;
	}
}
// Dices
void dices(Login &x, int &chips) {
	system("cls");
	player_status(x, chips);
	srand((unsigned int)time(0));
	int comp = 0, player = 0;
	int playcount, bet;

	ofstream output;
	output.open("pobjede.txt", ios::out);

	cout << "Bet: ";
	cin >> bet;


	chip_check(x, bet, chips);
	/*if (bet > chips) {
		int count = 0;
		string buyleave;
		do {
			cout << "You don't have enough chips" << endl;
			cout << "Bet: ";
			cin >> bet;
			count++;
			if (count == 4) {
				cout << "Buy more chips or leave? - ";
				cin >> buyleave;
				if (buyleave == "buy") {
					buy_chips(x, chips);
				}
				else {
					system("cls");
					main();
				}
			}
		} while (bet > chips);*/

	}

	cout << "(1-100)Rounds: ";
	cin >> playcount;
	system("pause");
	system("cls");

	for (int i = 0; i < playcount; i++)
	{
		if (chips < bet) {
			cout << "You are out of chips..." << endl;
			system("pause");
			break;
		}
		int dice1 = (int)(1 + rand() % 6);
		int dice2 = (int)(1 + rand() % 6);

		cout << "Computer: " << dice1 << endl;
		cout << x.name << ": " << dice2 << endl;

		string izlaz1 = "Comp " + to_string(dice1) + "\n";
		string izlaz2 = x.name + " " + to_string(dice2) + "\n";

		if (dice1 > dice2) {
			cout << "You Lose!" << endl;
			chips -= bet;
			cout << "-" << bet << " Chips." << endl;
			output << izlaz1;
			comp++;
		}
		else if (dice1 < dice2) {
			cout << "Win!!! - " << x.name << endl;
			chips += bet;
			cout << "+" << bet << " Chips" << endl;
			output << izlaz2;
			player++;
		}
		else if (dice1 == dice2) {
			cout << "Draw." << endl;
		}
		
		system("pause");
		system("cls");

	}
	system("cls");
	cout << "You have: " << chips << " Chips." << endl;

	string izlaz3 = string("Score:\n") + "Comp - " + to_string(comp) + "\n";
	string izlaz4 = x.name +  " - " + to_string(player) + "\n";

	output << izlaz3 << izlaz4;

	if (comp > player) {
		output << "Winner: " << "Comp";
	}
	else if (player > comp) {
		output << "Winner: " << x.name;
	}
	else if (player == comp) {
		output << "It's a Draw";
	}

	output.close();
}
// Slots
void slots(Login &x, int &chips) {
	system("cls");
	player_status(x, chips);
	int slot[3][3], bet;
	char spin;

	cout << "Bet: ";
	cin >> bet;

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
// High-Low
void high_low(Login &x, int &chips) {

}
// High Score
void high_score(Login &x, int &chips) {

}
// THE GAME
void the_game(Login &login, int &entry, int &chips) {
	start(login);

	do {
		menu(login, entry, chips);

		switch (entry) {
		case 1:
			buy_chips(login, chips);
			break;
		case 2:
			cash_out(login, chips);
			break;
		case 3:
			game_menu(login, entry, chips);
			break;
		case 4:
			/*high_score();*/
			break;
		case 5:
			exit(0);
			break;
		}
	} while (entry != 5);
}