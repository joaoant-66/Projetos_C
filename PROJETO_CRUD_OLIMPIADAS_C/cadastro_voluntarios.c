#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

#include <string.h>

#define SIZE 200

char nomevoluntario[100][200];

char idade[100][200];

char cpf[100][200];

char cargo[100][200];

char covid[100][200];

int menuvoluntarios();

int num;
int temp;

void cadastrovoluntario()
{
	static int i;
	
	do
	{
		FILE *filevoluntarios;
		
		filevoluntarios = fopen("voluntarios.txt", "a");
		
		scanf("%c", &temp);
		
		printf("\n\n\t\t-Digite o nome completo do voluntario: ");
		
		scanf("%[^\n]", &nomevoluntario[i]);
		
		scanf("%c", &temp);
		
		printf("\n\n\t\t-Digite a idade do voluntario: ");
		
		scanf("%s", &idade[i]);
		
		scanf("%c", &temp);
		
		printf("\n\n\t\t-Digite o CPF do voluntario: ");
		
		scanf("%s", &cpf[i]);
		
		scanf("%c", &temp);
		
		printf("\n\n\t\t-O voluntario esta vacinado contra a COVID-19? Digite SIM ou NAO: ");
		
		scanf("%s", &covid[i]);
		
		scanf("%c", &temp);
		
		printf("\n\n\t\t-Digite o cargo do voluntario: ");
		
		scanf("%[^\n]", &cargo[i]);
		
		scanf("%c", &temp);
		
		fprintf(filevoluntarios, "\n\n\t\t |Nome :");
		fprintf(filevoluntarios, "%s\n\n", nomevoluntario[i]);
		fprintf(filevoluntarios, "\t\t  |Idade : ");
		fprintf(filevoluntarios, "%s Anos\n\n", idade[i]);
		fprintf(filevoluntarios, "\t\t  |CPF: ");
		fprintf(filevoluntarios, "%s\n\n", cpf[i]);
		fprintf(filevoluntarios, "\t\t  |Vacinado?: ");
		fprintf(filevoluntarios, "%s\n\n", covid[i]);
		fprintf(filevoluntarios, "\t\t  |Cargo:");
		fprintf(filevoluntarios, "%s\n\n", cargo[i]);
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCarregando");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".\n\n");
		
		Sleep(800);
		
		system("cls");
		
		printf("\n\n\t\tSUCESSO! O voluntario foi cadastrado com sucesso!\n\n");
		
		printf("\n\n\t\tDigite 1 para cadastrar outro voluntario ou 0 para voltar ao menu: ");
		
		scanf("%d", &num);
		
		system("cls");
		
		i++;
		
		fclose(filevoluntarios);
		
		
	}while(num == 1);
	
	if(num == 0)
	{
		system("cls");
		menuvoluntarios();
	}
	
}

int listaarquivotxtvoluntario()
{
	char str_texto[100];
	int i;
	int op;
	
	FILE *filevoluntarios;
	
	filevoluntarios = fopen("voluntarios.txt", "r");
	
	if(filevoluntarios == NULL)
	{
		Sleep(1000);
		printf("ERRO! Dados nao encontrados.Tente novamente.");
		Sleep(2000);
		system("cls");
		menuvoluntarios();
	}
	
	printf("\n\n\t\t\t-Voluntarios cadastrados: \n\n");
	
	printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	Sleep(30);
	do
	{
		Sleep(30);
		printf("%s", str_texto);
		Sleep(30);
		
	}while(fgets(str_texto,100, filevoluntarios) != NULL);
	
	Sleep(30);
	
	printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	printf("\n\n");
	
	fclose(filevoluntarios);
	
	Sleep(1000);
	
	printf("\t\tDigite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		system("cls");
		menuvoluntarios();
		
	}
	
	else
	{
		Sleep(500);
		printf("Opcao invalida.");
		Sleep(3000);
		system("cls");
		listaarquivotxtvoluntario();
		
	}
}

int excluirvoluntario()
{
	int op;
	
	printf("\n\n\t\tTem certeza que deseja apagar TODOS os voluntarios salvos?\n");
	
	printf("\n\n\t\tDigite 1 para apagar os voluntarios salvos ou 0 para cancelar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("voluntarios.txt") == 0)
		{
			printf("\n\n");
			printf("Carregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".\n\n");
			Sleep(900);
			printf("Dados apagados com sucesso.\n\n");
			Sleep(2000);
			system("cls");
			menuvoluntarios();
		}
	}
	
	if(op == 0)
	{
		system("cls");
		menuvoluntarios();
	}
	
	else
	{
		printf("\n\n");
		printf("\t\t\tDados nao foram apagados. Tente novamente.");
		Sleep(3000);
		system("cls");
		menuvoluntarios();
	}
}

int menuvoluntarios()
{
	int opcao;
	
    printf("\n");
	printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
	Sleep(300);
	printf("                \xBA                                                                  \xBA\n");
	Sleep(300);
	printf("                \xBA             --CADASTRO E GERENCIAMENTO DE VOLUNTARIOS--          \xBA\n");
	Sleep(300);
	printf("                \xBA                                                                  \xBA\n");
	Sleep(300);
	printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	Sleep(1000);
	printf("\n\n");
	
	printf("   -Digite a opcao desejada:\n\n\n");
	Sleep(300);
	printf(" -1- Cadastrar Voluntarios-\n\n");
	Sleep(300);
	printf(" -2- Visualizar todos os voluntarios cadastrados-\n\n");
	Sleep(300);
	printf(" -3- Apagar todos os voluntarios salvos-\n\n");
	Sleep(300);
	printf(" -4- Voltar para o menu principal-\n\n");
	Sleep(300);
	printf("   R:");
	Sleep(300);
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
			system("cls");
			cadastrovoluntario();
			break;
			
		case 2:
			system("cls");
			listaarquivotxtvoluntario();
			break;
			
		case 3:
			system("cls");
			excluirvoluntario();
			break;
			
		case 4:
			system("cls");
			areagerenciamento();
			break;
	}
}