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

		//Menu de Op��o para Estoque. 
		std::cout << "\nDigite a op��o desejada...\n";

		std::cout << "\n|1| Procurar por um Pneu no Estoque."
			"\n|2| Adicionar um Pneu no Estoque.\n|3| Mostar todo o estoque.\n\n->";
		
		// Int Opcao, variavel para escolha de op��o. 
		std::cin >> Opcao;

		//If de valida��o de entrada. 
		if (Opcao != 1 && Opcao != 2 && Opcao !=3 )
		{
			std::cout << "______________________________________________________\n"
			"----------------------Controle de Estoque-------------\n";

			std::cout << "Digite uma op��o V�lida!!.\n";
			system("PAUSE");

			do
			{
				system("CLS");
				std::cout << "______________________________________________________\n"
					"----------------------Controle de Estoque-------------\n";
				std::cout << "\nDigite a op��o desejada...\n";

				std::cout << "\n|1| Procurar por um Pneu no Estoque."
					"\n|2| Adicionar um Pneu no Estoque.\n|3| Mostar todo o estoque.\n\n->";
				std::cin >> Opcao;

			} while (Opcao != 1 && Opcao != 2);
		}

		//Switch para escolha de op��o.
		switch (Opcao)
		{
		case 1:
			std::cout << "\nOp��o |1| Selecionada!! Redirecionando.\n";
			break;
		case 2:
			std::cout << "\nOp��o |2| Selecionada!! Redirecionando.\n";
			break;
		case 3:
			std::cout <<"\nOp��o |3| Selecionada!! Redirecionando.\n";
			break; 
		}

		//Valida��o  Para a Op��o que o cliente escolheu. 
		int Validacao;
		Validacao = Opcao; 

		// IF Para caso Adicionar Um Novo Pneu. 
		if (Validacao == 2) {
			std::cout << "\nFavor Informar o nome sem espa�o.\n\n"; 
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
		// Verifica��o se o Cliente Deseja sair. 
	 
		std::cout << "\nDeseja sair do progama? 1-sim|2-n�o.\n->"; 
		std::cin >> SairValid; 

		//valida��o de saida. 
		if (SairValid != 1 && SairValid != 2)
		{
			std::cout << "\nFavor Informar corretamente!\n"; 
			do
			{
				std::cout << "\nDeseja sair do progama? 1-sim|2-n�o.\n->";
				std::cin >> SairValid;
			} while (SairValid != 1 && SairValid != 2);
		}
		
		system("CLS"); 


		
	} while (SairValid == 2);
	system("CLS");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\BY AMEDEL ITALO. ";
	
	return 0;
	
}