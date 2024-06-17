#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <string.h>

#include <conio.h>

#include <windows.h>

int opcao;



int cadastrolocalj()
{
	char local[100][200];
	
	int num;
	
	char temp;
	
	FILE *fp;
	
	FILE *localcalendarioolimpico;
	
	static int linha;
	
	do
	{
		printf("\n\n  -Digite o nome do local de jogo que voce deseja cadastrar(se o nome do local tiver espaco use underline!): ");
		
		scanf("%[^\n]", &local[linha]);
		
		scanf("%c", &temp);
		
		fp = fopen("localj.txt", "a");
		
		localcalendarioolimpico = fopen("locaiscalendarioolimpico.txt", "a");
		
		fprintf(fp, "\n\n\t\t  -%s\n\n", local[linha]);
		fprintf(localcalendarioolimpico, "%s", local[linha]);
		
		printf("\n\n");
		
		printf("Carregando");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".\n\n");
		
		Sleep(800);
		
		printf("SUCESSO!! Seu local de jogo foi cadastrado com sucesso!\n\n");
		
		printf("Digite 1 para cadastrar outro local ou 0 para voltar ao menu:\n\n");
		
		printf("R:");
		
		scanf("%d", &num);
		
		scanf("%c", &temp);
		
		system("cls");
		
		fclose(fp);
		
		fclose(localcalendarioolimpico);
		
		linha++;
		
		
	}while(num == 1);
	
	if(num == 0)
	{
		menulocalj();
		
	}
	
	return 0;
	
}

int cadastrolocaltreino()
{
	char localtreino[100][200];
	
	int num;
	
	int temp;
	
	FILE *localdetreino;
	
	scanf("%c", &temp);
	
	do
	{
		
		printf("\n\n\t-Digite o nome do local de treino que voce deseja cadastrar: ");
		
		scanf("%[^\n]", &localtreino);
		
		scanf("%c", &temp);
		
		localdetreino = fopen("locaisdetreino.txt", "a");
		
		fprintf(localdetreino, "\t\t %s\n\n", &localtreino);
		
		printf("\n\n");
		
		printf("Carregando");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf("\x1b[2K");
		
		printf("\n\n");
		
		printf("SUCESSO!! Seu local de treino foi cadastrado com sucesso!\n\n");
		
		printf("Digite 1 para cadastrar outro local ou 0 para voltar para o menu: ");
		
		scanf("%d", &num);
		
		scanf("%c", &temp);
		
		system("cls");
		
		fclose(localdetreino);
		
	}while(num == 1);
	
	if(num == 0)
	{
		system("cls");
		menulocalj();
	}
	
	return 0;
}

