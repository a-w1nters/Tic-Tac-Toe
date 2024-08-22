#pragma once
#include "Board.h"
#include "Player.h"
#include "com.h"
class Game
{
public:
	void game();
	bool checkWin();	
	void pTurn(int i);
	void gstart(int i);
	bool gend();
private:
	int p_turn, game_end_tf, gameToken, setPos = -1, c;
	Player player_1, player_2;
	Com com;
	Board board;
	string sarr[9] = {"0,0", "0,1", "0,2", "1,0", "1,1", "1,2", "2,0", "2,1", "2,2" };
	bool verifyS(string s);
};

