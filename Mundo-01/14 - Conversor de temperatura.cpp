#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float c, f, k;
	cout << "-- CONVERSOR DE TEMPERATURA --" << endl;
	cout << "Temperatura (C°): ";
	cin >> c;
	f = ((9*c)/5) + 32;
	k = (c * 5)/ 5;
	cout << "Temperatura em (F°): " << f << endl;
	cout << "Temperatura em (K°): " << k << endl;
	return 0;
	}