int pesquisaarquivotxtlocaltreino()
{
	char texto_str[100];
	
	int i;
	
	int opcao;
	
	FILE *localdetreino;
	
	localdetreino = fopen("locaisdetreino.txt", "r");
	
	if(localdetreino == NULL)
	{
		Sleep(1000);
		printf("\n\n\t\tERRO! Dados nao encontrados!");
		Sleep(3000);
		system("cls");
		menulocalj();
	}
	
	printf("\n\n\t\t\tLocais de treino cadastrados: \n\n");
	
	printf("\n\n\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	Sleep(30);
	do
	{
		Sleep(30);
		printf("%s", texto_str);
		Sleep(30);
	}while(fgets(texto_str, 100, localdetreino) != NULL);
	
	Sleep(30);
	printf("\n\n\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	printf("\n\n");
	
	fclose(localdetreino);
	
	Sleep(1000);
	
	printf("\n\n\t\t-Digite 1 para voltar: ");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		system("cls");
		menulocalj();
	}
	
	else
	{
		Sleep(800);
		printf("Opcao invalida.");
		Sleep(3000);
		system("cls");
		pesquisaarquivotxtlocaltreino();
	}
}

int listalocalj()
{
	char texto_str[100];
	int i;
	int opcao;
	
	FILE *fp;
	
	fp = fopen("localj.txt", "r");
	
	if(fp == NULL)
	{
		Sleep(1000);
		printf("\n\n\t\tERRO! Programa nao encontrado!");
		Sleep(3000);
		menulocalj();
	}
	
	
	printf("Locais de jogos cadastrados : \n\n");
	
	printf("\n\n\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	
	do
	{
		printf("%s", texto_str);
		
	}while(fgets(texto_str, 100, fp) != NULL);
	
	printf("\n\n\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	printf("\n\n");
	
	fclose(fp);
	
	Sleep(1000);
	
	printf("\n\n\t\tDigite 1 para voltar:");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		system("cls");
		menulocalj();
	}
	
	else
	{
		Sleep(800);
		printf("Opcao invalida");
		Sleep(3000);
		system("cls");
		menulocalj();
	}
}

int excluirlocalj()
{
	printf("\n\n\t\tTem certeza que deseja apagar todos os locais de jogos salvos?\n");
	
	printf("\n\n\t\tDigite 1 para apagar os locais de jogos salvas ou 0 para cancelar:");
	
	printf("\n\nR: ");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		if(remove("localj.txt")== 0)
		{
			if(remove("locaiscalendarioolimpico.txt") == 0)
			{
			
			printf("\n\n");
			printf("\tCarregando");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".\n\n");
			printf("\x1b[2K");
			printf("\t\tDados apagados com sucesso\n\n");
			
			Sleep(2000);
			
			system("cls");
			
			menulocalj();
		    
			}
		}

		else
		{
			printf("\n\n");
			
			printf("Dados nao foram apagados. Tente novamente.");
			
			Sleep(1000);
			
			system("cls");
			
			menulocalj();
		}
	}
	
			
		else if(opcao == 0)
		{
			system("cls");
			menulocalj();
		}
		
}

int excluirlocaltreino()
{
	printf("\n\n\t\tTem creteza que deseja apagar TODOS os locais de treino?\n");
	
	printf("\n\n\t\tDigite 1 para apagar os locais de treino salvos ou 0 para cancelar: ");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		if(remove("locaisdetreino.txt") == 0)
		{
			printf("\n\n");
			printf("\tCarregando");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(500);
			printf("\x1b[2K");
			printf("\n\n\t\tDados apagados com sucesso.\n\n");
			
			Sleep(2000);
			
			system("cls");
			
			menulocalj();
		}
		
	
		
		else
		{
			printf("\n\n");
			
			printf("\t\tDados nao foram apagados. Tente novamente.");
			
			Sleep(2000);
			
			system("cls");
			
			menulocalj();
		}
	}
	
		if(opcao == 0)
		{
			system("cls");
			menulocalj();
		}
	
}


int menulocalj()
{
	int temp;
	
		    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA           --CADASTRO E GERENCIAMENTO DE LOCAL DE JOGOS--         \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar local dos jogos-\n\n");
		Sleep(300);
		printf(" -2- Visualizar todos os locais dos jogos cadastrados-\n\n");
		Sleep(300);
		printf(" -3- Cadastrar locais de treino-\n\n");
		Sleep(300);
		printf(" -4- Visualizar locais de treino cadastrados-\n\n");
		Sleep(300);
		printf(" -5- Apagar todos os locais salvos-\n\n");
		Sleep(300);
		printf(" -6- Apagar todos os locais de treino salvos-\n\n");
		Sleep(300);
		printf(" -7- Voltar para o menu principal-\n\n");
		Sleep(300);
		printf("   R: ");
		Sleep(300);
		scanf("%d", &opcao);
		
		system("cls");
		
		switch(opcao)
		{
			case 1:
				scanf("%c", &temp);
				system("cls");
				cadastrolocalj();
				break;
				
			case 2:
				system("cls");
				listalocalj();
				break;
				
			case 3:
				system("cls");
				cadastrolocaltreino();
				break;
				
			case 4:
				scanf("%c", &temp);
				system("cls");
				pesquisaarquivotxtlocaltreino();
				break;
				
			case 5:
				system("cls");
				excluirlocalj();
				break;
				
			case 6:
				system("cls");
				excluirlocaltreino();
				break;
				
			case 7:
				system("cls");
				areagerenciamento();
				break;
				
			default:
				printf("\n\n");
				printf("Opcao invalida.");
				Sleep(2000);
				system("cls");
				menulocalj();		
		}

	
	
}