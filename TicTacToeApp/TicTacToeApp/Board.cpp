#include "Board.h"
#include <iostream>
using namespace std;

void Board::board() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			ticTacToe[i][j] = '-';
			
		}
	}

}
char Board::getFrame(int x, int y) {
	int m = x;
	int n = y;
	return ticTacToe[m][n];
}
void Board::printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0 && j == 2) {				
				cout << ticTacToe[i][j] << endl;
				for (int m = 0; m < 15; m++) {
					if (m != 14) {
						cout << "-";
					}
					else if(m == 14) {
						cout << "-" << endl;
					}
				}
			}
			else if (i == 1 && j == 2) {
				cout << ticTacToe[i][j] << endl;
				for (int m = 0; m < 15; m++) {
					if (m != 14) {
						cout << "-";
					}
					else if(m == 14) {
						cout << "-" << endl;
					}
				}
				
			}
			else if (i == 2 && j == 2) {
				cout << ticTacToe[i][j] << endl;
			}			
			else if((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 1 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 0) || (i == 2 && j == 1)) {
				cout <<" " << ticTacToe[i][j] << " " << " | ";

			}
		}
	}
}
bool Board::setPos(int x, int y, int p) {
	bx = x;
	_by = y;
	bp = p;

	if (p == 1 && ticTacToe[bx][_by] == '-') {
		ticTacToe[bx][_by] = 'X';
		return true;
	}
	else if (p == 2 && ticTacToe[bx][_by] == '-') {
		ticTacToe[bx][_by] = 'O';
		return true;
	}
	else if (ticTacToe[bx][_by] != '-') {
		cout << "This is not a valid spot." << endl;
		return false;
	}
}

int Board::getPosX() {
	return bx;
}
int Board::getPosY() {
	return _by;
}
