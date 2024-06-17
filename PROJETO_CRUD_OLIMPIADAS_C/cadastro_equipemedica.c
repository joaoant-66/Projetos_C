#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <string.h>

char Nome[200][100];
char Nacaoequipe[200][100];
char cargo[200][100];
int numero = 1;
int op;
char temp;

int cadastroequipemedica()
{
	static int i;
	
	FILE *fileequipemed;
		
	fileequipemed = fopen("equipesmedicas.txt", "a");
	
	fprintf(fileequipemed,"---------------------------------------\n");
	
	printf("\n\n\t\t-Digite o nome do Pais da Equipe Medica: ");
	
	scanf("%[^\n]", &Nacaoequipe[i]);
	
	scanf("%c", &temp);
	
	printf("\n\n");
	
	fprintf(fileequipemed, "    \n\n--%s--\n\n", Nacaoequipe[i]);
	
	do
	{
	
	
		printf("\n\n\t\t-Digite o nome do profissional: ");
		
		scanf("%[^\n]", &Nome[i]);
		
		scanf("%c", &temp);
		
		printf("\n\n");
		
		printf("\t\t-Digite o cargo do profissional: ");
		
		scanf("%[^\n]", &cargo[i]);
		
		scanf("%c", &temp);
		
		printf("\n\n");
		
		fprintf(fileequipemed, "\nNome do profissional %d: %s\n",numero, Nome[i]);
		fprintf(fileequipemed, "\nCargo: %s\n", cargo[i]);
		
		i++;
		
		numero++;
		
		printf("\tDigite 1 para cadastrar outro profissional da saude para a Equipe medica ou 0 para salvar os dados: ");
	
	    scanf("%d", &op);
	    
	    scanf("%c", &temp);
		
	    system("cls");
	
    }while(op == 1);
		
	
		
	if(op == 0)
	{
	
	fprintf(fileequipemed, "---------------------------------------");
	
	fclose(fileequipemed);
	
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\tCarregando");
	
	Sleep(800);
	
	printf(".");
	
	Sleep(800);
	
	printf(".");
	
	Sleep(800);
	
	printf(".");
	
	Sleep(300);
	
	printf("\x1b[2K");
	
	Sleep(500);
	
	printf("\t\t\n\nEquipe medica cadastrada com sucesso!\n\n");
	
	Sleep(1000);
	
}
	
	printf("  -Digite 1 para cadatrar outra equipe ou 0 para voltar ao menu: ");
	
	scanf("%d", &op);
	
	scanf("%c", &temp);
	
	if(op == 1)
	{
		system("cls");
		cadastroequipemedica();
	}
	
	else if(op == 0)
	{
		system("cls");
		menuequipemed();
	}
	
	
}

int pesquisaarquivotxtequipesmed()
{
	FILE *fileequipemed;
	
	char texto_str[100];
	
	fileequipemed = fopen("equipesmedicas.txt", "r");
	
	if(fileequipemed == NULL)
	{
		Sleep(1000);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tERRO! Dados nao encontrados!");
		Sleep(2000);
		system("cls");
		menuequipemed();
	}
	
	do
	{
		Sleep(30);
		printf("%s", texto_str);
		Sleep(30);
		
	}while(fgets(texto_str, 100, fileequipemed) !=NULL);
	
	printf("\n\n");
	
	fclose(fileequipemed);
	
	Sleep(1000);
	
	printf("\t\t\t\tDigite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		system("cls");
		menuequipemed();
	}
	
	else
	{
		Sleep(300);
		printf("Opcao invalida.");
		Sleep(3000);
		system("cls");
		pesquisaarquivotxtequipesmed();
		
	}
	
}

int deletardadosequipemedica()
{
	Sleep(1000);
	printf("\n\n\t\t-Tem certeza que deseja Apagar TODAS as equipes medicas salvas?\n\n");
	printf("\n\n\t\t-Digite 1 para apagar os dados ou 0 para cancelar: ");
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("equipesmedicas.txt")== 0)
		{
			printf("\n\n");
			printf("\t\tCarregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(300);
			printf("\x1b[2K");
			printf("Dados apagados com sucesso.\n\n");
			Sleep(2000);
			system("cls");
			menuequipemed();
		}
		
		else
		{
			printf("Dados nao foram apagados. Tente novamente.");
			Sleep(3000);
			system("cls");
			menuequipemed();
		}
	}
	
	if(op == 0)
	{
		system("cls");
		menuequipemed();
	}
}

int menuequipemed()
{
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA            --CADASTRO E GERENCIAMENTO DE EQUIPE MEDICA--         \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar equipes Medicas-\n\n");
		Sleep(300);
		printf(" -2- Visualizar equipes medicas cadastradas-\n\n");
		Sleep(300);
		printf(" -3- Apagar dados-\n\n");
		Sleep(300);
		printf(" -4- Voltar para o menu principal-\n\n");
		Sleep(300);
		printf("  R:");
		Sleep(300);
		scanf("%d", &op);
		
		if(op == 1)
		{
			scanf("%c", &temp);
			system("cls");
			cadastroequipemedica();
		}
		
		if(op == 2)
		{
			system("cls");
			pesquisaarquivotxtequipesmed();
		}
		
		if(op == 3)
		{
			system("cls");
			deletardadosequipemedica();
		}
		
		if(op == 4)
		{
			system("cls");
			areagerenciamento();
		}
}