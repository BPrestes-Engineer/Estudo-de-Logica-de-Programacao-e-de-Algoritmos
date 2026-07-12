#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, resto;
	
	//-------------------------------------------------------------------------------------------
	
	// " % " pega o resto da divisão.
	 
	x = 10;
		resto = x % 4; //% = resto.
		
	cout << "\n O resto da divisão de " << x << " por 4 é " << resto << ". \n\n\n\n";
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
