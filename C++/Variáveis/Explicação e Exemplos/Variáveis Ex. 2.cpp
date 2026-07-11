#include <iostream>

#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	string nome;
	
	cout << "\n Digite o seu nome: \n";
	cout << " ";
	getline(cin, nome);
	
	cout << "\n Quantos anos você tem? \n";
	cout << " ";
	cin >> idade;
	
	cout << "\n---------------------------------\n";
	cout << "\n Nome: " << nome;
	cout << "\n\n Idade: " << idade << " anos";
	cout << "\n\n\n";
	
	system("pause");
	return 0;
}
