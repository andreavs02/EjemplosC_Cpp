

#include<iostream>
using namespace std;


#define SIN_TIPO string


void Saludar(string valor1);
int sumar3numeros(int a, int b, int c);
int sumar(int valor1, int valor2);

void saludar(int valor1) {
	cout << "Hola" << valor1 << endl;
}

int sumar1(int a, int b, int c) {
	int d;
	d = a+b+c;
	return d;
}

int sumar(int valor1, int valor2) {
	int valorsumado;
	valorsumado = valor1+valor2;
	return valorsumado;
}

// Problema: Incremente en 1 un valor dato 
int main() {
	int a;
	int b;
	int c;
	int d;
	string nombre;
	cout << "ingrese un nombre: " << endl;
	cin >> nombre;
	void saludar( int valor1 );
	cout << "ingrese un nùmero:" << endl;
	cin >> a >> b >> c;
	d = a+b;
	cout << "el resultado de la suma de los primeros numeros es:" << d << endl;
	d = sumar(a,b);
	cout << "el resultado de la suma de los primeros numeros es:" << d << endl;
	d = sumar1(a,b,c);
	cout << "el resultado de la suma de los tres numeros es:" << d << endl;
	return 0;
}

