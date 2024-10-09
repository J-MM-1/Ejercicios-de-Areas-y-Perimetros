//Realizar un programa que permita calcular el volumen de un cilindro.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float pi, r, h, V;
	cout << "Radio: "; cin >> r;
	cout << "Altura: "; cin >> h;
	pi = 3, 14;
	V = pi * r * r * h;
	cout << "El volumen del cilindro es: " << V << endl;
	return 0;
}
