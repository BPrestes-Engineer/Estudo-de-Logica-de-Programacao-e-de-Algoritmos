#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor, duzentos, cem, cinquenta, vinte, dez, cinco, dois, resto;
	
	//-------------------------------------------------------------------------------------------
	
	cout << "\nDigite um valor entre 2 e 2000 reais o qual deseja sacar: ";
		cin >> valor;
	
	if ( valor < 2 || valor > 2000 ){
	
		cout << "\nOpção inválida, digite um valor entre 2 e 2000 na próxima tentativa ^U^";
	
	}else{
	
		cout << "\nPara o valor de " << valor << " reais, você poderá sacar: \n\n";
	
		duzentos = valor/200;
		valor -= duzentos * 200;
	
		cem = valor/100;
		valor -= cem * 100;
		
		cinquenta = valor/50;
		valor -= cinquenta * 50;
		
		vinte = valor/20;
		valor -= vinte * 20;
		
		dez = valor/10;
		valor -= dez * 10;
		
		cinco = valor/5;
		valor -= cinco * 5;
		
		dois = valor/2;
		valor -= dois * 2;
	
		resto = valor;
		
		if ( resto > 1){
			
			cout << "Erro operacional, tente novamente";
			
		}else{
					
			if ( duzentos > 0 )
				cout << duzentos << " notas de R$200,00;\n";
			
			if ( cem > 0 )
				cout << cem << " notas de R$100,00;\n";
				
			if ( cinquenta > 0 )
				cout << cinquenta << " notas de R$50,00;\n";
				
			if ( vinte > 0 )
				cout << vinte << " notas de R$20,00;\n";
				
			if ( dez > 0 )
				cout << dez << " notas de R$10,00;\n";
				
			if ( cinco > 0 )
				cout << cinco << " notas de R$5,00;\n";
				
			if ( dois > 0 )
				cout << dois << " notas de R$2,00;\n";
				
			if ( valor > 0 )
				cout << "\nSobrando R$" << resto << ",00 de resto na sua conta ^U^  !!!";
		}
	}	
	
	cout << "\n\n";
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
