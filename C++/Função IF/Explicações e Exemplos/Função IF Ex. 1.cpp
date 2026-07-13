#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double x, y;
	string fruta;
	
	//------------------------------------------------------------------------------------------- 1º Ex.:
	
	cout << "\n Digite um número: ";
		cin >> x;
		
			if( x > 15 ){
				
				cout << "\n\n " << x << " é maior do que 15.\n\n ";
		
			}else{
				
				cout << "\n\n " << x << " é menor do que 15.\n\n";
				
			}
		
	
	//------------------------------------------------------------------------------------------- 2º Ex.:
	
	cout << "-------------------------------------------------------------------\n\n Digite um outro número: ";
		cin >> y;
		
			if( y > x ){
				
				cout << "\n\n " << y << " é maior do que " << x << ".\n\n ";
		
			}else{
				
				cout << "\n\n " << y << " é menor do que " << x << ".\n\n";
				
			}
	
	//------------------------------------------------------------------------------------------- 3º Ex.:
	
	cout << "-------------------------------------------------------------------\n\n Agora digite o nome de uma fruta: \n ";
		cin >> fruta;	
		
			if( fruta == "banana"){
				
				cout << "\n Parabéns, você digitou a fruta " << fruta << "!!!\n\n\n";
		
			}else{
				
				cout << "\n " << fruta << " não é a fruta correta T-T\n\n\n";
				
			}	
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
