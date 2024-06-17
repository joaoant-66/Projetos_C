#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

#include <string.h>

#define TAMANHO 200

char pais[TAMANHO][50];
int numero_integrantes[100];
char esporte[TAMANHO][50];
char integrantes[TAMANHO][3000];
int op;
char temp;

int menucadastroequipe();
int pesquisaarquivotxtequipe();

int cadastroequipe()
{
	static int linha;
	memset(numero_integrantes, '\0', sizeof(numero_integrantes));
	
	do
	{
		FILE *file_equipe;
		
		file_equipe = fopen("equipes.txt", "a");
		
		printf("\t\t\n\n-Digite o pais representado pela equipe: ");
		
		scanf("%[^\n]", &pais[linha]);
		
		scanf("%c", &temp);
		
		printf("\t\t\n\n-Digite o esporte que a equipe joga: ");
		
		scanf("%[^\n]", &esporte[linha]);
		
		scanf("%c", &temp);
		
		printf("\t\t\n\n-Digite o numero de integrantes da equipe: ");
		
		scanf("%d", &numero_integrantes[linha]);
		
		printf("\t\t\n\n-Digite o nome de cada integrante,separado por virgulas(obs:Se o nome tiver espacos utilize o underline!): ");
		
		scanf("%s", &integrantes[linha]);
		
		scanf("%c", &temp);
		
		fprintf(file_equipe, "--------------------------------------------------------------------------------------------------\n");
		fprintf(file_equipe, "\n Pais Representado: %s\n", pais[linha]);
		fprintf(file_equipe, "\n Esporte: %s", esporte[linha]);
		fprintf(file_equipe, "\n Quantidade de membros: %d\n", numero_integrantes[linha]);
		fprintf(file_equipe, "\n Membros da equipe: %s\n", integrantes[linha]);
		fprintf(file_equipe, "--------------------------------------------------------------------------------------------------\n");
		
		printf("\n\t\t-Digite 1 para cadastrar outra equipe ou 0para voltar: ");
		
		scanf("%d", &op);
		
		system("cls");
		
		linha++;
		
		fclose(file_equipe);
		
		
	}while(op == 1);
	
	if(op == 0)
	{
		Sleep(500);
		system("cls");
		menucadastroequipe();
	}
}


int pesquisaarquivoequipe()
{
	FILE* file_equipe;
	
	char texto_str[100];
	
	file_equipe = fopen("equipes.txt", "r");
	
	if(file_equipe == NULL)
	{
		Sleep(1000);
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\tERRO!! Dados nao encontrados!");
		Sleep(3000);
		system("cls");
		menucadastroequipe();
	}
	
	do
	{
		Sleep(30);
		printf("%s", texto_str);
		Sleep(30);
		
	}while(fgets(texto_str, 100, file_equipe) != NULL);
	
	printf("\n\n");
	
	fclose(file_equipe);
	
	Sleep(2000);
	
	printf("\t\t\tDigite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		system("cls");
		menucadastroequipe();
	}
	
	else
	{
		Sleep(300);
		printf("Opcao Invalida.");
		Sleep(3000);
		pesquisaarquivoequipe();
	}
}

int excluirequipes()
{
	printf("\n\n\t\tTem certeza que deseja apagar TODAS as equipes salvas?\n\n");
	
	printf("\n\n\t\tDigite 1 para apgar as equipes salvos ou 0 para cancelar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("equipes.txt") == 0)
		{
			printf("\n\n");
			printf("\n\n\n\n\n\n\n\t\t\t\t\t\tCarregando");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			printf("\x1b[2K");
			printf("\n\n");
			printf("\tDados apagados com sucesso.");
			
			Sleep(2000);
			
			system("cls");
			
			menucadastroequipe();
			
		}
		
		else
		{
			printf("\n\n");
			
			printf("Dados nao foram apagados. Tente novamente.");
			
			Sleep(2000);
			
			system("cls");
			
			menucadastroequipe();
		}
	}
}


int menucadastroequipe()
{
	int temp;
	
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA                --CADASTRO E GERENCIAMENTO DE EQUIPES--           \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar equipes-\n\n");
		Sleep(300);
		printf(" -2- Visualizar equipes cadastradas-\n\n");
		Sleep(300);
		printf(" -3- Apagar todas as equipes salvas-\n\n");
		Sleep(300);
		printf(" -4- Voltar para a area de gerenciamento-\n\n");
		Sleep(300);
		printf("   R: ");
		Sleep(300);
		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				scanf("%c", &temp);
				system("cls");
				cadastroequipe();
				break;
				
			case 2:
				system("cls");
				pesquisaarquivoequipe();
				break;
				
			case 3:
				system("cls");
				excluirequipes();
				break;
				
			case 4:
				system("cls");
				areagerenciamento();
				break;
				
			default:
				printf("\n\n");
				printf("Opcao invalida.");
				Sleep(2000);
				system("cls");
				menucadastroequipe();
		}
}