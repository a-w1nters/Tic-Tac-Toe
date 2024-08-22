#include "Game.h"
#include "com.h"
#include "Player.h"
#include "Board.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void Game::game() {
	gameToken = 0;
	board.board();
	player_1.player();
	player_2.player();
	game_end_tf = 0;
	com.com();
	
	
	
	
}
bool Game::checkWin() {
	game_end_tf = 0;
	if (p_turn == 1) {

		if (board.getFrame(0, 0) == 'X' && board.getFrame(0, 1) == 'X' && board.getFrame(0, 2) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(1, 0) == 'X' && board.getFrame(1, 1) == 'X' && board.getFrame(1, 2) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(2, 0) == 'X' && board.getFrame(2, 1) == 'X' && board.getFrame(2, 2) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 0) == 'X' && board.getFrame(1, 0) == 'X' && board.getFrame(2, 0) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 1) == 'X' && board.getFrame(1, 1) == 'X' && board.getFrame(2, 1) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 2) == 'X' && board.getFrame(1, 2) == 'X' && board.getFrame(2, 2) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 0) == 'X' && board.getFrame(1, 1) == 'X' && board.getFrame(2, 2) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 2) == 'X' && board.getFrame(1, 1) == 'X' && board.getFrame(2, 0) == 'X') {
			board.printBoard();
			cout << player_1.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
	}
	else if (p_turn == 2) {

		if (board.getFrame(0, 0) == 'O' && board.getFrame(0, 1) == 'O' && board.getFrame(0, 2) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(1, 0) == 'O' && board.getFrame(1, 1) == 'O' && board.getFrame(1, 2) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(2, 0) == 'O' && board.getFrame(2, 1) == 'O' && board.getFrame(2, 2) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 0) == 'O' && board.getFrame(1, 0) == 'O' && board.getFrame(2, 0) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 1) == 'O' && board.getFrame(1, 1) == 'O' && board.getFrame(2, 1) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 2) == 'O' && board.getFrame(1, 2) == 'O' && board.getFrame(2, 2) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 0) == 'O' && board.getFrame(1, 1) == 'O' && board.getFrame(2, 2) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
		else if (board.getFrame(0, 2) == 'O' && board.getFrame(1, 1) == 'O' && board.getFrame(2, 0) == 'O') {
			board.printBoard();
			cout << player_2.getName() << " Wins" << endl;
			game_end_tf = 1;
		}
	}

	return game_end_tf;
}
void Game::pTurn(int i) {
	p_turn = i;
}
bool Game::gend() {
	//int i;
	if (game_end_tf == 1) {
		cout << "Game Over!" << endl;
		cout << "Press any key to continue." << endl;
		_getch();
		return true;
	}
	else {
		return false;
	}
	
	
}
bool Game::verifyS(string s)
{
	int j = 0;
	for (int i = 0; i < 9; i++) {
		if (s == sarr[i]) {
			
			j = 1;
			break;
		
		}
	}
	if (j == 0) {
		return false;
	}
	else {
		return true;
	}
	
}
void Game::gstart(int i) {
	gameToken = i;
	int g = 0;
	
	p_turn = 1;
	if (gameToken == 1) {
		player_2.setName("COM");
		player_2.setPlayerNum(2);
		int slots = 9;
		
		string name;
		cout << "Please enter Player one's name:" << endl;
		getline(cin, name);
		player_1.setName(name);
		player_1.setPlayerNum(1);
		system("cls");
		cout << "Player one's name set to: " << player_1.getName() << endl;
		cout << "Press any key to continue." << endl;
		_getch();
		name = "";
		system("cls");

		while (g != 1) {
			board.printBoard();
			if (p_turn == 1) {
				string move = "";

				cout << player_1.getName() << " Turn (X)" << endl;
				cout << "choose the tile to place an (X). Type in 1,1 syntax." << endl;
				getline(cin, move);

				if (verifyS(move) == 1) {
					int x = move[0] - '0';
					int y = move[2] - '0';
					setPos = board.setPos(x, y, 1);
					com.setPChoice(x, y, 'X');
					slots -= 1;

				}
				else {
					setPos = 0;
				}
				if (setPos == 0 && checkWin() == 0) {
					system("cls");
					p_turn = 1;
				}
				if (checkWin() == 1) {

					g = 1;
				}
				else if (checkWin() == 0 && slots == 0) {
					system("cls");
					board.printBoard();
					cout << "Tie Game" << endl;
					g = 1;
					game_end_tf = 1;
				}
				else if (setPos == 1 && checkWin() == 0) {
					system("cls");
					p_turn = 2;
				}
			}
			else if (p_turn == 2) {
				//string move = "";
				//int setPos;
				cout << player_2.getName() << " Turn (O)" << endl;
				cout << "choose the tile to place an (O). Type in 1,1 syntax." << endl;
				com.makeChoice();
				if (slots != 0) {
					board.setPos(com.rowChoice(), com.colChoice(), 2);
					slots -= 1;
				}
				
				if (checkWin() == 1) {
					g = 1;
				}
				else if (checkWin() == 0 && slots == 0) {
					system("cls");
					board.printBoard();
					cout << "Tie Game" << endl;
					g = 1;
					game_end_tf = 1;
				}
				else if (setPos == 1 && checkWin() == 0) {
					system("cls");
					p_turn = 1;
				}
				

				
			}
		}
		
	}
	else if (gameToken == 2) {			
		p_turn = 1;
		int slots = 9;
		string name;
		cout << "Please enter Player one's name:" << endl;
		getline(cin, name);
		player_1.setName(name);
		player_1.setPlayerNum(1);
		system("cls");
		cout << "Player one's name set to: " << player_1.getName() << endl;
		cout << "Press any key to continue." << endl;
		_getch();
		name = "";
		system("cls");
		cout << "Please enter Player two's name:" << endl;
		getline(cin, name);
		player_2.setName(name);
		player_2.setPlayerNum(2);
		system("cls");
		cout << "Player two's name set to: " << player_2.getName() << endl;
		cout << "Press any key to continue." << endl;
		_getch();
		system("cls");
		

		
		while (g != 1) {
			board.printBoard();
			if (p_turn == 1) {
				string move = "";
				
				cout << player_1.getName() << " Turn (X)" << endl;
				cout << "choose the tile to place an (X). Type in 1,1 syntax." << endl;
				getline(cin, move);
				
				if (verifyS(move) == 1) {
					int x = move[0] - '0';
					int y = move[2] - '0';
					setPos = board.setPos(x, y, 1);			
					
				}
				else{
					setPos = 0;
				}
				
				
				
				if (setPos == 0 && checkWin() == 0) {
					system("cls");
					p_turn = 1;
				}
				if (checkWin() == 1) {

					g = 1;
				}
				else if(setPos == 1 && checkWin() == 0) {
					system("cls");
					p_turn = 2;
				}
			}
			else if (p_turn == 2) {
				string move = "";
				int setPos;
				cout << player_2.getName() << " Turn (O)" << endl;
				cout << "choose the tile to place an (O). Type in 1,1 syntax." << endl;
				getline(cin, move);
				if (verifyS(move) == 1) {
					int x = move[0] - '0';
					int y = move[2] - '0';
					setPos = board.setPos(x, y, 2);

				}
				else {
					setPos = 0;
				}
				
				
				if (setPos == 0 && checkWin() == 0) {
					system("cls");
					p_turn = 2;
				}
				if (checkWin() == 1) {

					g = 1;
				}
				else if (setPos == 1 && checkWin() == 0) {
					system("cls");
					p_turn = 1;
				}
			}
		}
	}
}