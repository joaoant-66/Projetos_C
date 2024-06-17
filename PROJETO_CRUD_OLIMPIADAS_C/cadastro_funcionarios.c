#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

#include <string.h>

#define TAMANHO 200

char nome_funcionario[TAMANHO][50];

int idade;//int idade[TAMANHO][30];

char funcao[TAMANHO][50];

char nacionalidade[TAMANHO][50];

int op;

char temp;

int menufuncionarios();
int pesquisaarquivotxtfuncionario();


void cadastrofuncionario()
{
	static int linha;
	//memset(idade, '\0', sizeof(idade));
	
	do
	{
		FILE *filefuncionario;
		
		filefuncionario = fopen("funcionarios.txt", "a");
		
		printf("\t\t\n\n -Digite o nome do funcionario: ");
		
		scanf("%[^\n]", &nome_funcionario[linha]);
		
		scanf("%c", &temp);
		
		printf("\t\t\n\n -Digite a idade do funcionario: ");
		
		scanf("%d", &idade);
		
		scanf("%c", &temp);
		
		printf("\t\t\n\n -Digite o cargo do funcionario: ");
		
		scanf("%[^\n]", &funcao[linha]);
		
		scanf("%c", &temp);
		
		printf("\t\t\n\n -Digite a nacionalidade do funcionario: ");
		
		scanf("%[^\n]", &nacionalidade[linha]);
		
		scanf("%c", &temp);
		
		fprintf(filefuncionario,"\t--------------------------------------------------------------------------------------------------\n");
		fprintf(filefuncionario,"\t\t\n       -Nome do Funcionario: %s\n", nome_funcionario[linha]);
		fprintf(filefuncionario,"\t\t\n       -Idade: %d", idade);
		fprintf(filefuncionario,"\t\t\n       -Cargo: %s\n", funcao[linha]);
		fprintf(filefuncionario,"\t\t         -Nacao do funcionario: %s\n", nacionalidade[linha]);
		fprintf(filefuncionario,"\t--------------------------------------------------------------------------------------------------\n");
		
		
		printf("\t\t\t\n\n-Digite 1 para cadastrar outro funcionario ou 0 para voltar:\n\n");
		
		printf("     R: ");
		
		scanf("%d", &op);
		
		system("cls");
		
		scanf("%c", &temp);
		
		linha++;
		
		fclose(filefuncionario);
		
		
	}while(op == 1);
	
	if(op == 0)
	{
		Sleep(500);
		system("cls");
		menufuncionarios();
	}
}

int pesquisaarquivofuncionario()
{
	FILE *filefuncionarios;
	
	char texto_str[100];
	
	filefuncionarios = fopen("funcionarios.txt", "r");
	
	if(filefuncionarios == NULL)
	{
		Sleep(1000);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tERRO! Dados nao encontrados!");
		Sleep(3000);
		system("cls");
		menufuncionarios();
	}
	
	do
	{
		Sleep(30);
		printf("%s", texto_str);
		Sleep(30);
	}while(fgets(texto_str, 100, filefuncionarios)!= NULL);
	
	printf("\n\n");
	
	fclose(filefuncionarios);
	
	Sleep(1000);
	
	printf("\t\tDigite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		system("cls");
		menufuncionarios();
	}
	
	else
	{
		Sleep(300);
		printf("Opcao invalida.");
		system("cls");
		menufuncionarios();
	}
}

int deletarfuncionarios()
{
	Sleep(1000);
	
	printf("\n\n\t\tTem certeza que deseja Apagar TODOS os funcionarios slavos?\n\n");
	
	printf("\n\n\t\tDigite 1 para apagar os dados ou 0 para cancelar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("funcionarios.txt")== 0)
		{
			printf("\n\n");
			printf("\t\t\t\tCarregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(800);
			printf("\x1b[2K");
			printf("Dados apagados com sucesso.\n\n");
			Sleep(3000);
			system("cls");
			menufuncionarios();
		}
		
		else
		{
			printf("\n\n");
			printf("Dados nao foram apagados. Tente novamente.");
			Sleep(3000);
			system("cls");
			menufuncionarios();
		}
	}
}


int menufuncionarios()
{

        printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA             --CADASTRO E GERENCIAMENTO DE FUNCIONARIOS--         \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");

printf("  -Digite a opcao desejada:\n\n\n");
Sleep(300);
printf(" -1- Cadastrar funcionarios-\n\n");
Sleep(300);
printf(" -2- Visualizar todos os funcionarios cadastrados-\n\n");
Sleep(300);
printf(" -3- Apagar todos os funcionarios salvos-\n\n");
Sleep(300);
printf(" -4- Voltar para o menu principal-\n\n");
Sleep(300);
printf("  R: ");
Sleep(300);
scanf("%d", &op);

if(op == 1)
{
	scanf("%c", &temp);
	system("cls");
	cadastrofuncionario();
}

if(op == 2)
{
	system("cls");
	pesquisaarquivofuncionario();
}

else if(op == 3)
{
	system("cls");
	deletarfuncionarios();
}

else if(op == 4)
{
	system("cls");
	menuprincipal();
}

else
{
	Sleep(300);
	printf("Opcao Invalida.");
	system("cls");
	menufuncionarios();
}

}
