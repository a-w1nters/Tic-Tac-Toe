#include "menu.h"
#include "Game.h"
#include "Board.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

void Menu::menu() {
	
}
int Menu::pvc()
{
	system("cls");
	Game game{};
	game.game();
	game.gstart(1);
	if (game.gend() == 1) {

		string again = "";
		cout << "Would you like to play again?" << endl;
		getline(cin, again);
		if (again == "yes" || again == "Yes") {
			pvc();
		}
		else if (again == "No" || again == "no") {
			i = 0;
		}
	}

	
	return i;
}

int Menu::pvp()
{
	system("cls");
	Game game{};
	game.game();	
	game.gstart(2);
	if (game.gend() == 1) {
		
		string again = "";
		cout << "Would you like to play again?" << endl;
		getline(cin, again);
		if (again == "yes" || again == "Yes") {
			pvp();
		}
		else if (again == "No" || again == "no") {
			i = 0;
		}
	}

	return i;
}
