#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

#include <string.h>

    

int encontrapaisecadastromedalha()
{
	int num = 0;
	char letra[2000];
	char texto_str[100];
	char string[100];
	char pais[100];
	int bronze;
	int prata;
	int ouro;
	char temp;
	int op;
	
		FILE *paisesmedalhas;
		
		FILE *medalhasdopaises;
		
		FILE *rankpaises;
		
		paisesmedalhas = fopen("medalhaspaises.txt", "r");
		
		medalhasdopaises = fopen("contagemmedalhas.txt", "a");
		
		rankpaises = fopen("rankpaises.txt", "a");
		
		if(paisesmedalhas == NULL)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tERRO! Dados nao encontrados!");
			Sleep(3000);
			system("cls");
			areaconsulta();
		}
		
		printf("\n\n\t-Digite o nome do pais cadastrado no qual voce deseja cadastrar medalhas: ");
		
		scanf("%[^\n]", &pais);
		
		scanf("%c", &temp);
		
		while(fscanf(paisesmedalhas, "%[^\n] ", string) == 1)
		{
			
			if(strstr(string, pais) != 0)//encontrou o pais:
			{
				printf("\n\n\n\n\n\t\t\t\t\tCarregando");
				
				Sleep(500);
				
				printf(".");
				
				Sleep(500);
				
				printf(".");
				
				Sleep(500);
				
				printf(".");
				
				Sleep(800);
				
				printf("\x1b[2K");
				
				printf("\t\tPais encontrado!");
				
				Sleep(3000);
				
				system("cls");
				
				printf("\n\n -Digite quantas medalhas de BRONZE o pais tem: ");
				
				scanf("%d", &bronze);
				
				printf("\n\n -Digite quantas medalhas de PRATA o pais tem: ");
				
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
				
				printf("\n\n\t\t\tVerifique se os dados estao corretos:\n\n ");
				
				printf("|Pais: %s\n\n|BRONZE: %d\n\n|PRATA: %d\n\n|OURO: %d\n\n", pais, bronze, prata, ouro);
				
				printf("\t\t*TOTAL: %d*\n\n", bronze + prata + ouro);
				
				int TOTAL = bronze + prata + ouro;
				
				printf("\n\n\tDigite 1 para salvar os dados ou 0 para mudar os dados digitados: ");
				
				scanf("%d", &op);
				
				scanf("%c", &temp);
				
				if(op == 1)
				{
					system("cls");
					fprintf(medalhasdopaises,"\t\t|PAIS: %s\n\t\t|BRONZE:%d\n\t\t|PRATA:%d\n\t\t|OURO:%d\n\t\t|TOTAL:%d\n\n", pais, bronze, prata, ouro, TOTAL);
					fprintf(rankpaises, "%s  %d\n", pais, TOTAL);
					fclose(medalhasdopaises);
					fclose(rankpaises);
                    Sleep(500);				
					printf("\n\n\n\tSUCESSO! medalhas cadastradas com sucesso!");
					Sleep(1000);
					printf("\x1b[2K");
					printf("\n");
					printf("\n\n\tDigite 1 para cadastrar medalhas de outro pais cadastrado ou 0 para voltar para o menu: ");
					
					scanf("%d", &op);
				
					
					if(op == 1)
					{
						system("cls");
						scanf("%c", &temp);
						system("cls");
						fclose(medalhasdopaises);
						fclose(paisesmedalhas);
						encontrapaisecadastromedalha();
					}
					
					if(op == 0)
					{
						scanf("%c", &temp);
						system("cls");
						fclose(medalhasdopaises);
						fclose(paisesmedalhas);
					    menumedalhas();
			
					}
					
					else
					{
						printf("Opcao invalida.");
						Sleep(3000);
						system("cls");
						menumedalhas();
					}
				}
				
				if(op == 0)
				{
					system("cls");
					fclose(paisesmedalhas);
					encontrapaisecadastromedalha();
				}
		
			}
			
			else
			{
				printf("\n\n\n\t\t\tERRO! Pais nao encontrado!");
				Sleep(3000);
				fclose(paisesmedalhas);
				system("cls");
				menumedalhas();
			}
		    
		}
	
}

void bubbleSort(int pontuacao[], char nomes[10][255], int tamanho)
{
    int i=0;
    int j=0;
    int trocou;
    do
    {
        trocou = 0;
        for (i = j+1; i < tamanho; i++)
        {
            if (pontuacao[j] < pontuacao[i])
            {
                int pAux;
                char nAux[255];
                pAux = pontuacao[i];
                strcpy(nAux, nomes[i]);
                pontuacao[i]= pontuacao[j];
                strcpy(nomes[i], nomes[j]);
                pontuacao[j] = pAux;
                strcpy(nomes[j], nAux);
                trocou = 1;
            }
        }
        
        j++;
        
    } while (j <= tamanho);
}



