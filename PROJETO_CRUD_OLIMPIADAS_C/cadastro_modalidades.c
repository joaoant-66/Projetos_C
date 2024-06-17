#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <conio.h>

#include <windows.h>

int opcao;


int cadastromodalidades()
{
	char modalidade[100][200];
	int num;
	int temp;
	
	FILE *fp;
	
	static int linha;
	
	do
	{
		printf("\n\n\t -Digite o nome da Modalidade que voce deseja cadastrar: ");
		
		scanf("%c", &temp);
		
		scanf("%[^\n]", &modalidade[linha]);
		
		fp = fopen("modalidade.txt", "a");
		
		fprintf(fp, "\t\t    -%s\n\n", modalidade[linha]);
		
		printf("\n\n");
		
		printf("\t\tCarregando");
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		
		Sleep(800);
		
		printf(".");
		Sleep(300);
		printf("\x1b[2K");
		
		Sleep(800);
		
		printf("\tSUCESSO!!Sua modalidade foi cadastrada com sucesso!");
		
		Sleep(3000);
		
		printf("\x1b[2K");
		
		printf("\n\n");
		
		printf("\tDigite 1 para cadastrar outra modalidade ou 0 para voltar ao menu: ");
		
		scanf("%d", &num);
		
		system("cls");
		
		if(num == 0)
		{
			fclose(fp);
			menumodalidades();
		}
		
		linha++;
		
		fclose(fp);
		
	}while(num == 1);
	
	return 0;
	
}


int listamodalidades()
{
	char modalidade[100][200];
	int pc;
	int i;
	int opcao;
	
	
	FILE *fp;
	
	fp = fopen("modalidade.txt","r");
	
	if(fp == NULL)
	{
		Sleep(1000);
		printf("\n\n\t\tERRO! Dados nao encontrados!");
		Sleep(2000);
		system("cls");
		menumodalidades();
	}
	
	memset(modalidade, '\0', sizeof(modalidade));
	
	printf("\n\n\t\tModalidades cadastradas: \n\n");
	
	printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	Sleep(300);
	do
	{
		Sleep(30);
		printf("%s", modalidade);
	    Sleep(30);
	}while(fgets(modalidade, 100, fp)!= NULL);
	Sleep(300);
	printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	printf("\n\n");
	
	fclose(fp);
	
	Sleep(1000);
	
	printf("\t\t\tDigite 1 para voltar:");
	
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		system("cls");
		menumodalidades();
	}
	
	else
	{
		Sleep(800);
		printf("Opcao invalida.");
	}
}
	

int excluirmodalidade()
{	
	
	printf("\n\n\t\tTem certeza que deseja  apagar todas as modalidades salvas?\n\n");
	printf(" \t\tDigite 1 para apagar as modalidades salvas ou 0 para cancelar: ");
	
	scanf("%d", &opcao);
	system("cls");
	
	if(opcao == 1)
	{
		if(remove("modalidade.txt")== 0)
		{
			printf("\n\n\n\n\n");
			printf("\t\t\t\t\tCarregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf("\x1b[2K");
			printf("Dados apagados com sucesso.\n\n");
			Sleep(2000);
			system("cls");
			menumodalidades();
		}
		
		else
		{
			printf("\n\n\n\n");
			printf("\t\t\t\tDados nao foram apagados.Tente novamente.");
			Sleep(4000);
			system("cls");
			menumodalidades();
		}
	}
}

int menumodalidades()
{
        printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA             --CADASTRO E GERENCIAMENTO DE MODALIDADES--          \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("   -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar Modalidades-\n\n");
		Sleep(300);
		printf(" -2- Visualizar todas as Modalidades cadastradas-\n\n");
		Sleep(300);
		printf(" -3- Apagar todas as modalidades salvas-\n\n");
		Sleep(300);
		printf(" -4- Voltar para o menu principal-\n\n");
		Sleep(300);
		printf("  R:");
		Sleep(300);
		scanf("%d", &opcao);
		
		system("cls");
		
		switch(opcao)
		{
			case 1:
				system("cls");
				cadastromodalidades();
				break;
			
			case 2:
				system("cls");
			    listamodalidades();
				break;
			
			case 3:
				system("cls");
			    excluirmodalidade();
				break;
				
			case 4:
				system("cls");
			    areagerenciamento();
				break;
				
			default:
			printf("\n\n");	
			printf("Opcao invalida.");
			Sleep(1000);
			menumodalidades();
							
		}

}
