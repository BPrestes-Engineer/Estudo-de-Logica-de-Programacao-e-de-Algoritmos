#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char letra;

	
	//-------------------------------------------------------------------------------------------
	
	cout << "\n Digite uma letra qualquer: ";
		cin >> letra;
	
	if( letra == 'A' || letra == 'a' ||
		letra == 'E' || letra == 'e' ||
		letra == 'I' || letra == 'i' ||
		letra == 'O' || letra == 'o' ||
		letra == 'U' || letra == 'u' ){
		
			cout << "\n A letra '" << letra << "' é uma Vogal!!!\n\n\n ";
		
	}else{
		
			cout << "\n A letra '" << letra << "' é uma Consoante!!!\n\n\n ";
		
	}
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
