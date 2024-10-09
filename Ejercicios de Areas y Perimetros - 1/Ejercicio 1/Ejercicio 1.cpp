//Calcular el perímetro y área de un rectángulo dada su base y su altura.
#include <iostream>
using namespace std;

int main()
{
	int b, h, A, P;
	cin >> b >> h;
	A = b + h;
	P = (2 * b) + (2 * h);
	cout << "El area es: " << A;
	cout << "El perimetro es: " << P;
	return 0;
}