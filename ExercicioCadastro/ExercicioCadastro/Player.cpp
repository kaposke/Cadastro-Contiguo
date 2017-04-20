#include "Player.h"

Player::Player(int id, char nome[])
{
	ID = id;
	strcpy_s(this->nome, nome);
}

char Player::getNome()
{
	return* nome;
}

int Player::getScore()
{
	return score;
}

void Player::setScore(int score)
{
	this->score = score;
}
