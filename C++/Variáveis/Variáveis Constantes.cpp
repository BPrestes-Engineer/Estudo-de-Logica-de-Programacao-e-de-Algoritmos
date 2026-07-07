#include <iostream>
#include <locale.h>

using namespace std;

//Variáveis Constantes são definidas antes/fora da função main:

#define name cout << "\nOlá, eu sou o BPrestes ^U^\n";
#define pi 3.14159;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	name
	
	cout << "\nO valor de pi é aproximadamente " << pi;
	cout << "\n\n\n";
	
	system("pause");
	return 0;
}
