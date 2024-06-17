#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

#include <string.h>

char regras_str[200][200];
int op;
char temp;

int menuCOVID();
int pesquisaarquivotxtCOVID();

//FUNCAO CADASTRO REGRAS COVID
void cadastroCOVID()
{
	static int i;
	int numero = 1;
	memset(regras_str, '\0', sizeof(regras_str));
	
	do
	{
		FILE *covid;
		
		covid = fopen("regrascovid.txt", "a");
		
		printf("\n -Digite uma regra relacionada ao controle da COVID: ");
		
		scanf("%[^\n]", &regras_str[i]);
		
		fprintf(covid, "\t\t  -%s\n\n", regras_str[i]);
		
		printf("\t\t\n -Digite 1 para cadastrar outra regra ou 0 para voltar: ");
		
		scanf("%d", &op);
		
		system("cls");
		
		scanf("%c", &temp);
		
		i++;
		
		fclose(covid);
		
	}while(op == 1);
	
	if(op == 0)
	{
		Sleep(500);
		system("cls");
		menuCOVID();
	}
	
}

//FUNCAO PRINTAR REGRAS COVID SALVAS
int pesquisaarquivotxtCOVID()
{
	FILE *covid;
	char texto_str[100];
	
	covid = fopen("regrascovid.txt", "r");
	
	if(covid == NULL)
	{
		Sleep(1000);
		printf("\n\n\t\tERRO! Programa nao encontrado!");
		Sleep(2000);
		system("cls");
		menuCOVID();
	}
	
	Sleep(30);
	
	printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	
	do
	{
		Sleep(30);
		printf("%s", texto_str);
		Sleep(30);	
	}while(fgets(texto_str, 100, covid) != NULL);
	
	Sleep(30);
	
	printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	printf("\n\n\n");
	
	fclose(covid);
	
	Sleep(1000);
	
	printf("\t\t\tDigite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		Sleep(500);
		system("cls");
		menuCOVID();
	}
	
	else
	{
		Sleep(500);
		printf("Opcao invalida.");
	}
	
}


int deletardadosCOVID()
{
	Sleep(1000);
	printf("\n\n\t\t -Tem certeza que deseja apagar as regras salvas?\n\n");
	printf("\n\n\t\t -Digite 1 para apagar os dados ou 0 para cancelar: ");
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("regrascovid.txt")== 0)
		{
			printf("\n\n");
			printf("Carregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(3000);
			printf("Dados apagados com sucesso.\n\n");
			Sleep(1000);
			system("cls");
			menuCOVID();
		}
		
		else
		{
			printf("\t\tDados nao foram apagados.Tente novamente.");
			Sleep(1000);
			system("cls");
			menuCOVID();
		}
	}
}

int menuCOVID()
{



	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA                       --CONTROLE DE COVID--                      \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar regras de controle-\n\n");
		Sleep(300);
		printf(" -2- Visualizar regras cadastradas-\n\n");
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
			scanf("%c", &temp);
			system("cls");
			cadastroCOVID();
		}
		
		if(op == 2)
		{
			system("cls");
			pesquisaarquivotxtCOVID();
		}
		
		if(op == 3)
		{
			Sleep(1000);
			system("cls");
			deletardadosCOVID();	
		}
		
		if(op == 4)
		{
			Sleep(1000);
			system("cls");
            areagerenciamento();		
		}
}