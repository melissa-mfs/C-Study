#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float num, dolar=5.6;
	cout << "-- CAMBIO DE MOEDAS --" << endl;
	cout << "Valor: R$ ";
	cin >> num;
	cout << "Voc� tem US$ " << num/dolar;
	return 0;
	}
