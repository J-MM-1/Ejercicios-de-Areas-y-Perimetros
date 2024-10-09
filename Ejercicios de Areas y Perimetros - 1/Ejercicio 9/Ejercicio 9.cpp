//Realizar un programa que permita calcular el área y perímetro de un heptagono.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float L, ap, A, P;
	cout << "Lado del heptagono: "; cin >> L;
	cout << "Apotema del heptagono: "; cin >> ap;
	P = L * 7;
	A = (P * ap) / 2;
	cout << "El area del heptagono es: " << A << endl;
	cout << "El perimento del heptagono es: " << P << endl;
	return 0;
}
