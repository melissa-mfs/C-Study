#include<iostream>
#include<math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int num;
	cout << "Digite um número inteiro: ";
	cin >> num;
	cout << "O dobro de " << num << " vale " << num*2 << endl;
	cout << "O triplo de " << num << " vale " << num*3 << endl;
	cout << "A raiz de " << num << " vale " << sqrt(num);
	return 0;
}
