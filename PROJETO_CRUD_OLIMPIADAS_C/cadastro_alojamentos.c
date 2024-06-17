#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <string.h>

#include <windows.h>

int opcao;

int cadastroalojamentos()
{
	char localalojamento[100][200];
	
	int num;
	
	char temp;
	
	FILE *locaisalojamentos;
	
	do
	{
		static int linha;
		
		locaisalojamentos = fopen("localalojamentos.txt", "a");
		
		printf("\n\n\t\t-Digite o nome do local de alojamento que voce deseja cadastrar: ");
		
		scanf("%[^\n]", &localalojamento[linha]);
		
		scanf("%c", &temp);
		
		fprintf(locaisalojamentos,"\n\n\t\t        -%s\n\n", localalojamento[linha]);
		
		printf("\n\n");
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tCarregando");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		system("cls");
		
		printf("\n\n\t\tSUCESSO!! Local de alojamento cadastrado com sucesso!\n\n");
		
		printf("Digite 1 para cadastrar outro local de Alojamento ou 0 para voltar ao menu: ");
		
		scanf("%d", &num);
		
		scanf("%c", &temp);
		
		system("cls");
		
		fclose(locaisalojamentos);
		
		linha++;
		
		
	}while(num == 1);
	
	if(num == 0)
	{
		fclose(locaisalojamentos);
		menulocalalojamentos();
	}
	
	return 0;
}


int listalocalalojamentos()
{
	char texto_str[100];
	
	int i;
	
	int opcao;
	
	FILE *locaisalojamentos;
	
	locaisalojamentos = fopen("localalojamentos.txt", "r");
	
	if(locaisalojamentos == NULL)
	{
		Sleep(1000);
		printf("\n\n\t\t\tERRO! Dados nao encontrados!");
		Sleep(3000);
		system("cls");
		menulocalalojamentos();
	}
	
	Sleep(30);
	printf("\t\t\n\n -Modalidades cadastradas:  \n\n");
	Sleep(30);
	printf("\n\n\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	Sleep(30);
	do
	{
		Sleep(30);
		printf("%s", texto_str);
		Sleep(30);
		
	}while(fgets(texto_str, 100, locaisalojamentos) != NULL);
	Sleep(30);
	printf("\n\n\t\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	Sleep(300);
	printf("\n\n");
	
	fclose(locaisalojamentos);
	
	Sleep(100);
	
	printf("\n\n\t\tDigite 1 para voltar: ");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		system("cls");
		menulocalalojamentos();
	}
	
	else
	{
		Sleep(800);
		printf("\n\nOpcao invalida.");
		Sleep(3000);
		system("cls");
		menulocalalojamentos();
	}
}

int excluirlocalalojamentos()
{
	printf("\n\n\t\tTem certeza que deseja apagar TODOS os locais de alojamento salvos?\n");
	
	printf("\n\n\t\tDigite 1 para apagar os locais de alojamentos salcos ou 0 para cancelar: ");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		if(remove("localalojamentos.txt")== 0)
		{
			printf("\t\t\n\n");
			printf("\tCarregando");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf("\x1b[2K");
			printf("\t\tDados apagados com sucesso.\n\n");
			
			Sleep(3000);
			
			system("cls");
			
			menulocalalojamentos();
			
		}
		
		else
		{
			printf("\n\n");
			
			printf("\t\tDados nao foram apagados. Tente novamente.");
			
			Sleep(2000);
			
			system("cls");
			
			menulocalalojamentos();
		}
	}
}


int menulocalalojamentos()
{
	int temp;
	
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA              --CADASTRO E GERENCIAMENTO DE ALOJAMENTOS--         \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar locais de alojamentos-\n\n");
		Sleep(300);
		printf(" -2- Visualizar todos os locais de alojamentos salvos-\n\n");
		Sleep(300);
		printf(" -3- Apagar os locais de alojamentos salvos-\n\n");
		Sleep(300);
		printf(" -4- Voltar para o menu principal-\n\n");
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
				cadastroalojamentos();
				break;
			
			case 2:
				system("cls");
				listalocalalojamentos();
				break;
				
			case 3:
				system("cls");
				excluirlocalalojamentos();
				break;
				
			case 4:
				system("cls");
				areagerenciamento();
				break;
				
			default:
				printf("\n\n");
				printf("Opcao invalida.");
				Sleep(3000);
				system("cls");
				menulocalalojamentos();
		}
}