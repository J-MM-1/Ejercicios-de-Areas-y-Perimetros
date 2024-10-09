//Realizar un programa que permita calcular el área y perímetro de un pentágono.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float L, ap, A, P;
	cout << "Lado del pentagono: "; cin >> L;
	cout << "Apotema del Pentagono: "; cin >> ap;
	P = L * 5;
	A = ( P * ap) / 2;
	cout << "El area del pentagono es: " << A <<endl;
	cout << "El perimento del pentagono es: " << P <<endl;
	return 0;
}
