#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float salario;
	cout << "Sal�rio (R$): ";
	cin >> salario;
	salario = salario + (salario*15/100); // Aumento de 15%
	cout << "Novo sal�rio: R$ " << salario;
	return 0;
}
