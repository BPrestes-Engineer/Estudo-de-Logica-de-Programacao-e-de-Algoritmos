#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char s;
	
	//-------------------------------------------------------------------------------------------
	
	cout << "\n Digite o seu Sexo\n\n M para ( Masculino ) ou F para ( Feminino ):\n\n ";
		cin >> s;
	
	if( s == 'F' || s == 'f' ){
		
		cout << "\n " << s << " de Feminino!\n\n\n";
		
	}else if( s == 'M' || s == 'm' ){
		
		cout << "\n " << s << " de Masculino!\n\n\n";
		
	}else{
		
		cout << "\n Sexo Inválido, tente novamente mais tarde T-T\n\n\n ";
		
	}
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
