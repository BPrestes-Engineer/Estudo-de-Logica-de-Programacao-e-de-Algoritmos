#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "");
	
	// Variáveis é um espaço na memória onde vamos guardar valores temporariamente:
	
	int numerosInteiros = 3;
	double numerosQuebrados = 9.99;
	char letra = 'a';
	string textos = "Aluno Bruno";
	bool verdadeiroFalso = true;
	
	cout << "\n " << numerosInteiros << "\n";
	cout << "\n " << numerosQuebrados << "\n";
	cout << "\n " << letra << "\n";
	cout << "\n " << textos << "\n";
	cout << "\n " << verdadeiroFalso << "\n\n\n";
	
	system ("pause");
	return 0;
	
}
