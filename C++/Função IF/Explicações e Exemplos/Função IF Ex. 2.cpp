#include <iostream>
#include <locale.h>
#include <iomanip> //Essa biblioteca fornece funcionalidades para manipulação de formatos de entrada e saída, como no comando "setprecision" abaixo.

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome, sexo;
	double x;
	
	//-------------------------------------------------------------------------------------------
	
	cout << "\n Digite o seu nome: ";
		getline(cin, nome);
		
	cout << "\n----------------------------------------------------------\n\n Certo " << nome << "! Agora nos conte o seu sexo ( Masculino ou Feminino ): \n\n ";
		cin >> sexo;
	
	cout << "\n----------------------------------------------------------\n";
		
	cout << fixed << setprecision(2); // Esse comando faz com que a impressão de valores de uma variável double tenha até duas casas decimais.
		
		x = 32.51;
	
		if ( sexo == "Masculino" ){                 //Se
		
			cout << "\n\n Isso " << nome << "! O valor da sua entrada é de R$" << x; 
		
		
		}else if( sexo == "Feminino" ){             //Senão Se 
			
			x = x / 2;
			
			cout << "\n\n Isso " << nome << "! O valor da sua entrada é de R$" << x; 	
		
			
		}else{                                      //Senão
		
		cout << "\n\n Sexo digitado errado ou não informado, tente novamente mais tarde.";
		
		}
		
		cout << "\n\n\n\n";
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
