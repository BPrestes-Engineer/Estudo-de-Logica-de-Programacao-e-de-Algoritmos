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
	bool verdadeiroFalso = false;
	
	cout << "\n " <<  numerosInteiros << "\n";
	
	return 0;
	
}
