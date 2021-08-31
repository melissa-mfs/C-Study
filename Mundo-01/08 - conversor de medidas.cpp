#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float m, km, hm, dam, dm, cm, mm;
	cout << "Uma distância em METROS: ";
	cin >> m;
	km = m/1000;
	hm = m/100;
	dam = m/10;
	dm = m*10;
	cm = m*100;
	mm = m*1000;
	cout << "A Medida de " << m << " corresponde:" << endl;
	cout << km << " Km" << endl << hm << " Hm" <<endl;
	cout << dam << " Dam" << endl << dm << " dm" <<endl;
	cout << cm << " cm" << endl << mm << " mm" <<endl;
	return 0;
}
