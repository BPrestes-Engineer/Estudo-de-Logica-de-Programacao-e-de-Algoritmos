#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double x, y, z;
	
	//-------------------------------------------------------------------------------------------

	cout << "\n Digite o 1º número:  ";
		cin >> x;
	
	cout << "\n Digite o 2º número:  ";
		cin >> y;
		
	cout << "\n Digite o 3º número:  ";
		cin >> z;
		
	cout << "\n-------------------------------------------";

	//Primeiro vamos encontrar o maior:
	if( x > y && x > z ){
		
		cout << "\n\n O maior número é o " << x << " !!!\n";
		
	}else if( y > x && y > z ){
		
		cout << "\n\n O maior número é o " << y << " !!!\n";
		
	}else{
		
		cout << "\n\n O maior número é o " << z << " !!!\n";
		
	}

	//Agora vamos encontrar o menor:
	if( x < y && x < z ){
		
		cout << "\n E o menor número é o " << x << " !!!\n\n\n ";
		
	}else if( y < x && y < z ){
		
		cout << "\n E o menor número é o " << y << " !!!\n\n\n ";
		
	}else{
		
		cout << "\n E o menor número é o " << z << " !!!\n\n\n ";
		
	}

	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
