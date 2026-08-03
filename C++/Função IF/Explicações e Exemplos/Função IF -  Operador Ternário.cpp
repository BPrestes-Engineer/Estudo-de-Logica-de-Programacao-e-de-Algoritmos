#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string letra, resultado, vogal, sexo;
	double preco;
	
	//------------------------------------------------------------------------------------------- Ex. 1:
	
	cout << "\n------------------> Ex. 1: Letra <--------------------\n";
	cout << "\n Digite uma letra qualquer: ";
	cin >> letra;
	
	// Operador Ternário:
		( letra == "a" || letra == "A" ) ? resultado = "Ótimo, você digitou a letra A !!!" : resultado = "Infelizmente a letra digitada não foi A ;-; ";
		
	
	cout << "\n\n Letra Digitada: " << letra;
	cout << "\n\n Resultado: " << resultado << "\n\n\n";
	
	
	//------------------------------------------------------------------------------------------- Ex. 2:
	
	cout << "\n------------------> Ex. 2: Vogal e Consoante <--------------------\n";
	cout << "\n Agora digite outra letra: ";
	cin >> vogal;
	
	// Operador Ternário:
		( vogal == "a" || vogal == "A" ) ? resultado = "Vogal A" :
		( vogal == "e" || vogal == "E" ) ? resultado = "Vogal E" : 
		( vogal == "i" || vogal == "I" ) ? resultado = "Vogal I" : 
		( vogal == "o" || vogal == "O" ) ? resultado = "Vogal O" : 
		( vogal == "u" || vogal == "U" ) ? resultado = "Vogal U" :
		 resultado = "Consoante " + vogal;		
	
	cout << "\n\n Letra Digitada: " << vogal;
	cout << "\n\n Resultado: " << resultado << "\n\n\n";

	//------------------------------------------------------------------------------------------- Ex. 3:
	
	preco = 10.5;
	
	cout << "\n------------------> Ex. 3: Ingresso <--------------------\n";
	cout << "\n Qual o seu sexo?\n Digite M (Masculino) ou F (Feminino): ";
	cin >> sexo;
	
	// Operador Ternário:
		( sexo == "m" || sexo == "M") ? resultado = "Masculino":
		( sexo == "f" || sexo == "F") ? resultado = "Feminino" : 
		 resultado = "Sexo digitado incorretamente, tente novamente mais tarde ;-;";
		 
		// Operador Ternário:
			( resultado == "Masculino" ) ? preco++  :
			( resultado == "Feminino"  ) ? preco-=3 :
			 preco = 00.00;
		
	
	cout << "\n\n Letra Digitada: " << sexo;	
	cout << "\n\n Resultado: " << resultado;
	cout << "\n\n Preço a ser pago: R$" << preco << "\n\n\n";
	
	//-------------------------------------------------------------------------------------------
		
	system("pause");
	return 0;
}
