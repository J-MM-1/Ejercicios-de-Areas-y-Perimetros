//Realizar un programa que permita calcular el área de un octogono.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float L, ap, A;
	cin >> L; ap;
	A = (L * 8 * ap) / 2;
	cout << "El area del octogono es: " << A;
	return 0;
}