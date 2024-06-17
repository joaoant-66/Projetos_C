#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

#include <string.h>

#define TAMANHO 200

char NomeEquipamento[TAMANHO][50];//200 linhas de equipamentos diferentes,onde cada linha suporta 49 letras.
int Quantidade[TAMANHO][100000];//200 linhas para cada equipamento diferente,mas aqui ele suporta até o numero 100.000;
char Codigo[TAMANHO][50];//essa matriz só possui uma dimensão pq o codigo vai servir para representar tanto o nome do equipamento como a quantidade;
int op;
char temp;//essa variavel é temporaria e usada para evitar que o scanf pegue os dados incorretos.

int menuequipamento();
int pesquisaarquivotxtequipamento();


//FUNCAO CADASTRAR EQUIPAMENTO AQUI:
void cadastroequipamento()
{
	static int linha;
	memset(Quantidade, '\0', sizeof(Quantidade));
	
    do
	{
	
	FILE *fileequipamento;
		        
	fileequipamento = fopen("equipamentos.txt", "a");
	
		
	printf("\n\n   -Digite o nome do equipamento: ");
	
	
	scanf("%[^\n]", &NomeEquipamento[linha]);
	
	
	printf("\n\n   -Digite a quantidade do equipamento(Limite de 100.000 objetos!): ");
	scanf("%s", &Quantidade[linha]);
	
	printf("\n\n   -Crie um codigo para representar o equipamento cadastrado(ex: #001)(obs:ele nao pode possuir espacos!): ");
	scanf("%s", &Codigo[linha]);
	
	fprintf(fileequipamento, "\t--------------------------------------------------------------------------------------------------\n");
	fprintf(fileequipamento, "\t\t\n         -Nome do equipamento: %s\n", NomeEquipamento[linha]);
	fprintf(fileequipamento, "\t\t\t\n         -Quantidade: %s\n", Quantidade[linha]);
	fprintf(fileequipamento, "\t\t\t\n         -Codigo: %s\n", Codigo[linha]);
	fprintf(fileequipamento, "\t--------------------------------------------------------------------------------------------------\n");
	

	printf("\n\n\t\t -Digite 1 para cadastrar outro equipamento ou 0 para voltar: ");
	
	scanf("%d", &op);
	
	system("cls");
	
	scanf("%c",&temp);
	
	linha++;
	
	fclose(fileequipamento);
	
	
	
   }while(op == 1);
   
   if(op == 0)
	{
		
		Sleep(500);
		system("cls");
		menuequipamento();
	}
}


int menuequipamento()
{
	
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA            --CADASTRO E GERENCIAMENTO DE EQUIPAMENTO--           \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		
		printf("\n\n");
		
		printf(" -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar equipamentos-\n\n");
		Sleep(300);
		printf(" -2- Visualizar todos os equipamentos salvos-\n\n");
		Sleep(300);
		printf(" -3- Apagar dados salvos-\n\n");
		Sleep(300);
		printf(" -4- voltar para o menu principal-\n\n");
		Sleep(300);
		printf("  R:");
		Sleep(300);
		scanf("%d", &op);
		
		if(op == 1)
		{
			scanf("%c",&temp);
			system("cls");
			cadastroequipamento();
		}
		
		else if(op == 2)
		{
			system("cls");
			pesquisaarquivotxtequipamento();
		}
		
		else if(op == 3)
		{
			system("cls");
			deletardadosEquipamento();
			
		}
		
		else if(op == 4)
		{
			system("cls");
			areagerenciamento();
		}
	
	
	
	
	
	
}

int pesquisaarquivotxtequipamento()
{
	FILE *fileequipamento;
	char texto_str[100];
	
	fileequipamento = fopen("equipamentos.txt", "r");//arquivo aberto em modo leitura.
	
	if(fileequipamento == NULL)
	{
		Sleep(1000);
		printf("\n\n\n\n\n\n\n\n\t\t\t\tERRO! Dados nao encontrados!");
		Sleep(2000);
		system("cls");
		menuequipamento();
	}
	
	printf("\n\n");
	
	do
	{
		printf("%s", texto_str);
		
	}while(fgets(texto_str, 100, fileequipamento) != NULL);
	
	
	printf("\n\n");
	
	fclose(fileequipamento);
	
	Sleep(1000);
	
	printf("\t\t\t\t-Digite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		system("cls");
		menuequipamento();
	}
	
	else
	{
		Sleep(300);
		printf("Opcao invalida.");
		Sleep(3000);
		system("cls");
		menuequipamento();
		
	}
	
	
}

int deletardadosEquipamento()
{
	Sleep(1000);
	
	printf("\n\n\n\t\t\t-Tem certeza que deseja Apagar os equipamentos salvos?\n\n");
	
	printf("\t\t\t-Digite 1 para apagar os dados ou 0 para cancelar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("equipamentos.txt")== 0)
		{
			printf("\n\n");
			printf("\t\t\tCarregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf("\x1b[2K");
			Sleep(1000);
			printf("\n\n\n\t\t\tDados apagados com sucesso.\n\n");
			Sleep(3000);
			system("cls");
			menuequipamento();
		}
		
		else
		{
			printf("\n\n");
			printf("Dados nao foram apagados.Tente novamente.");
			Sleep(1000);
			system("cls");
			menuequipamento();
		}
	}
}