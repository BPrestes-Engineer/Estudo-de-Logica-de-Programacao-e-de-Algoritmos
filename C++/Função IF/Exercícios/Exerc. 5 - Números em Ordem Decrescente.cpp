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
		
	cout << "\n-----------------------------------------------------\n\n";

	if( x > y && y > z ){
	
		cout << " Em ordem DECRESCENTE, ficaria:\n\n " << x << "\n " << y << "\n " << z << "\n\n\n\n ";
	
	}else if( x > z && z > y ){
		
		cout << " Em ordem DECRESCENTE, ficaria:\n\n " << x << "\n " << z << "\n " << y << "\n\n\n\n ";
		
	}else if( y > x && x > z ){
		
		cout << " Em ordem DECRESCENTE, ficaria:\n\n " << y << "\n " << x << "\n " << z << "\n\n\n\n ";
		
	}else if( y > z && z > x ){
		
		cout << " Em ordem DECRESCENTE, ficaria:\n\n " << y << "\n " << z << "\n " << x << "\n\n\n\n ";
		
	}else if( z > x && x > y ){
		
		cout << " Em ordem DECRESCENTE, ficaria:\n\n " << z << "\n " << x << "\n " << y << "\n\n\n\n ";
		
	}else{
		
		cout << " Em ordem DECRESCENTE, ficaria:\n\n " << z << "\n " << y << "\n " << x << "\n\n\n\n ";
		
	}

	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
