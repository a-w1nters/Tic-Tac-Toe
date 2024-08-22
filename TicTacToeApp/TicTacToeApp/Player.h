
#include <string>

#ifndef PLAYER_H
#define PLAYER_H
using namespace std;
class Player
{

public:
	void setName(string name);
	void setPlayerNum(int i);
	int getPlayerNum();
	string getName();
	void player();

private:
	int pNum;
	string pName;
};
#endif
