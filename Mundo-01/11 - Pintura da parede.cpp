#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float alt, larg, litro;
	cout << "Altura da parede em metros: ";
	cin >> alt;
	cout << "Largura da perede em metros: ";
	cin >> larg;
	litro = (alt*larg)/2;  //cada litro de tinta suporta at� 2m�
	cout << "Quantidade de tinta necess�ria � de " << litro << " litros.";
	return 0;
	}
