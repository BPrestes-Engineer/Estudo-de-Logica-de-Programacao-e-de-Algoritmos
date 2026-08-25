#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float c1, c2, c3, media = 0;
	char aluno[40];
	
	//-------------------------------------------------------------------------------------------
	
	printf("\n Qual o nome do aluno?\n ");
		fgets(aluno, sizeof(aluno), stdin);
	
	printf("\n Digite a nota do ciclo 1 de %s: ", aluno);
		scanf("%f", &c1);
		
	printf("\n Digite a nota do ciclo 2 de %s: ", aluno);
		scanf("%f", &c2);
		
	printf("\n Digite a nota do ciclo 3 de %s: ", aluno);
		scanf("%f", &c3);
		
	printf("\n\n------------------------------------------------\n");
	
	media = ( c1 + c2 + c3 ) / 3;
	
	if(media >= 60){
		
		printf("\n\n Como a sua média foi de %.2f considere-se aprovado!!! ^U^\n\n\n ", media);
	
	}else{
		
		printf("\n\n Como a sua média foi de %.2f considere-se reprovado!!!\n\n\n ", media);
		
	}
	
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
