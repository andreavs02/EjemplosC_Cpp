#include <iostream>
#define ESPACIO ' '
using namespace std;

int main()
{
	int contador = 0;
	//string cadena = " Escuela   Politécnica Nacional "; // 13 Vocales mas sofisticado.
	char cadena[] = " Escuela Politécnica Nacional. ";
	//char cadena[] = "Escuela EPN"; 
	//int tamanio = cadena.length();
	int tamanio = sizeof(cadena); // datos primitivos
	cout << tamanio << endl;
	
	for (int i=0 ; i<tamanio - 1; i++){
		if(
			cadena[i] == ESPACIO && i == 0)
		{
			continue;
		}
		if(
			cadena[i] == ESPACIO &&
			cadena[i-1]!=ESPACIO
		){
			contador ++;
		}
	cout << cadena[i] << endl;
	}
	cout << "El total palabras encontradas son: " << contador << endl;
	return 0;
}

