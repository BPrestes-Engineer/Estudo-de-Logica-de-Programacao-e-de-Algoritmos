#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double x, y, sb, sl, ir, inss, sind;
	
	//-------------------------------------------------------------------------------------------
	
	cout << "\n Digite o valor que você ganha por hora trabalhada:\n R$";
		cin >> x;
		
	cout << "\n\n Agora digite a quantidade de horas que você trabalhou no mês:\n ";
		cin >> y;
		
			sb = x * y;
			
	cout << "\n\n O total que você deve receber por mês é R$" << sb << " \n\n\n-------------------------------------------------------------------";	
	
	cout << "\n\n\n  Então, o seu salário bruto é igual a R$" << sb << ".\n\n\n\n Porém...\n\n\n\n";
	
	
	ir = (11.0/100) * sb;
	
		sl = sb - ir;
	
			cout << " -11% de IR (Imposto de Renda): R$" << sl;
		
	inss = (8.0/100) * sb;
	
		sl = sl - inss;
	
			cout << "\n\n -8% de INSS (Aposentadoria): R$" << sl;
		
	sind = (5.0/100) * sb;
	
		sl = sl - sind;
		
			cout << "\n\n -5% de Sindicato: R$" << sl; 
			
	
	cout << "\n\n\n\n  Logo, o seu salário líquido é igual a R$" << sl;
	
	cout << "\n\n\n\n";
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
