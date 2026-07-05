#include <iostream>

/*
Iostream é uma biblioteca
I - vem de Input (Entrada)
O - vem de Output (Saída)
*/

#include <locale.h> //Para usar acento: ´´``^^~~...

using namespace std;

/*
Importando todos os identificadores do NameSpace STD para usar o cout e endl
O Namespace é uma organização de pastas, nada além disso.
*/

int main(){
	
/*
Todo o programa em C++ tem uma e somente uma função principal que é a função "MAIN"
*/
	
	setlocale(LC_ALL, "");
	
	cout << "\nOlá, Mundo!!! ^U^ \n" << endl;

	cout << "Hello, WORLD!!! \nI'm BPrestes-Engineer (^^)" << endl;

	//A função main diz que retornar um inteiro, então colocamos o 0 como um tipo de retorno
	;return 0;	
	
}
