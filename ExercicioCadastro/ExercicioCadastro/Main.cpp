#include <iostream>
#include "Cadastro.h"

using namespace std;

int main()
{
	Cadastro registro;
	int escolha;
	do
	{
		cout << ">> O que deseja fazer? <<" << endl;
		cout << "1 - Cadastrar jogador." << endl;
		cout << "2 - Buscar jogador." << endl;
		cout << "3 - Listar jogadores" << endl;
		cout << "4 - Alterar score de um jogador." << endl;
		cout << "5 - Excluir jogador" << endl;

		cout << "0 - Sair." << endl;
		cout << endl << "Digite sua escolha: ";
		cin >> escolha;

		system("cls");

		int id;
		switch (escolha)
		{
		case 1:
			cout << endl <<"Insira o nome a cadastrar: ";
			char nome[20];
			cin >> nome;
			registro.cadastrar(nome);
			break;
		case 2:
			cout << endl << "Insira o ID do jogador: ";
			cin >> id;
			registro.buscar(id);
			break;
		case 3:
			cout << endl << "Listando jogadores:" << endl;
			registro.listar();
			break;
		case 4:
			cout << endl << "Insira o ID do jogador: ";
			cin >> id;
			int score;
			cout << endl << "Insira o novo score: ";
			cin >> score;
			registro.alterarScore(id,score);
			break;
		case 5:
			cout << endl << "Insira o ID do jogador: ";
			cin >> id;
			registro.excluir(id);
			break;
		case 0:
			cout << endl << "Volte sempre!" << endl;
			break;
		default:
			cout << "Input invalido. Tente novamente." << endl;
		}
		cout << endl;
	} while (escolha != 0);
	system("pause");
	return 0;
}