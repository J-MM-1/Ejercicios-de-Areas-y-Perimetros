//Realizar un diagrama de flujo que permita calcular el área y perímetro de una elipse.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float Lma,Lme,pi, A, P;
	cout << "Longitud mayor: "; cin >> Lma;
	cout << "Longitud menor: "; cin >> Lme;
	pi = 3, 14;
	A = pi * Lma * Lme;
	P = (2 * pi) * (sqrt(((Lma * Lma) + (Lme * Lme) / 2)));
	cout << "El area de la elipse es: " << A << endl;
	cout << "El perimento de la elipse es: " << P << endl;
	return 0;
}
