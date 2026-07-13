#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string pais;
	
	//-------------------------------------------------------------------------------------------
	
	//Um label é uma sequência de caracteres seguida por dois pontos (:) que funciona como um marcador.
	Inicio:
	
	cout << "\n Digite o país em que você acredita que ganhará a copa do mundo:\n ";
		cin >> pais;
		
	if ( pais == "BRASIL" ){
		
		cout << "\n\n ISSO!!! O BRASIL VAI GANHAR!!!\n\n\n\n";
		
	}else	if ( pais == "Brasil" ){
		
		cout << "\n\n Isso! O Brasil vai ser Hexa!!!\n\n\n\n";
		
	}else	if ( pais == "brasil" ){
		
		cout << "\n\n O Brasil ganhará!\n\n\n\n";
		
	}else{
		
		cout << endl;
		
		//Volta para o Label A
		goto Inicio;
		
	}
		
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