void ranking()
{
	char temp;
	int op;
	

    printf("\n\n\t\t\t ######- Ranking de Paises por quantidade de medalhas -######\n\n");
    printf("  \n");
    printf("\t\t  *NOME*      -     *TOTAL DE MEDALHAS* \n");

    FILE* pont_arq;
    pont_arq = fopen("rankpaises.txt", "r");
    char nomes[10][255];
    int pontuacoes[10];
    char nome[255];
    int pontuacao;
    int tamanho = 0;

    //lê do arquivo
    while (fscanf(pont_arq, "%s %d\n", nome, &pontuacao) != EOF)
    {
        strcpy(nomes[tamanho], nome);
        pontuacoes[tamanho] = pontuacao;
        tamanho++;
    }

    //Ordena:
    bubbleSort(pontuacoes, nomes, tamanho);

    //Imprime
    int i;
    int j;
    
    int colocacao = 1;
    
    Sleep(30);
    
    printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
    Sleep(30);
    for (i = 0; i < tamanho; i++)
    {
    	Sleep(30);
        printf("\t\t  %d-  %s          %d\n",colocacao, nomes[i], pontuacoes[i]);
        colocacao++;
        Sleep(30);
    }
    
    Sleep(30);
    printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
    
    printf("\t\t\t\t\n\n\n -Digite 1 para voltar: ");
    
    scanf("%d", &op);
    
    if(op == 1)
    {
    	scanf("%c", &temp);
    	system("cls");
    	fclose(pont_arq);
    	menumedalhas();
	}
	
	else
	{
		Sleep(1000);
		printf("\t\tOpcao Invalida.");
		Sleep(3000);
		system("cls");
		fclose(pont_arq);
		ranking();
	}

}


int pesquisaarquivotxtmedalhas()
{
	FILE *medalhasdopaises;
	
	int op;
	int temp;
	
	int vet[200];
	
	int vet2[200];
	
	char texto_str[100];
	
	medalhasdopaises = fopen("contagemmedalhas.txt", "r");
	
	if(medalhasdopaises == NULL)
	{
		Sleep(1000);
		printf("ERRO! dados nao encontrados!");
		Sleep(3000);
		menumedalhas();
		
	}
	
	printf("\n\n\t\tMedalhas dos paises cadastrados: \n\n\n");
	
	printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
	
	do
	{
		printf("%s", texto_str);
		
	}while(fgets(texto_str, 100, medalhasdopaises)!= NULL);
	
	printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\n");
	
	fclose(medalhasdopaises);
	
	printf("\n\n\t\t\tDigite 1 para voltar ou 0 para visualizar os paises em rank: ");
	
	scanf("%d", &op);
	
	scanf("%c", &temp);
	
	if(op == 1)
	{
		system("cls");
		menumedalhas();
	}
	
	else if(op == 0)
	{
		system("cls");
	    ranking();
	}
	
	
	else
	{
		Sleep(500);
		printf("Opcao invalida.");
		system("cls");
		pesquisaarquivotxtmedalhas();
	}
	
}

int deletardadospaisesmedalhas()
{
	int op;
	int temp;
	
	Sleep(1000);
	
	printf("\n\n\t\tTem certeza que deseja apagar TODOS as contagens de medalhas dos paises salvos?\n\n");
	
	printf("\n\n\t\tDigite 1 para apagar os dados ou 0 para cancelar: ");
	
	scanf("%d", &op);
	
	if(op == 1)
	{
		if(remove("contagemmedalhas.txt") == 0)
		{
			if(remove("rankpaises.txt") == 0)
			{
			
			printf("\n\n");
			printf("\t\tCarregando");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf(".");
			Sleep(800);
			printf("\x1b[2K");
			printf("\t\t\t\tDados apagados com sucesso.\n\n");
			Sleep(2000);
			system("cls");
			menumedalhas();
		    
			}
		}
		
		else
		{
			printf("\n\n");
			printf("\t\tDados nao foram apagados. Tente novamente.");
			Sleep(1000);
			system("cls");
			menumedalhas();
		}
	}
	
	if(op == 0)
	{
		system("cls");
		menumedalhas();
	}
	
	else
	{
		printf("Opcao Invalida.");
		Sleep(3000);
		system("cls");
		menumedalhas();
	}
}

int menumedalhas()
{
	int op;
	int temp;
	
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xBA                    --CONTAGEM DE MEDALHAS--                      \xBA\n");
		Sleep(300);
		printf("                \xBA                                                                  \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
		
		printf("  -Digite a opcao desejada:\n\n\n");
		Sleep(300);
		printf(" -1- Cadastrar medalhas do pais desejado-\n\n");
		Sleep(300);
		printf(" -2- Visualizar medalhas dos paises-\n\n");
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
			encontrapaisecadastromedalha();
		}
		
		else if(op == 2)
		{
			scanf("%c", &temp);
			system("cls");
			pesquisaarquivotxtmedalhas();
		}
		
		else if(op == 3)
		{
			system("cls");
			deletardadospaisesmedalhas();
		}
		
		else if(op == 4)
		{
			system("cls");
			areaconsulta();
		}
	
}