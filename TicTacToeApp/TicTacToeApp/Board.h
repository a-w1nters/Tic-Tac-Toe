#pragma once
class Board
{
public:
	void board();
	void printBoard();
	bool setPos(int x, int y, int p);
	char getFrame(int x, int y);
	int getPosX();
	int getPosY();
private:
	int bx, _by, bp;
	
	char ticTacToe[3][3];
};

