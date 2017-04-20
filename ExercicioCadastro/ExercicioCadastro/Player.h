#pragma once
#include <string>

class Player
{
private:
	int ID;
	
	int score = 0;
public:
	char nome[20];
	Player(int id, char nome[]);
	
	char getNome();

	int getScore();
	void setScore(int score);
};