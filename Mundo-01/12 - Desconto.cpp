#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float preco, desc;
	cout << "-- DESCONTO --" << endl;
	cout << "Pre�o do produto (R$): ";
	cin >> preco;
	desc = preco - (preco*5/100); // 5% desconto
	cout << "Novo pre�o do produto (R$): " << desc;
	return 0;
	}
