#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <windows.h>

char nome[10][80], sobrenome[10][80];

char login[10][20];

char senha[10][9];

int op = 0;

int testedesenha = 8;


void cadastro()
{
	int tamanhoSenha = 0;
	
	char temp;
	
	static int linha;
	
	do
	{
		printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                 \xBA\n");
		Sleep(300);
		printf("                \xBA        --CRIACAO DE CONTA--     \xBA\n");
		Sleep(300);
		printf("                \xBA                                 \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		
		
		printf("\n\n");
		
		FILE *arquivologin;
		
		FILE *arquivosenha;
		
		arquivologin = fopen("login.txt", "w+");
		
    

		arquivosenha = fopen("Senha.txt", "w+");
		
		scanf("%c", &temp);
		
		
		printf(" -Digite seu nome: ");
		
		scanf("%[^\n]", nome[linha]);
		
		scanf("%c", &temp);
		
		linha++;
		
		printf("\n -Crie um nome de login :");
		
		scanf("%s", login[linha]);
		
		fprintf(arquivologin, "%s;", login[linha]);
		
		linha++;
		
		printf("\n -Crie uma senha(ela precisa ter 8 digitos e nao pode possuir espacos!): ");
		
		scanf("%s", senha[linha]);
		
		
		tamanhoSenha = strlen(senha[linha]);
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		
		CONSOLE_SCREEN_BUFFER_INFO consoleinfo;
		
		WORD saved_attributes;
		
		WORD erro = (BACKGROUND_RED);
		
		WORD sucesso = (BACKGROUND_GREEN);
		
		GetConsoleScreenBufferInfo(hConsole, &consoleinfo);
		
		saved_attributes = consoleinfo.wAttributes;
		
		
		
		if(tamanhoSenha < testedesenha)
		{
			printf("\n\n");
			
			printf("Carregando");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".\n\n");
			
			Sleep(2000);
			
			SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
			
			printf("ERRO!\n\n");
			
			SetConsoleTextAttribute(hConsole, saved_attributes);
			
			printf("Sua senha digitada possui menos de 8 digitos!\n\n");
			
			Sleep(1000);
			
			printf("Tente novamente.\n\n");
			
			Sleep(1000);
			
			system("cls");
			
			cadastro();
			
		}
		
		else if(tamanhoSenha > testedesenha)
		{
			printf("\n\n");
			
			printf("Carregando.");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".\n\n");
			
			Sleep(2000);
			
			SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
			
			printf("ERRO!\n\n");
			
			SetConsoleTextAttribute(hConsole, saved_attributes);
			
			printf("Sua senha digitada possui mais de 8 digitos!\n\n");
			
			Sleep(1000);
			
			printf("Tente novamente.\n\n");
			
			Sleep(1000);
			
			system("cls");
			
			cadastro();
		}
		
		else
		{
			printf("\n\n");
			
			printf("Carregando");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".\n\n");
			
			Sleep(2000);
			
			SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN);
			
			printf("SUCESSO!\n\n");
			
			Sleep(1000);
			
			fprintf(arquivosenha, "%s;", senha[linha]);
			
			SetConsoleTextAttribute(hConsole, saved_attributes);
			
			printf("Conta criada com sucesso!\n\n");
			
			Sleep(2000);
			
			fclose(arquivologin);
			
			fclose(arquivosenha);
			
			system("cls");
			
		}
		
	}while(op ==1);
	
	opcoes();
}



