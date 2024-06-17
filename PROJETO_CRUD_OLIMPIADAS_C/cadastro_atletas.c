#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

int cadastroatletas()
{
	FILE *pont_arq;
	
	FILE *atletasmedalhas;
	
	char nome[50];
	char sexo[50];
	char pais[50];
	char modalidade[50];
	char idade[100];
	char altura[50];
	char peso[50];
	int op;
	char temp;
	
	static int i;
	
	
	pont_arq = fopen("atletas.txt", "a");
	
	atletasmedalhas = fopen("medalhasatletas.txt", "a");
	
	printf("\n\n\n\n");
	
	printf("\t\t-Digite o nome do atleta(se o nome tiver espacos, use underline!): ");
	
	scanf("%[^\n]", &nome[i]);
	
	scanf("%c", &temp);
	printf("\n\n");
	printf("\t\t-Digite o sexo do atleta: ");
	
	scanf("%s", &sexo[i]);
	
	scanf("%c", &temp);
	printf("\n\n");
	printf("\t\t-Digite o Pais do atleta: ");
	
	scanf("%[^\n]", &pais[i]);
	
	scanf("%c", &temp);
	printf("\n\n");
	printf("\t\t-Digite a modalidade em que o atleta participa: ");
	
	scanf("%[^\n]", &modalidade[i]);
	
	scanf("%c", &temp);
	printf("\n\n");
	printf("\t\t-Digite a idade do atleta: ");
	
	scanf("%s", &idade[i]);
	
	scanf("%c", &temp);
	printf("\n\n");
	printf("\t\t-Digite a altura do atleta: ");
	
	scanf("%s", &altura[i]);
	
	scanf("%c", &temp);
	printf("\n\n");
	printf("\t\t-Digite o peso do atleta: ");
	
	scanf("%s", &peso[i]);
	
	scanf("%c", &temp);
	
	system("cls");
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCarregando");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf("\x1b[2K");
	system("cls");
	
	printf("  \t\t\n\n  -Por favor, confirme se os dados estao corretos:\n\n");
	printf("  \t\t|Nome:%s  \n", &nome[i]);
	printf("  \t\t|Sexo:%s  \n", &sexo[i]);
	printf("  \t\t|Pais:%s  \n", &pais[i]);
	printf("  \t\t|Modalidade:%s  \n", &modalidade[i]);
    printf("  \t\t|Idade:%s \n", &idade[i]);
	printf("  \t\t|Altura:%s m\n", &altura[i]);
	printf("  \t\t|Peso:%s Kg\n\n", &peso[i]);
	
	printf("  -Digite 1 para para salvar os dados, 2 para mudar algum dado, ou 0 para sair: ");
	scanf("%d", &op);
	
	if(op == 1)
	{
		fprintf(pont_arq, "\t\t-------------------------------------------\n");
		fprintf(pont_arq, "\t\t%s\n", &nome[i]);
		fprintf(pont_arq, "\t\t%s\n", &sexo[i]);
		fprintf(pont_arq, "\t\t%s\n", &pais[i]);
		fprintf(pont_arq, "\t\t%s\n", &modalidade[i]);
		fprintf(pont_arq, "\t\t%s Anos\n", &idade[i]);
		fprintf(pont_arq, "\t\t%s m\n", &altura[i]);
		fprintf(pont_arq, "\t\t%s Kg\n", &peso[i]);
		fprintf(pont_arq, "\t\t--------------------------------------------\n\n");
		fprintf(atletasmedalhas, "%s", &nome[i]);
		fclose(pont_arq);
		fclose(atletasmedalhas);
		
		Sleep(1000);
		printf("\n\n");
		printf("Atleta cadastrado com sucesso!");
		Sleep(3000);
		system("cls");
		
	}
	
	else if(op == 2)
	{
		scanf("%c", &temp);
		system("cls");
		cadastroatletas();
		
	}
	
	else if(op == 0)
	{
		scanf("%c", &temp);
		system("cls");
		menuatletas();
	}
	
	else
	{
		printf("Opcao invalida.Voltando para o menu...");
		Sleep(3000);
		menuatletas();
	}
	
	system("cls");
	
	printf("\n\n\n\n\n\n\n\t\t\t\t\tCarregando");
	
	Sleep(500);
	
	printf(".");
	
	Sleep(500);
	
	printf(".");
	
	Sleep(500);
	
	printf(".");
	
	Sleep(500);
	
	system("cls");
	
	printf("\n\t\tO que deseja fazer agora?\n\n");
	printf("\n\t\tDigite 1 para cadastrar outro atleta ou 0 para voltar ao menu: ");
	
	scanf("%d", &op);
	
	scanf("%c", &temp);
	
	if(op == 1)
	{
		printf("\n\n\n\n\n\n\n\t\t\t\t\tCarregando");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".");
		printf("\x1b[2K");
		system("cls");
		cadastroatletas();
	}
	
	if(op == 0)
	{
		Sleep(500);
		system("cls");
		menuatletas();
		
	}
	
}

