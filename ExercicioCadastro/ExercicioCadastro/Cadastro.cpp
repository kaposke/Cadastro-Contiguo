#include "Cadastro.h"

Cadastro::Cadastro()
{
	for (int i = 0; i < 10; i++)
	{
		players[i] = 0;
	}
}

void Cadastro::cadastrar(char nome[])
{
	for (int i = 0; i < 10; i++)
	{
		if (players[i] == 0)
		{
			players[i] = new Player(i, nome);
			std::cout << "Usuario " << nome << " foi cadastrado com o ID: " << i << "." << std::endl;
			return;
		}
	}
	cout << "Numero maximo de players atingido." << endl;
}

void Cadastro::buscar(int id)
{
	if (players[id] != 0)
	{
		cout << "///////////////////" << endl;
		cout << "ID: " << id << endl;
		cout << "Nome:" << players[id]->nome << endl;
		cout << "Score:" << players[id]->getScore() << endl;
		cout << "///////////////////" << endl;
	}
	else
	{
		cout << "Jogador inexistente." << endl;
	}
}

void Cadastro::listar()
{
	for (int i = 0; i < 10; i++)
	{
		if (players[i] != 0)
		{
			cout << endl << "///////////////////" << endl;
			cout << "ID: " << i << endl;
			cout << "Nome:" << players[i]->nome << endl;
			cout << "Score:" << players[i]->getScore() << endl;
			cout << "///////////////////" << endl;
		}
	}
}

void Cadastro::alterarScore(int id, int score)
{
	if (players[id] != 0)
	{
		players[id]->setScore(score);
		cout << "O score do jogador " << players[id]->nome << " foi alterado para " << players[id]->getScore() << endl;
	}
	else
	{
		cout << "Jogador inexistente." << endl;
	}
}

void Cadastro::excluir(int id)
{
	if (players[id] != 0)
	{
		cout << "O jogador " << players[id]->nome << " foi excluido." << endl;
		players[id] = 0;
	}
	else
	{
		cout << "Jogador inexistente." << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		if (players[i] == 0)
		{
			players[i] = players[i + 1];
			players[i + 1] = 0;
		}
	}
}
