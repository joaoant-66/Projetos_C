#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

#include <string.h>


int encontraatletaecadastromedalha()
{
	int num = 0;
	char letra[2000];
	char texto_str[100];
	char string[100];
	char atleta[100];
	int bronze;
	int prata;
	int ouro;
	char temp;
	int op;
	
	FILE *atletasmedalhas;
	
	FILE *medalhasdosatletas;
	
	FILE *rankatletas;
	
	atletasmedalhas = fopen("medalhasatletas.txt", "r");
	
	medalhasdosatletas = fopen("contagemmedalhasatletas.txt", "a");
	
	rankatletas = fopen("rankatletas.txt", "a");
	
	if(atletasmedalhas == NULL)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tERRO!! Dados nao foram encontrados!");
		Sleep(3000);
		system("cls");
		areaconsulta();
	}
	
	printf("\n\n\t-Digite o nome do atleta cadastrado no qual voce deseja cadastrar medalhas: ");
	
	scanf("%[^\n]", &atleta);
	
	scanf("%c", &temp);
	
	while(fscanf(atletasmedalhas, "%[^\n] ", string) == 1)
	{
		
		if(strstr(string, atleta) !=0)//Encontrou o Atleta:
		{
			printf("\n\n\n\t\t\tCarregando");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(800);
			
			printf(".");
			
			Sleep(500);
			
			printf("\x1b[2K");
			
			printf("\t\tAtleta encontrado!");
			
			Sleep(3000);
			
			system("cls");
			
			
			printf("\n\n -Digite quantas medalhas de BRONZE o atleta tem: ");
			
			scanf("%d", &bronze);
			
			printf("\n\n -Digite quantas medalhas de PRATA o atleta tem: ");
			
			scanf("%d", &prata);
			
			printf("\n\n -Digite quantas medalhas de OURO o pais tem: ");
			
			scanf("%d", &ouro);
			
			system("cls");
			
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
			
			printf("  -Atleta: %s\n\n  -BRONZE: %d\n\n  -PRATA: %d\n\n  -OURO: %d\n\n", atleta, bronze, prata, ouro);
			
			printf("  -TOTAL: %d\n\n", bronze + prata + ouro);
			
			int TOTAL = bronze + prata + ouro;
			
			printf("\t\t-Digite 1 para salvar os dados ou 0 para mudar os dados digitados: ");
			
			scanf("%d", &op);
			
			scanf("%c", &temp);
			
			if(op == 1)
			{
				fprintf(medalhasdosatletas, "\n\n\t\t|Atleta:%s\n\t\t|Bronze:%d\n\t\t|Prata:%d\n\t\t|Ouro:%d\n\t\t|TOTAL:%d\n\n\n",atleta, bronze, prata, ouro, TOTAL);
				fprintf(rankatletas, "\t\t  %s      %d\n\n", atleta, TOTAL);
				fclose(medalhasdosatletas);
				fclose(rankatletas);
				
				printf("\t  SUCESSO! medalhas cadastradas com sucesso!");
				
				Sleep(3000);
				
				printf("\x1b[2K");
				
				printf("\n\n");
				
				printf("Digite 1 para cadastrar medalhas de outro atleta cadastrado ou 0 para voltar para o menu: ");
				
				scanf("%d", &op);
				
				if(op == 1)
				{
					scanf("%c", &temp);
					system("cls");
					fclose(medalhasdosatletas);
					fclose(atletasmedalhas);
					encontraatletaecadastromedalha();
				}
				
				if(op == 0)
				{
					scanf("%c", &temp);
					system("cls");
					fclose(medalhasdosatletas);
					fclose(atletasmedalhas);
					menumedalhasatletas();
				}
				
				else
				{
					printf("\t\t\n\nOpcao Invalida.");
					Sleep(3000);
					system("cls");
					menuprincipal();
				}
			}
			
			if(op == 0)
			{
				system("cls");
				fclose(atletasmedalhas);
				encontraatletaecadastromedalha();
			}
		}
		
		else
		{
			printf("ERRO! Pais nao encontrado!");
			Sleep(3000);
			fclose(atletasmedalhas);
			system("cls");
		    menumedalhasatletas();
		}
	}
}

void bubblesort(int pontuacao[], char nomes[10][255], int tamanho)
{
	int i = 0;
	
	int j = 0;
	
	int trocou;
	
	do
	{
		trocou = 0;
		
		for(i = j + 1; i < tamanho; i++)
		{
			if(pontuacao[j] < pontuacao[i])
			{
			
			int pAux;
			char nAux[255];
			pAux = pontuacao[i];
			strcpy(nAux, nomes[i]);
			pontuacao[i] = pontuacao[j];
			strcpy(nomes[i], nomes[j]);
			pontuacao[j] = pAux;
			strcpy(nomes[j], nAux);
			trocou = 1;
			
		    }
		}
		
		j++;
		
	}while(j <= tamanho);

}

