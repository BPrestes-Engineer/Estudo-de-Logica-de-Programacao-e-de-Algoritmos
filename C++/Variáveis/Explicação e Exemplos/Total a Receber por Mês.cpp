#include <iostream>
#include <locale.h>

using namespace std;

//Exercício de Total a Receber por Mês.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double x, y, z;
	
	//-------------------------------------------------------------------------------------------
	
	cout << "\n Digite o valor que você ganha por hora trabalhada:\n R$";
		cin >> x;
		
	cout << "\n\n Agora digite a quantidade de horas que você trabalhou no mês:\n ";
		cin >> y;
		
			z = x * y;
			
	cout << "\n\n\n O total que você deve receber por mês é R$" << z << " \n\n\n\n\n";	
		
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}

