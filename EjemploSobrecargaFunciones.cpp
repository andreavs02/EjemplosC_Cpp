#include<iostream>

using namespace std;

int cuadrado(int x)
{
	cout << "el cuadrado del valor int" << x << "es";
	return x*x;
}

duble cuadado(double y)
{
	cout << "El cuadrado del valor double" << y << "es";
	return y*y;
}

int main(int argc, char** argv)
{
	cout << cuadrado(7);
	cout << endl;
		cout << cuadrado(7.5);
	cout << endl;
	return 0;
}

int main()
{
	int a, b, c, d;
	cout << "Ingrese 3 valores a sumar" << endl;
	cin >> a >> b >> c;
	cout << a << "" << b << "" << c << endl;
	d = Suma(a);
	cout << "El resultado de incrementar el primer valor es:" << d << endl;
	d = Suma (a, b);
	cout << "El resultado de suma los 2 primeros numeros es:" << d << endl;
	d = Suma (a, b, c);
	cout << "El resultado de incrementar el primer valor es:" << d << endl;
}
