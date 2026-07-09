#include <iostream>
#include <locale.h>

using namespace std;

//Exemplos de incrementação e decrementação de variáveis:

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;	
	
	//Incrementação:
		x = 0;
			cout << "\n\n---------Incrementação---------\n\n";
			
		x = x + 1;
			cout << "\n Ex. 1: x = 'x + 1'\n\n " << x;
		
		x++;
			cout << "\n\n Ex. 2: 'x++'\n\n " << x;
		
		x += 1;
			cout << "\n\n Ex. 3: 'x += 1'\n\n " << x;
			
			
	//Decrementação:
		x = 0;
			cout << "\n\n\n---------Decrementação---------\n\n";
			
		x = x - 1;
			cout << "\n Ex. 1: 'x = x - 1'\n\n " << x;
		
		x--;
			cout << "\n\n Ex. 2: 'x--'\n\n " << x;
		
		x -= 1;
			cout << "\n\n Ex. 3: 'x -= 1'\n\n " << x;
			
	cout << "\n\n\n\n ^U^\n\n\n\n";
		
	system("pause");
	return 0;
}
