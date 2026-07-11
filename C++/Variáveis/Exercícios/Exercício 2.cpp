#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double x, y, z, a, b, c;
	
	//-------------------------------------------------------------------------------------------
	
	cout << "\n Pedirei a você para que digite 3 números.\n\n";
		
		cout << "\n Digite o 1º número: ";
			cin >> x;
			
		cout << "\n Digite o 2º número: ";
			cin >> y;
			
		cout << "\n Digite o 3º número: ";
			cin >> z;
	
	cout << "\n\n\n Agora, saiba que...\n\n\n\n";
	
	a = (2 * x) + (y / 2);
	
		cout << " O dobro de " << x << " mais a metade de " << y << " é igual a " << a << ".\n\n";
		
	b = (3 * x) + z;
	
		cout << " O triplo de " << x << " mais " << z << " é igual a " << b << ".\n\n";
		
	c = z * 2;
	
		cout << " "<< z << " vezes 2 é igual a " << c << ".\n\n\n\n";
		
	//-------------------------------------------------------------------------------------------	

	system("pause");
	return 0;
}
