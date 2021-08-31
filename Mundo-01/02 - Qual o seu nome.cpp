#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	char nome[50];
	cout << "Qual o seu nome? ";
	cin >> nome;
	cout << "É um prazer em te conhecer " << nome;
	return 0;
}
