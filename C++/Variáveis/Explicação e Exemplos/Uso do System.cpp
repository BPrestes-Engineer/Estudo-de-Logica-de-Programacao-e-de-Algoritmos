#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//-------------------------------------------------------------------------------------------
	// O comando System é basicamente os mesmos comandos do CMD ( Prompt de Comando ) do Windows.
	
	
	//system("notepad");
	//system("mspaint");               //Abrir aplicativos.
	
	
	//system("mkdir PastaSystem");     // Serve para criar uma ou mais pastas. Obs.: Para criar mais de uma pasta, basta separá-las por um espaço " ".
	
	
	system("color/?");               // Tabela de cores para o console;
		system("color F0");          // Utilizando 1 par de números hexadecimais, o primeiro número define a cor do plano de fundo e o segundo a cor das letras.
	
	
	system("pause");                 // Pausa o Console até o usuário permitir prosseguir.
	
	
	system("cls");                   // Limpa a Tela.
	
	
	system("ping www.google.com"); // Verifica o ping de um site.
	
	
	cout << "\n\n Bora Estudar!!!\n\n\n\n";
	
	//-------------------------------------------------------------------------------------------
	
	system("pause");
	return 0;
}
