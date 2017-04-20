#pragma once
#include "Player.h"
#include <iostream>

using namespace std;

class Cadastro
{
private:
	Player *players[10];
	int cadastros = 0;
public:
	Cadastro();

	void cadastrar(char nome[]);

	void buscar(int id);

	void listar();

	void alterarScore(int id, int score);

	void excluir(int id);
};