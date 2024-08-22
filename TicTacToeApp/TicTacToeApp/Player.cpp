#include "Player.h"
#include <iostream>
#include <string>

void Player::player() {
	pName = "";
}
void Player::setName(string name)
{
	pName = name;
}

string Player::getName()
{
	return pName;
}
void Player::setPlayerNum(int i) {
	pNum = i;
}
int Player::getPlayerNum() {
	return pNum;
}
