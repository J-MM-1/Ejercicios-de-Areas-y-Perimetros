//Realizar un programa que permita calcular el volumen de un paralelepipedo.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c, V;
	cout << "Lado 1: "; cin >> a;
	cout << "Lado 2: "; cin >> b;
	cout << "Lado 3: "; cin >> c;
	V = a * b * c;
	cout << "El volumen del paralelepipedo es: " << V << endl;
	return 0;
}
