#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int num;
	cout << "Digite um n�mero: ";
	cin >> num;
	cout << "Antecessor: " << num - 1 << endl;
	cout << "Sucessor: " << num + 1;
	return 0;
}
