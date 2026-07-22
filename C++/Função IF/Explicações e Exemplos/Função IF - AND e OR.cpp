#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double x;
	string fruta;
	
	//-------------------------------------------------------------------------------------------
	//   " && " é utilizado para expressar a conjunção " e " na expressão booleana.
	
	cout << "\n Digite um número: ";
		cin >> x;
		
	if ( x >= 2 && x <= 10 ){
		
		cout << "\n\n " << x << " está dentro do intervalo de 2 a 10.";
		 
		
	}else{
		
		cout << "\n\n " << x << " Está fora do intervalo de 2 a 10!";
		
	}
	
	cout << "\n\n\n-------------------------------------------------------\n\n\n";
	
	//-------------------------------------------------------------------------------------------
	//   " || " é utilizado para expressar a conjunção " ou " na expressão booleana.
	 
	cout << " Digite o nome de uma fruta: \n\n ";
		cin >> fruta;
	
	if ( fruta == "laranja" || fruta == "Laranja" ){
		
		cout << "\n Você digitou a fruta " << fruta << "!!!\n\n\n";
		
	}else if ( fruta == "Maca" || fruta == "maca"){
		
		cout << "\n Você digitou a fruta Maçã!!!\n\n\n";
		
	}else{
		
		cout << "\n " << fruta << " não é maça nem laranja ;-;\n\n\n";
		
	}
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
