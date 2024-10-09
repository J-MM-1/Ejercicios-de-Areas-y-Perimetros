//Realizar un programa que permita calcular el área de un trapecio.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float B, b, h, A;
	cin >> B >> b >> h;
	A = ((B + b) / 2) * h;
	cout << "El area del trapecio es: " << A;
	return 0;
}