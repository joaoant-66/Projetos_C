#include <stdio.h>

#include <stdlib.h>

#include <windows.h>

int OP;

void opcoes()
{
	
	printf("\n  O que deseja fazer?(digite o numero desejado): \n\n");
	
	printf("  -1- -LOGIN-\n\n");
	
	printf("  -2- -CRIAR UMA CONTA-\n\n");
	
	printf("  -3- -FECHAR O PROGRAMA-\n\n");
	
	printf("   R: ");
	
	scanf("%d", &OP);
	
	
	if(OP == 1)
	{
		system("cls");
		testeLogin();
	}
	
	else if(OP == 2)
	{
		system("cls");
		cadastro();
	}
	
	else if(OP == 3)
	{
		exit(1);
	}
	
	else
	{
		printf("Opcao invalida.");
		Sleep(3000);
		system("cls");
		exibirtela();
		opcoes();
	}
	
	
	
 } 