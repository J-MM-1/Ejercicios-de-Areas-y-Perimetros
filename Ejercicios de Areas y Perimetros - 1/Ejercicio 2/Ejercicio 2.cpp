//Dados los catetos de un triángulo rectángulo calcular su hipotenusa.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c;
	cin >> a >> b;
	c = sqrt((a * a) + (b * b));
	cout << "La hipotenusa es: " << c;
	return 0;
}