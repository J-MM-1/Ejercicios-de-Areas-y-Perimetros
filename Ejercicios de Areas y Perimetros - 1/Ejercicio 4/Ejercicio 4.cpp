//Realizar un programa que permita calcular el área de un círculo.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float pi, r, A;
	cin >> r;
	pi = 3, 14;
	A = pi * r * r;
	cout << "El area del circulo es: " << A;
	return 0;
}