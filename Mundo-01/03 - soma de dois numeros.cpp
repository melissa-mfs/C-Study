#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int num1, num2, soma;
	cout << "Digite um número: ";
	cin >> num1;
	cout << "Digite outro número: ";
	cin >> num2;
	soma = num1 + num2;
	cout << "A soma entre " << num1 << " e " << num2 << " vale " << soma;
	return 0;
}
