#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float alt, larg, litro;
	cout << "Altura da parede em metros: ";
	cin >> alt;
	cout << "Largura da perede em metros: ";
	cin >> larg;
	litro = (alt*larg)/2;  //cada litro de tinta suporta até 2m²
	cout << "Quantidade de tinta necessária é de " << litro << " litros.";
	return 0;
	}
