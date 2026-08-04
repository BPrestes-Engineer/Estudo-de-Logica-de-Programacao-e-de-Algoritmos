#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	//-------------------------------------------------------------------------------------------
	
	cout << "\n Digite um número inteiro ( x ) positivo ( x > 0 ) ou negativo ( x < 0 ):\n\n ";
		cin >> x;
		
	if( x < 0){
		
		cout << "\n O número " << x << " é um número negativo!\n\n\n ";		
		
	}else if( x > 0 ){
		
		cout << "\n O número " << x << " é um número positivo!\n\n\n ";
		
	}else{
		
		cout << "\n O número " << x << " é nulo.\n\n\n ";
		
	}
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
