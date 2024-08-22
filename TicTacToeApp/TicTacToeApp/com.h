#pragma once
class Com
{
public:
	void com();
	void setPChoice(int i, int j, char c);
	char getSpecific(int i, int j);
	void makeChoice();
	int colChoice();
	int rowChoice();
	void mVerify(int i, int j);
private:
	char ticTacToe[3][3] = 
	{ 
	
		{'-', '-', '-',},
		{'-', '-', '-',},
		{'-', '-', '-',}
	
	};
	int row_Choice, col_Choice;
};

