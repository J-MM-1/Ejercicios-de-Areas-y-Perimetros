//Realizar un programa que permita calcular el área y perímetro de un hexagono.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float L, ap, A, P;
	cout << "Lado del hexagono: "; cin >> L;
	cout << "Apotema del hexagono: "; cin >> ap;
	P = L * 6;
	A = (P * ap) / 2;
	cout << "El area del hexagono es: " << A << endl;
	cout << "El perimento del hexagono es: " << P << endl;
	return 0;
}
