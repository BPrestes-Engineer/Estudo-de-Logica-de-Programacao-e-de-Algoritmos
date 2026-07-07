//Conversor de metros para centímetros.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double m, cm;
	
	cout << "\n Digite uma quantia em metros: ";
	cin >> m;
	
	cm = m * 100;
	
	cout << "\n " << m << "m equivale a " << cm << "cm !!! \n\n";
	
	system("pause");
	return 0;
}
