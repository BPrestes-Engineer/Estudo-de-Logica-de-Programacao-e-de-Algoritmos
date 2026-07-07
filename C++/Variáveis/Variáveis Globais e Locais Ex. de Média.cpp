#include <iostream>
#include <locale.h>

using namespace std;

//Variáveis Globais são aquelas que podem ser acessadas em todas as funções, pois não está dentro de uma:
string aluno;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis locais são aquelas que só podem ser acessadas dentro da função em que foi criada:
	double nota1, nota2, nota3, nota4, media, soma;
	
	cout << "\n Digite o nome do aluno:\n ";
	getline (cin, aluno);
	
	cout << "\n Isso! Agora digite a nota da primeira prova de " << aluno << ":\n ";
	cin >> nota1;

	cout << "\n Isso! Agora digite a nota da segunda prova de " << aluno << ":\n ";
	cin >> nota2;
	
	cout << "\n Isso! Agora digite a nota da terceira prova de " << aluno << ":\n ";
	cin >> nota3;

	cout << "\n Isso! Agora digite a nota da quarta prova de " << aluno << ":\n ";
	cin >> nota4;
	
	soma =  nota1 + nota2 + nota3 + nota4;
	media = soma / 4;
	
	cout << "\n\n A média de " << aluno << " ficou igual a " << media << " pontos!\n ";
	cout << "^U^\n\n\n";
	
	system("pause");
	return 0;
}

