#include "Com.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Com::com() {

}

void Com::setPChoice(int i, int j, char c) {
	ticTacToe[i][j] = c;
}
char Com::getSpecific(int i, int j) {
	return ticTacToe[i][j];
}
int Com::colChoice(){
	return col_Choice;
}
int Com::rowChoice() {
	return row_Choice;
}
void Com::makeChoice() {
	srand(time(NULL));
	int i = 1;
	
	while (true) {
		if (ticTacToe[0][1] == 'X' && ticTacToe[1][0] == 'X' && ticTacToe[0][0] == '-') {
			ticTacToe[0][0] = 'O';
			row_Choice = 0;
			col_Choice = 0;
			break;
		}
		else if (ticTacToe[0][0] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[2][2] == '-') {
			ticTacToe[2][2] = 'O';
			col_Choice = 2;
			row_Choice = 2;
			break;
		}
		else if (ticTacToe[0][0] == 'O' && ticTacToe[0][1] == 'O' && ticTacToe[0][2] == '-') {
			ticTacToe[0][2] = 'O';
			col_Choice = 2;
			row_Choice = 0;
			break;
		}
		else if (ticTacToe[1][0] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[1][2] == '-') {
			ticTacToe[1][2] = 'O';
			row_Choice = 1;
			col_Choice = 2;
			break;
		}
		else if (ticTacToe[2][0] == 'O' && ticTacToe[2][1] == 'O' && ticTacToe[2][2] == '-') {
			ticTacToe[2][2] = 'O';
			row_Choice = 2;
			col_Choice = 2;
			break;
		}
		else if (ticTacToe[0][0] == 'O' && ticTacToe[1][0] == 'O' && ticTacToe[2][0] == '-') {
			ticTacToe[2][0] = 'O';
			row_Choice = 2;
			col_Choice = 0;
			break;
		}
		else if (ticTacToe[0][1] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[2][1] == '-') {
			ticTacToe[2][1] = 'O';
			row_Choice = 2;
			col_Choice = 1;
			break;
		}
		else if (ticTacToe[0][2] == 'O' && ticTacToe[1][2] == 'O' && ticTacToe[2][2] == '-') {
			ticTacToe[2][2] = 'O';
			row_Choice = 2;
			col_Choice = 2;
			break;
		}//end		
		else if (ticTacToe[0][0] == 'O' && ticTacToe[1][1] == '-' && ticTacToe[2][2] == 'O') {
			ticTacToe[1][1] = 'O';
			col_Choice = 1;
			row_Choice = 1;
			break;
		}
		else if (ticTacToe[0][0] == 'O' && ticTacToe[0][1] == '-' && ticTacToe[0][2] == 'O') {
			ticTacToe[0][1] = 'O';
			col_Choice = 1;
			row_Choice = 0;
			break;
		}
		else if (ticTacToe[1][0] == 'O' && ticTacToe[1][1] == '-' && ticTacToe[1][2] == 'O') {
			ticTacToe[1][1] = 'O';
			row_Choice = 1;
			col_Choice = 1;
			break;
		}
		else if (ticTacToe[2][0] == 'O' && ticTacToe[2][1] == '-' && ticTacToe[2][2] == 'O') {
			ticTacToe[2][1] = 'O';
			row_Choice = 2;
			col_Choice = 1;
			break;
		}
		else if (ticTacToe[0][0] == 'O' && ticTacToe[1][0] == '-' && ticTacToe[2][0] == 'O') {
			ticTacToe[1][0] = 'O';
			row_Choice = 1;
			col_Choice = 0;
			break;
		}
		else if (ticTacToe[0][1] == 'O' && ticTacToe[1][1] == '-' && ticTacToe[2][1] == 'O') {
			ticTacToe[1][1] = 'O';
			row_Choice = 1;
			col_Choice = 1;
			break;
		}
		else if (ticTacToe[0][2] == 'O' && ticTacToe[1][2] == '-' && ticTacToe[2][2] == 'O') {
			ticTacToe[1][2] = 'O';
			row_Choice = 1;
			col_Choice = 2;
			break;
		}
		else if (ticTacToe[0][0] == '-' && ticTacToe[1][1] == 'O' && ticTacToe[2][2] == 'O') {
			ticTacToe[0][0] = 'O';
			col_Choice = 0;
			row_Choice = 0;
			break;
		}
		else if (ticTacToe[0][0] == '-' && ticTacToe[0][1] == 'O' && ticTacToe[0][2] == 'O') {
			ticTacToe[0][0] = 'O';
			col_Choice = 0;
			row_Choice = 0;
			break;
		}
		else if (ticTacToe[1][0] == '-' && ticTacToe[1][1] == 'O' && ticTacToe[1][2] == 'O') {
			ticTacToe[1][0] = 'O';
			row_Choice = 1;
			col_Choice = 0;
			break;
		}
		else if (ticTacToe[2][0] == '-' && ticTacToe[2][1] == 'O' && ticTacToe[2][2] == 'O') {
			ticTacToe[2][0] = 'O';
			row_Choice = 2;
			col_Choice = 0;
			break;
		}
		else if (ticTacToe[0][0] == '-' && ticTacToe[1][0] == 'O' && ticTacToe[2][0] == 'O') {
			ticTacToe[0][0] = 'O';
			row_Choice = 0;
			col_Choice = 0;
			break;
		}
		else if (ticTacToe[0][1] == '-' && ticTacToe[1][1] == 'O' && ticTacToe[2][1] == 'O') {
			ticTacToe[0][1] = 'O';
			row_Choice = 0;
			col_Choice = 1;
			break;
		}
		else if (ticTacToe[0][2] == '-' && ticTacToe[1][2] == 'O' && ticTacToe[2][2] == 'O') {
			ticTacToe[0][2] = 'O';
			row_Choice = 0;
			col_Choice = 2;
			break;
		}
		else if (ticTacToe[2][0] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[0][2] == '-') {
			ticTacToe[0][2] = 'O';
			row_Choice = 0;
			col_Choice = 2;
			break;

		}
		else if (ticTacToe[2][0] == 'O' && ticTacToe[1][1] == '-' && ticTacToe[0][2] == 'O') {
			ticTacToe[1][1] = 'O';
			row_Choice = 1;
			col_Choice = 1;
			break;

		}
		else if (ticTacToe[2][0] == '-' && ticTacToe[1][1] == 'O' && ticTacToe[0][2] == 'O') {
			ticTacToe[2][0] = 'O';
			row_Choice = 2;
			col_Choice = 0;
			break;

		}
		else {
			col_Choice = rand() % 3;
			row_Choice = rand() % 3;
			if (getSpecific(row_Choice, col_Choice) != 'X' && getSpecific(row_Choice, col_Choice) != 'O') {
				ticTacToe[row_Choice][col_Choice] = 'O';
				break;
			}
		}
		
		
	}

}