int testeLogin()
{
	
	
	char Logindigitado[9];
	char Senhadigitada[9];
	char LoginArquivo[9];
	char SenhaArquivo[9];
	int LinhaArquivo[50];
	int ret1 = -98;
	int ret2 = -98;
	char bufferlogin = 8;
	char buffersenha = 8;
	int contadorlinha = 0;
	int compararlogin = -98;
	int compararsenha = -98;
	int fileretorno = NULL;
	int file2retorno = NULL;
	
	memset(Logindigitado, '\0', sizeof(Logindigitado));
	memset(Senhadigitada, '\0', sizeof(Senhadigitada));
	memset(LoginArquivo, '\0', sizeof(LoginArquivo));
	memset(SenhaArquivo, '\0', sizeof(SenhaArquivo));
	
	int operador;
	
	printf("\n");
	
printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                 \xBA\n");
		Sleep(300);
		printf("                \xBA            --LOGIN--            \xBA\n");
		Sleep(300);
		printf("                \xBA                                 \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
	
	printf("\n\n");
	
	printf("      -Digite seu Login: ");
	
	scanf("%s",Logindigitado);
	
	printf("\n");
	
	
	
	FILE *arquivologin;
	arquivologin = fopen("login.txt", "r");
	
	if(arquivologin == NULL)
	{
		printf("ERRO!arquivo não encontrado.");
	
		printf("\n\n");
		printf("Tente novamente.");
		cadastro();
	}
	
	while(fgets(LinhaArquivo, 50, arquivologin)!= NULL)
	{
		memset(LoginArquivo, '\0', sizeof(LoginArquivo));
		
		fileretorno = strtok(LinhaArquivo, ";");
		
		strcpy(LoginArquivo, fileretorno);
		
		compararlogin = strcmp(LoginArquivo, Logindigitado);
		
		if(compararlogin != 0)
		{
			printf("Carregando");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf(".");
			
			Sleep(1000);
			
			printf("\n\n");
			
			printf("ERRO! login incorreto! Tente novamente.\n\n");
			
			Sleep(1000);
			
			system("cls");
			
			opcoes();
			
			
			
			
		}
		
		
		if(compararlogin == 0)
		{
			printf("\t\t\tLogin OK!");
			
			Sleep(1000);
			
			//printf("\x1b[1F");
			printf("\x1b[2K");
			
			
			printf("\n");
			
			printf("      -Digite sua Senha: ");
			
			scanf("%s",Senhadigitada);
			
			printf("\n");
			
			FILE *arquivosenha;
			
			arquivosenha = fopen("Senha.txt", "r");
			
			
			while(fgets(LinhaArquivo, 50, arquivosenha)!= NULL)
			{
				
				
				memset(SenhaArquivo, '\0', sizeof(SenhaArquivo));
				
				file2retorno = strtok(LinhaArquivo, ";");
				
				strcpy(SenhaArquivo, file2retorno);
				
				compararsenha = strcmp(SenhaArquivo, Senhadigitada);
				
			if(compararsenha != 0)
			{
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				CONSOLE_SCREEN_BUFFER_INFO consoleinfo;
				WORD saved_attributes;
				WORD erro = (BACKGROUND_RED);
				WORD sucesso = (BACKGROUND_GREEN);	
				GetConsoleScreenBufferInfo(hConsole, &consoleinfo);
				saved_attributes = consoleinfo.wAttributes;
				
				SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
					
				printf("ERRO!\n\n");
			
			    Sleep(1000);
			    
			    SetConsoleTextAttribute(hConsole, saved_attributes);
			
			    printf("Senha incorreta.");
			
			    Sleep(1000);
			
			    printf("\n\n");
			
			    printf("Tente novamente.");
			
			    Sleep(1000);
			
			    system("cls");
			
			    opcoes();
			}

			
				
				
				
				else if(compararsenha == 0)
				{
					printf("\t\t\n\n       Carregando");
					
					Sleep(1000);
	
					printf(".");
					
					Sleep(1000);
					
					printf(".");
					
					Sleep(800);
					
					printf(".");
					
					Sleep(800);
					
					printf("\x1b[2K");
					
					Sleep(500);
					
					
					HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					CONSOLE_SCREEN_BUFFER_INFO consoleinfo;
					WORD saved_attributes;
					WORD erro = (BACKGROUND_RED);
					WORD sucesso = (BACKGROUND_GREEN);
					
					GetConsoleScreenBufferInfo(hConsole, &consoleinfo);
					saved_attributes = consoleinfo.wAttributes;
					
					SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN);
					
					printf("SUCESSO! conta logada com Exito!");
					
					SetConsoleTextAttribute(hConsole, saved_attributes);
					
					Sleep(2500);
					
					printf("\n\n");
					
					fclose(arquivologin);
			
			        fclose(arquivosenha); 
			        
				}
				 
			}	
			
		}
		
		system("cls");
			
		menuprincipal();
		
	}
	
}