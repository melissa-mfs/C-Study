#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float salario;
	cout << "Salário (R$): ";
	cin >> salario;
	salario = salario + (salario*15/100); // Aumento de 15%
	cout << "Novo salário: R$ " << salario;
	return 0;
}
