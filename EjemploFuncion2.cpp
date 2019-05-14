

#include<iostream>
using namespace std;


#define SIN_TIPO string


void Saludar();
float calculardoble(float num);
void triplicar(float &num);

// funcion que no recibe ni devuelve nada
void Saludar() {
	cout << "Hola mundo!" << endl;
}

// funcion que recibe un argumento por valor, y devuelve su doble
float calculardoble(float num) {
	float res;
	// retorna el doble
	res = num*2;
	return res;
}

// funcion que recibe un argumento por referencia, y lo modifica
void triplicar(float &num) {
	// modifica la variable duplicando su valor
	num = num*3;
}

// proceso principal, que invoca a las funciones antes declaradas
int main() {
	SIN_TIPO x;
	cout << "Llamada a la funcion Saludar:" << endl;
	// como no recibe argumentos pueden omitirse los par�ntesis vacios
	Saludar();
	cout << "Ingrese un valor num�rico para x:" << endl;
	cin >> x;
	cout << "Llamada a la funci�n CalcularDoble (pasaje por valor)" << endl;
	cout << "El doble de " << x << " es "  << float calculardoble (float num) << endl;
	cout << "El valor original de x es " << x << endl;
	cout << "Llamada a la funci�n Triplicar (pasaje por referencia)" << endl;
	triplicar(x);
	cout << "El nuevo valor de x es " << x << endl;
	return 0;
}

