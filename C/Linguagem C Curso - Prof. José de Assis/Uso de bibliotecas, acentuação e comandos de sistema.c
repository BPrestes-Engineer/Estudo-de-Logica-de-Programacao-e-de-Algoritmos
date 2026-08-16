#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Olá Mundo !!!\n\n\n ^w^ \n\n\n\n");
	
	//Mostra tabela de cores
	system("color/?");
	//Define a cor
	system("color 5F");
	//Limpa o terminal
	system("cls");
	
	printf("\n Pelas BARBAS DO PROFETa, GAROTO!!! \n\n\n ");
	//Pausa a execução e espera um comando para prosseguir
	system("pause");
	return 0;
}
