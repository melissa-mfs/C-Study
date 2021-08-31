#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, media;
	cout << "Digite uma nota: ";
	cin >> num1;
	cout << "Digite outra nota: ";
	cin >> num2;
	media = (num1+num2)/2;
	cout << "A mádia do aluno é " << media;
	return 0;
}