int pesquisaarquivotxtatletas()
{
	FILE *pont_arq;
	
	char texto_str[100];
	int op;
	int temp;
	
	pont_arq = fopen("atletas.txt", "r");
	
	if(pont_arq == NULL)
	{
		Sleep(1000);
		printf("ERRO! Dados nao encontrados!");
		Sleep(1000);
		system("cls");
		menuatletas();
	}
	
	
	do
	{
		Sleep(30);
		printf("%s", texto_str);
		Sleep(30);
		
	}while(fgets(texto_str, 100, pont_arq)!= NULL);
	
	printf("\n\n");
	
	fclose(pont_arq);
	
	Sleep(1000);
	
	printf("\t\t\tDigite 1 para voltar: ");
	
	scanf("%d", &op);
	
	
	
	if(op == 1)
	{
		system("cls");
		menuatletas();
	}
	
	else
	{
		Sleep(300);
		printf("Opcao invalida.");
	}
}

int deletardadosatletas()
{
	int op;
	Sleep(1000);
	printf("\t\t\n\n -Tem certeza que deseja apagar TODOS os atletas salvos?\n\n");
	printf("\t\t\n\n -Digite 1 para apagar os dados ou 0 para cancelar: ");
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("atletas.txt")== 0)
		{
			if(remove("medalhasatletas.txt")== 0)
			{
	
			printf("\n\n");
			printf("Carregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".\n\n");
			Sleep(3000);
			printf("Dados apagados com sucesso.\n\n");
			Sleep(500);
			system("cls");
			menuatletas();
		    }
		
		}
		
		else
		{
			printf("\n\n");
			printf("Dados nao foram apagados.Tente novamente.");
			Sleep(1000);
			system("cls");
			menuatletas();
		}
	}
}


int menuatletas()
{
	int op;
	int temp;
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                \xBA\n");
		Sleep(300);
		printf("                \xBA          --CADASTRO E GERENCIAMENTO DE ATLETAS--               \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		
		printf("\n\n");
		
		printf(" -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar atletas-\n\n");
		Sleep(300);
		printf(" -2- Visualizar todos os atletas salvos-\n\n");
		Sleep(300);
		printf(" -3- Apagar dados salvos-\n\n");
		Sleep(300);
		printf(" -4- Voltar para o menu principal-\n\n");
		Sleep(300);
		printf(" R:");
		Sleep(300);
		scanf("%d", &op);
		
		if(op == 1)
		{
			scanf("%c", &temp);
			system("cls");
			cadastroatletas();
		}
		
		else if(op == 2)
		{
			system("cls");
			pesquisaarquivotxtatletas();
		}
		
		else if(op == 3)
		{
			system("cls");
			deletardadosatletas();
		}
		
		else if(op == 4)
		{
			system("cls");
			areagerenciamento();
		}
		
		else
		{
			Sleep(500);
			printf("Opcao invalida.");
			Sleep(3000);
			system("cls");
			menuatletas();
		}
}