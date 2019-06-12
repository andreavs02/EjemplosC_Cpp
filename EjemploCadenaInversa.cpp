//Programa que imprima el programa una cadena en orden inverso.

#include <iostream>
#define ESPACIO ' '
#include <string.h>
using namespace std;

int main()
{
	int contador = 0;
	//string cadena = " Escuela   Politécnica Nacional "; // 13 Vocales mas sofisticado.
	char cadena[] = "Escuela Politécnica Nacional";
	//char cadena[] = "Escuela EPN"; 
	//int tamanio = cadena.length();
	int tamanio = sizeof(cadena); // datos primitivos
	char cadena2[tamanio];
	//char *cadena3;
	//cadena3 = &cadena2;
	strcpy(cadena2 , cadena); // almacenar el valor de la cadena1 en cadena2.
	cout << tamanio << endl;
	
	for (int i=tamanio - 1 ; i >= 0; i--){

	cout << cadena2[i];
	}
	cout << "\nEl total palabras encontradas son: " << contador << endl;
	return 0;
}


