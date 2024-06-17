#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <conio.h>

#include <windows.h>

char pais[20];
char cadastro[20];
char qtd_cadastro[20];
int opcao;
int retornoscanf;
char num;
int pc;
int i;
int temp;
int op;

int cadastropais()
{
	static int linha;
	
	FILE *fp;
	
	FILE *paisesmedalhas;
	
	do
	{
	
	
	printf("\n\n -Digite o nome do pais que deseja cadastrar(se o nome tiver espaco,voce deve usar Underline!):");
	
	scanf("%c", &temp);
	
	scanf("%[^\n]", &pais[linha]);
	
	fp = fopen("paises.txt", "a");
	
	paisesmedalhas = fopen("medalhaspaises.txt", "a");
	
	fprintf(fp, "\t\t  -%s\n", &pais[linha]);
	fprintf(paisesmedalhas, "%s", &pais[linha]);
	
	printf("\n\n");
	
	system("cls");
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tCarregando");
	
	Sleep(800);
	
	printf(".");
	
	Sleep(800);
	
	printf(".");
	
	Sleep(800);
	
	printf(".");
	
	Sleep(800);
	
	printf("\x1b[2K");
	
	printf("\n\n");
	
	printf("\tSUCESSO! Pais cadastrado com sucesso!\n\n");
	
	printf("\t\t -O que deseja fazer agora? Digite 1 para cadastrar outro pais ou 0 para voltar ao menu: ");
	
	scanf("%d", &op);
	
	system("cls");
	
	linha++;
	
	fclose(fp);
	
	fclose(paisesmedalhas);
	
   }while(op == 1);
   
   	
	if(op == 0)
	{
		Sleep(500);
		system("cls");
		menupaises();
	}
   
}


int pesquisaarquivotxtpaises()
{
	FILE *fp;
	
	fp = fopen("paises.txt", "r");
	
	if(fp == NULL)
	{
		Sleep(800);
		
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tERRO! Arquivo nao encontrado!");
		
		Sleep(3000);
		
		system("cls");
		
		menupaises();
	}
	
	printf("\n\n\t\t\t\t*Paises cadastrados: *\n\n");
	Sleep(30);
	printf("\t\t-----------------------------------------------\n\n");
	Sleep(30);
	memset(pais, '\0', sizeof(pais));
	
	do
	{
		Sleep(30);
		printf("%s",&pais);
		Sleep(30);
	}while(fgets(pais,100, fp)!= NULL);
	Sleep(30);
	printf("\t\t-----------------------------------------------\n\n");
	
	printf("\n\n");
	
	fclose(fp);
	
	Sleep(1000);
	
	printf("\t\t\tDigite 1 para voltar: ");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		system("cls");
		menupaises();
	}
	
	else
	{
		printf("Opcao invalida.");
		Sleep(2000);
		menupaises();
	}
}

int deletarpaises()
{
	int op;
	
	Sleep(1000);
	printf("\n\n\t\t\t-Tem certeza que deseja apagar TODOS os paises salvos?\n\n");
	printf("\n\n\t\t\tDigite 1 para apagar os dados ou 0 para cancelar:\n\n");
	printf("R:");
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("paises.txt")== 0)
		{
			remove("medalhaspaises.txt");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tCarregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(900);
			printf("\x1b[2K");
			Sleep(3000);
			printf("\tDados apagados com sucesso.\n\n");
			Sleep(2000);
			system("cls");
			menupaises();
		}
		
		else
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tDados nao foram apagados.Tente novamente. ");
			Sleep(3000);
			system("cls");
			menupaises();
		}
	}
}

int menupaises()
{
	int op;
	
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA                --CADASTRO E GERENCIAMENTO DE PAISES--            \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");

		printf("  -Digite a opcao desejada:\n\n\n");
		
		printf(" -1- Cadastrar Paises-\n\n");
		Sleep(300);
		printf(" -2- Visualizar todos os Paises cadastrados-\n\n");
		Sleep(300);
		printf(" -3- Apagar dados-\n\n");
		Sleep(300);
		printf(" -4- Voltar para o menu principal-\n\n");
		Sleep(300);
		printf("   R:");
		Sleep(300);
		scanf("%d", &op);
		
		if(op == 1)
		{
			system("cls");
			cadastropais();
		}
		
		if(op == 2)
		{
			system("cls");
			pesquisaarquivotxtpaises();
		}
		
		if(op == 3)
		{
			system("cls");
			deletarpaises();
		}
		
		if(op == 4)
		{
			system("cls");
			areagerenciamento();
		}
	
}