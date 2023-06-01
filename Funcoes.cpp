#include "Cabecalho.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#pragma warning(suppress : 4996) 

//Função para procurar estoque. 
void ProcEstoq() {
	FILE* listaPneu; 
	listaPneu = fopen("ListaPneu.txt", "r");

	char NomePneu[200]; 
	char Buffer[1024*4]; 
	int found = 0; 

	if (listaPneu == NULL)
	{
		std::cout << "\nArquivo não pode ser aberto\n"; 
		std::cout << "\nAbra a função de adicionar pneu para criar banco de dados!\n"; 
		system("PAUSE"); 
		exit(0); 
	}

	char NomeLista[100];
	std::cout << "Informar somente a marca do pneu!\n";
	std::cout << "\nDigite o Nome do pneu que deseja procurar\n->"; 
	std::cin >> NomePneu; 

	
	fseek(listaPneu, 0, SEEK_SET); 

	std::cout << "\nLista de Produtos com o nome indicado:\n";
	

	// while para varrer o arquivo txt. 
	while (fgets(Buffer, 4096, listaPneu) != NULL)
	{
		// if para caso a palavra buscada seja encondrada no banco de dados, printa na tela 
		if (strstr(Buffer, NomePneu) != NULL)
		{
			std::cout << Buffer;
			found = 1; 
		}


	}

	if (!found)
	{
		std::cout << "\nMarca de Pneu não encontrata.\n"; 
	}

	fclose(listaPneu); 
}

// Função para adicionar pneu. 
void AddPneu() {
	//variavel para adicionar novo pneu. 
	 char AddPneu[40];
	 char ModeloPneu[40];
	
	 // Abre um Arquivo TXT, Usado para o banco de dados. 
	 FILE* listaPneu;
	 listaPneu = fopen("ListaPneu.txt", "a");
	 fputs("\n", listaPneu); 

	//Adicionar Marca do Pneu. 
	std::cout << "Escreva a marca do Pneu que deseja Adicionar\n->"; 
	std::cin >> AddPneu; 

	fputs("Marca do Pneu: ", listaPneu);
	fputs(AddPneu, listaPneu);
	
	// Adicionar Modelo do pneu.	
	std::cout << "Escreva o modelo do Pneu deseja Adicionar\n->";
	std::cin >> ModeloPneu;
	fputs("   Modelo Pneu: ", listaPneu); 
	fputs(ModeloPneu, listaPneu); 

	//Adiciona Quantidade de estoque. 
	char QtdEstoque[10000];
	std::cout << "\nEscreva a quantidade de estoque\n->"; 
	std::cin >> QtdEstoque; 
	fputs("   Quantidade Estoque:", listaPneu);
	fputs(QtdEstoque, listaPneu);

	fclose(listaPneu);
}

// Função para Mostar todo o estoque. 
void MostraEstoque() {

	FILE* listaPneu;
	listaPneu = fopen("ListaPneu.txt", "r");

	char Buffer[1024 * 4];

	if (listaPneu == NULL)
	{
		std::cout << "\nArquivo não pode ser aberto\n";
		std::cout << "\nAbra a função de adicionar pneu para criar banco de dados!\n";
		system("PAUSE");
		exit(0);
	}

	while (fgets(Buffer, 4096, listaPneu) != NULL)
	{
			std::cout << Buffer;
		


	}

}