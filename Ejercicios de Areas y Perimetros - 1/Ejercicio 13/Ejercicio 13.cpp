//Realizar un programa que permita calcular el volumen de un cubo.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float l, V;
	cout << "Lado: "; cin >> l;
	V = l * l * l;
	cout << "El volumen del cubo es: " << V << endl;
	return 0;
}
