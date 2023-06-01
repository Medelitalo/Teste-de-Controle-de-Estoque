#include <iostream>
#include <tchar.h>
#include "Cabecalho.h"
#include <stdio.h>

int main() {
	int SairValid=2;
	_tsetlocale(LC_ALL, _T("portuguese"));
	do
	{
		int Opcao;
		std::cout << "______________________________________________________\n"
			"----------------------Controle de Estoque-------------\n";
		std::cout << "-----------------------BY AMEDEL ITALO----------------\n";

		//Menu de Opção para Estoque. 
		std::cout << "\nDigite a opção desejada...\n";

		std::cout << "\n|1| Procurar por um Pneu no Estoque."
			"\n|2| Adicionar um Pneu no Estoque.\n|3| Mostar todo o estoque.\n\n->";
		
		// Int Opcao, variavel para escolha de opção. 
		std::cin >> Opcao;

		//If de validação de entrada. 
		if (Opcao != 1 && Opcao != 2 && Opcao !=3 )
		{
			std::cout << "______________________________________________________\n"
			"----------------------Controle de Estoque-------------\n";

			std::cout << "Digite uma opção Válida!!.\n";
			system("PAUSE");

			do
			{
				system("CLS");
				std::cout << "______________________________________________________\n"
					"----------------------Controle de Estoque-------------\n";
				std::cout << "\nDigite a opção desejada...\n";

				std::cout << "\n|1| Procurar por um Pneu no Estoque."
					"\n|2| Adicionar um Pneu no Estoque.\n|3| Mostar todo o estoque.\n\n->";
				std::cin >> Opcao;

			} while (Opcao != 1 && Opcao != 2);
		}

		//Switch para escolha de opção.
		switch (Opcao)
		{
		case 1:
			std::cout << "\nOpção |1| Selecionada!! Redirecionando.\n";
			break;
		case 2:
			std::cout << "\nOpção |2| Selecionada!! Redirecionando.\n";
			break;
		case 3:
			std::cout <<"\nOpção |3| Selecionada!! Redirecionando.\n";
			break; 
		}

		//Validação  Para a Opção que o cliente escolheu. 
		int Validacao;
		Validacao = Opcao; 

		// IF Para caso Adicionar Um Novo Pneu. 
		if (Validacao == 2) {
			std::cout << "\nFavor Informar o nome sem espaço.\n\n"; 
			AddPneu();
		}
	
		if (Validacao == 1) {
			ProcEstoq(); 
		}

		if (Validacao == 3)
		{
			std::cout << "\n---------------------Lista de Estoque---------------------\n"; 
			MostraEstoque();
		}
		// Verificação se o Cliente Deseja sair. 
	 
		std::cout << "\nDeseja sair do progama? 1-sim|2-não.\n->"; 
		std::cin >> SairValid; 

		//validação de saida. 
		if (SairValid != 1 && SairValid != 2)
		{
			std::cout << "\nFavor Informar corretamente!\n"; 
			do
			{
				std::cout << "\nDeseja sair do progama? 1-sim|2-não.\n->";
				std::cin >> SairValid;
			} while (SairValid != 1 && SairValid != 2);
		}
		
		system("CLS"); 


		
	} while (SairValid == 2);
	system("CLS");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\BY AMEDEL ITALO. ";
	
	return 0;
	
}