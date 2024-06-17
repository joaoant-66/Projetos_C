#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <string.h>

#include <windows.h>

int encontralocaljogoscalendarioolimpico()
{
	int num = 0;
	
	char localjogo[200];
	
	char string[100];
	
	int dia;
	
	int mes;
	
	char modalidade[200];
	
	char nomepaises[500];
	
	char horario[200];
	
	char temp;
	
	int op;
	
	FILE *localcalendarioolimpico;
	
	FILE *calendarioolimpico;
	
	localcalendarioolimpico = fopen("locaiscalendarioolimpico.txt", "r");
	
	calendarioolimpico = fopen("calendarioolimpico.txt", "a");
	
	if(localcalendarioolimpico == NULL)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tERRO!! Dados nao encontrados!");
		
		Sleep(3000);
		
		system("cls");
		
		menuprincipal();
	}
	
	printf("\n\n\t-Digite o nome do local aonde o jogo acontecera: ");
	
	scanf("%s", &localjogo);
	
	while(fscanf(localcalendarioolimpico, "%s", string) == 1)
	{
		
		if(strstr(string, localjogo) != 0)//Encontrou o local:
		{
			system("cls");
			
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCarregando");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			printf("\x1b[2K");
			
			printf("\t\tLocal de jogo encontrado!");
			
			Sleep(3000);
			
			system("cls");
			
			printf("\n\n-Digite o DIA em que o jogo ira acontecer: ");
			
			scanf("%d", &dia);
			
			printf("\n\n-Digite o MES em que o jogo ira acontecer: ");
			
			scanf("%d", &mes);
			
			printf("\n\n-Digite o nome da modalidade que sera competida: ");
			
			scanf("%s", &modalidade);
			
			printf("\n\n-Digite os paises que jogarao(utilize underline se o pais possuir espacos,e separe por virgula!):\n\n ");
			
			printf("  R: ");
			
			scanf("%s", &nomepaises);
			
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCarregando");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			system("cls");
			
			printf("\n\n\t\t-Verifique se os dados estao corretos:\n\n");
			
			printf("\t\t|Local: %s\n\t\t|Dia: %d/%d/2024\n\t\t|Modalidade: %s\n\t\t|Paises: %s\n\t\t", &localjogo, dia, mes, &modalidade, &nomepaises);
			
			printf("\t\n\n-Digite 1 para salvar os dados ou 0 para mudar os dados digitados: ");
			
			scanf("%d", &op);
			
			if(op == 1)
			{
				fprintf(calendarioolimpico, "\n\n\t\t  |Local: %s\n\t\t  |Dia: %d/%d/2024\n\t\t  |Modalidade: %s\n\t\t  |Paises: %s\n\n", &localjogo, dia, mes, &modalidade, &nomepaises);
				
				Sleep(800);
				
				printf("\n\t\tSUCESSO!! data de jogo cadastrada com sucesso!");
				
				Sleep(3000);
				
				printf("\x1b[2K");
				
				printf("\n\n");
				
				printf("-Digite 1 para cadastrar outra data de jogo ou 0 para voltar para o menu: ");
				
				scanf("%d", &op);
				
				if(op == 1)
				{
					system("cls");
					fclose(calendarioolimpico);
					fclose(localcalendarioolimpico);
					encontralocaljogoscalendarioolimpico();
				}
				
				if(op == 0)
				{
					system("cls");
					fclose(calendarioolimpico);
					fclose(localcalendarioolimpico);
					menucalendarioolimpico();
				}
				
				else
				{
					printf("\n\n\t\tOpcao invalida.");
					Sleep(3000);
					system("cls");
					menucalendarioolimpico();	
				}
			
			if(op == 0)
			{
				system("cls");
				fclose(calendarioolimpico);
				fclose(localcalendarioolimpico);
				encontralocaljogoscalendarioolimpico();
			}
			
			else
			{
				printf("\n\n\t\tOpcao invalida.");
				Sleep(3000);
				system("cls");
				encontralocaljogoscalendarioolimpico();
				
			}	 
		
		   }
			
		}
		
		else
		{
			printf("\n\n\t\tLocal de jogo nao encontrado!");
			Sleep(3000);
			system("cls");
			areaconsulta();
		}
	}
}

int pesquisaarquivotxtcalendario()
{
	FILE *calendarioolimpico;
	
	int op;
	int temp;
	
	char texto_str[100];
	
	calendarioolimpico = fopen("calendarioolimpico.txt", "r");
	
	if(calendarioolimpico == NULL)
	{
		Sleep(1000);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tERRO! Dados nao foram encontrados!");
		Sleep(3000);
		system("cls");
		menucalendarioolimpico();
	}
	
	printf("\n\n\t\t\t-Calendario Olimpico:\n\n");
	
	printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	
	do
	{
		printf("%s", texto_str);
		
	}while(fgets(texto_str, 100, calendarioolimpico) != NULL);
	
	printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	fclose(calendarioolimpico);
	
	printf("\n\n\t\t -Digite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		system("cls");
		menucalendarioolimpico();
	}
	
	else
	{
		printf("\n\n\t\tOpcao invalida.");
		Sleep(3000);
		system("cls");
		 pesquisaarquivotxtcalendario();
	}
}

int deletararquivocalendarioolimpico()
{
	int op;
	int temp;
	
	Sleep(800);
	
	printf("\n\n\t\t -Tem certeza que deseja apagar TODAS as datas do calendario olimpico que foram cadastradas?\n\n");
	
	printf("\n\n\t\t -Digite 1 para apagar os dados ou 0 para cancelar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("calendarioolimpico.txt") == 0)
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
			printf("\t\tDados apagados com sucesso.");
			Sleep(3000);
			system("cls");
			menucalendarioolimpico();
		}
		
		else
	    {
		printf("\n\n");
		printf("\t\tDados nao foram apagados.");
		Sleep(2000);
		system("cls");
		menucalendarioolimpico();
	    }
	}
	
}

int menucalendarioolimpico()
{
	int op;
	int temp;
	
	printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA                       --CALENDARIO DE JOGOS--                    \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar data de jogos-\n\n");
		Sleep(300);
		printf(" -2- Visualizar calendario olimpico-\n\n");
		Sleep(300);
		printf(" -3- Apagar dados salvos-\n\n");
		Sleep(300);
		printf(" -4- Voltar para a area de consultas-\n\n");
		Sleep(300);
		printf("   R:");
		Sleep(300);
		scanf("%d", &op);
		
		if(op == 1)
		{
			system("cls");
			encontralocaljogoscalendarioolimpico();
		}
		
		else if(op == 2)
		{
			system("cls");
			pesquisaarquivotxtcalendario();
		}
		
		else if(op == 3)
		{
			system("cls");
			deletararquivocalendarioolimpico();
		}
		
		else if(op == 4)
		{
			system("cls");
			areaconsulta();
		}
		
		else
		{
			printf("\n\n\t\tOpcao invalida.");
			Sleep(3000);
			system("cls");
			menucalendarioolimpico();
		}
}