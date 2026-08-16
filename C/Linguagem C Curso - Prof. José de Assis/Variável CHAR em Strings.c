#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char name[30];
	
	//-------------------------------------------------------------------------------------------
	
	printf("\n Digite o seu nome: \n ");
		gets(name);
	
	printf("\n\n Seja Bem Vindo %s !!!\n\n\n", name);
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
