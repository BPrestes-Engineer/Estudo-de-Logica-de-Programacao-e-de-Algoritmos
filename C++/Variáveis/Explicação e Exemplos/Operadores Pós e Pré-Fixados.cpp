#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	double y, x;
	
	cout << "\n Digite um número: ";
		cin >> x;
		
	cout << "\n----------------- VALOR INICIAL -----------------\n\n Número " << x << ".\n\n";
	
	//Multiplicar o valor por 2:
	y = x;
	y *= 2;
		
	cout << "-------------------------------------------------\n\n Número multiplicado por 2:\n\n " << y << "\n\n\n";
	
	//Dividir o valor por 2:
	y = x;
	y /= 2;
		
	cout << " Número dividido por 2:\n\n " << y << "\n\n\n";
	
	//-----------------PÓS FIXADO-----------------
	
	cout << "----------------- Pós Fixado: ' x++ ' -----------------\n\n\n";
	cout << " O número ainda é " << x << " e segue abaixo exemplos de pós fixação com ele: ";
		y = x;
	
		cout << "\n\n " << y++; //Neste caso de pós fixado, o número é impresso primeiro e depois somado.
		cout << "\n " << y;
	
	//-----------------PRÉ FIXADO-----------------
	
	cout << "\n\n----------------- Pré Fixado: ' ++x ' -----------------\n\n\n";
	cout << " O número continua " << x << " e segue abaixo exemplos de pré fixação com ele: ";
	
		cout << "\n\n " << ++x; //Neste caso de pré-fixado, o número é somado primeiro e depois impresso.
		cout << "\n " << x; 
	
	cout << "\n\n\n Fim!\n ^U^\n\n";
	
system("pause");
return 0;	
}