void rankingatletas()
{
	
	printf("\n\n\t\t       NOME    -    TOTAL DE MEDALHAS\n\n");
	
	FILE *rankatletas;
	
	rankatletas = fopen("rankatletas.txt", "r");
	
	char nomes[10][255];
	
	int pontuacoes[10];
	
	char nome[255];
	
	int pontuacao;
	
	int tamanho = 0;
	
	int op;
	
	while(fscanf(rankatletas, "%s %d\n", nome, &pontuacao) != EOF)
	{
		strcpy(nomes[tamanho], nome);
		pontuacoes[tamanho] = pontuacao;
		tamanho++;
	}
	
	bubblesort(pontuacoes, nomes, tamanho);
	
	int i;
	
	int j;
	
	int colocacao = 1;
	Sleep(30);
	printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	Sleep(30);
	for(i = 0; i < tamanho; i++)
	{
		printf("\t\t %d: %s %d\n",colocacao, nomes[i], pontuacoes[i]);
		colocacao++;
	}
	Sleep(30);
	printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	fclose(rankatletas);
	Sleep(1000);
	printf("\n\n\t\t -Digite 1 para voltar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		system("cls");
		menumedalhasatletas();
	}
	
	else
	{
		Sleep(500);
		printf("\t\n\nOpcao Invalida.");
		Sleep(3000);
		system("cls");
		rankingatletas();
	}
	
}

int pesquisaarquivotxtmedalhasatletas()
{
	FILE *medalhasdosatletas;
	
	int op;
	int temp;
	
	char texto_str[100];
	
	medalhasdosatletas = fopen("contagemmedalhasatletas.txt", "r");
	
	if(medalhasdosatletas == NULL)
	{
		Sleep(1000);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tERRO! Dados nao foram encontrados!");
		Sleep(3000);
		system("cls");
		menumedalhasatletas();
	}
	
	do
	{
		printf("%s", texto_str);
		
	}while(fgets(texto_str, 100, medalhasdosatletas)!= NULL);
	
	fclose(medalhasdosatletas);
	
	printf("\n\n\t\t -Digite 1 pra voltar ou 0 para visualizar os Atletas em rank: ");
	
	scanf("%d", &op);
	
	scanf("%c", &temp);
	
	if(op == 1)
	{
		system("cls");
		menumedalhasatletas();
	}
	
	else if(op == 0)
	{
		system("cls");
		rankingatletas();
		exit(0);
	}
	
	else
	{
		Sleep(500);
		printf("Opcao invalida.");
		system("cls");
		pesquisaarquivotxtmedalhasatletas();
	}
}

int deletardadospaisesmedalhasatletas()
{
	int op;
	int temp;
	
	Sleep(800);
	
	printf("\n\n\t\t -Tem certeza que deseja apagar TODOS as contagens de medalhas dos atletas salvos?\n\n");
	
	printf("\n\n\t\t -Digite 1 para apagar os dados ou 0 para cancelar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("contagemmedalhasatletas.txt") == 0)
		{
			if(remove("rankatletas.txt") == 0)
			{
			
			printf("\n\n");
			printf("\t\tCarregando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(3000);
			system("cls");
			printf("\t\tDados apagados com sucesso.\n\n");
			Sleep(1000);
			system("cls");
			menumedalhasatletas();
		    
			}
		}
		
		else
		{
			printf("\n\n");
			printf("\t\tDados nao foram apagados. Tente novamente.");
			Sleep(2000);
			system("cls");
			menumedalhasatletas();
		}
	}
}

int menumedalhasatletas()
{
	int op;
	int temp;
	
	printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA                --CONTAGEM DE MEDALHAS DE ATLETAS--               \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar medalhas dos atletas cadastrados-\n\n");
		Sleep(300);
		printf(" -2- Visualizar medalhas dos Atletas-\n\n");
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
			scanf("%c", &temp);
			system("cls");
			encontraatletaecadastromedalha();
		}
		
		else if(op == 2)
		{
			scanf("%c", &temp);
			system("cls");
			pesquisaarquivotxtmedalhasatletas();
		}
		
		else if(op == 3)
		{
			system("cls");
			deletardadospaisesmedalhasatletas();
		}
		
		else if(op == 4)
		{
			system("cls");
			areaconsulta();
		}
		
		else
		{
			printf("\n\n\t\tOpcao Invalida.");
			Sleep(3000);
			system("cls");
			menumedalhasatletas();
		}
}