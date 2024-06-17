#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <string.h>

void areagerenciamento()
{
	int op;
	
printf("                       \n\t\t        \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		Sleep(300);
		printf("                        \xBA                               \xBA\n");
		Sleep(300);
		printf("                        \xBA   --AREAS DE GERENCIAMENTO--  \xBA\n");
		Sleep(300);
		printf("                        \xBA                               \xBA\n");
		Sleep(300);
		printf("                        \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		Sleep(1000);
		printf("\n\n");
	
	printf("  1- Cadastro de Equipamento-");
	Sleep(300);
	
	printf("                           2- Cadastro de funcionarios-\n\n");
	Sleep(300);
	
	printf("  3- Cadastro de Pais-");
	Sleep(300);
	
	printf("                                  4- Cadastro de alojamentos-\n\n");
	Sleep(300);
	
	printf("  5- Cadastro de atletas-");
	Sleep(300);
	
	printf("                               6- Cadastro de modalidades-\n\n");
	Sleep(300);
	
	printf("  7- Controle de COVID-");
	Sleep(300);
	
	printf("                                 8- Cadastro de voluntarios-\n\n");
	Sleep(300);
	
	printf("  9- Cadastro de equipe-");
	Sleep(300);
	
	printf("                                10- Cadastro de local de jogos e treino-\n\n");
	Sleep(300);
	
	printf("  11- Cadastro de equipe medica-");
	Sleep(300);
	
	printf("                        12- Voltar ao menu principal-\n\n");
	Sleep(300);
	
	printf("  R: ");
	
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
			Sleep(500);
			system("cls");
			menuequipamento();
			break;
			//funcao cadastro de equipamento AQUI!
		
		case 2:
			Sleep(500);
			system("cls");
		    menufuncionarios();
			break;
			//funcao cadastro de funcionario AQUI!
		
		case 3:
			Sleep(500);
			system("cls");
		    menupaises();
			break;
			//funcao cadastro de pais AQUI!
		
		case 4:
			Sleep(500);
			system("cls");
		    menulocalalojamentos();
			break;
			//funcao cadastro de alojamento AQUI!
		
		case 5:
			Sleep(500);
			system("cls");
		    menuatletas();
			break;
			//funcao cadastro de atleta AQUI!
		
		case 6:
			Sleep(500);
			system("cls");
		    menumodalidades();
			break;
			//funcao cadastro de modalidade AQUI!
		
		case 7:
			Sleep(500);
			system("cls");
		    menuCOVID();
			break;
			//funcao cadastro de controle de COVID AQUI!
			
		case 8:
			Sleep(500);
			system("cls");
		    menuvoluntarios();
			break;
			//funcao cadastro de voluntario AQUI!
			
		case 9:
		    Sleep(500);
		    system("cls");
		    menucadastroequipe();
			break;
			//funcao cadastro de equipe AQUI!
			
		case 10:
			Sleep(500);
			system("cls");
		    menulocalj();
			break;
			//funcao cadastro local dos jogos AQUI!
			
		case 11:
			Sleep(500);
			system("cls");
		    menuequipemed();
			break;
			//funcao cadastro equipe medica AQUI!
			
		case 12:
		    system("cls");
		    menuprincipal();
			break;
			
		default:
		    printf("Opcao invalida!");
			Sleep(3000);
			system("cls");
			areagerenciamento();    
														
	}
}