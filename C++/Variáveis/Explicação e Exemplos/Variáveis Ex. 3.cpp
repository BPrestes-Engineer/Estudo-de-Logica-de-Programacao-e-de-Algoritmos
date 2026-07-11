#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, z, soma;
	
	cout << "\n Digite o 1º número: ";
	cin >> x;
	
	cout << "\n Digite o 2º número: ";
	cin >> y;
	
	cout << "\n Digite o 3º número: ";
	cin >> z;
	
	soma = x + y + z;
	
	cout << "\n\n A soma desses números é igual a " << soma << " !!!\n\n\n";
	
	system("PAUSE");
	return 0;
}
