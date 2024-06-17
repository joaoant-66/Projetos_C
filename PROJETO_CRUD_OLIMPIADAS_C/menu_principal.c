#include <stdio.h>

#include <stdlib.h>

#include <windows.h>

int menuprincipal()
{
	int operacao;
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleinfo;
	WORD saved_attributes;
	
	GetConsoleScreenBufferInfo(hConsole, &consoleinfo);
	saved_attributes = consoleinfo.wAttributes;
	
	
	    printf("\n");
	    printf("               \t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                \xBA                                 \xBA\n");
		Sleep(300);
		printf("                \xBA            --MENU--             \xBA\n");
		Sleep(300);
		printf("                \xBA                                 \xBA\n");
		Sleep(300);
		printf("                \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		
		printf("\n\n");
	
	printf("  -Bem-vindo Usuario! Digite um numero para a opcao desejada:\n\n");
	
	Sleep(1000);
	
	printf(" -1- Cadastro e Gerenciamento-\n\n");                                  
	Sleep(300);
	printf(" -2- Consultas-\n\n ");
	Sleep(300);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	
	printf("-3- SAIR-\n\n"); 
	Sleep(300);
	SetConsoleTextAttribute(hConsole, saved_attributes);                                  
                                                                                        
    printf("   R: ");                                                                         
    Sleep(300);                                                                            
    scanf("%d", &operacao);                                                               
            
	Sleep(500);                                                                             
	
	switch(operacao)
	{
		case 1:
			system("cls");
			areagerenciamento();
		    break;
		
		case 2:
			system("cls");
			areaconsulta();
			break;
		
		case 3:
			Sleep(100);
			printf("\n\n\t\t--Obrigado por usar o programa e ate mais!--\n\n");
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_SCREEN_BUFFER_INFO consoleinfo;
			WORD saved_attributes;
			
			GetConsoleScreenBufferInfo(hConsole, &consoleinfo);
			saved_attributes = consoleinfo.wAttributes;
			
			Sleep(500);
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
			printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\xDB\xDB\xDB\xDB\xDB");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			printf("\xDB\xDB\xDB\xDB\xDB\n");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
			printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\xDB\xDB\xDB\xDB\xDB");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			printf("\xDB\xDB\xDB\xDB\xDB\n");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
			printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\xDB\xDB\xDB\xDB\xDB");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			printf("\xDB\xDB\xDB\xDB\xDB\n");
			Sleep(500);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			Sleep(1000);
			exit(0);
			break;
		
		default:
			printf("Opcao invalida!");
			Sleep(1000);
			system("cls");
			menuprincipal();
			
	}
	
	return 0;
	
}