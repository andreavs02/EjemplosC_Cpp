#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
/*1. Escriba un programa que muestre el siguiente resultado en pantalla(use bucles):  (2 puntos)

1
2       4
3       6       9
4       8       12      16
5       10      15      20      25
*/

/*int main ()

int main (){
	
	for ( int i =1; i<=5;i++){
		for (int j = 1; j<=5; j++){
			if (i<j){
				cout <<" ";
			}else{
				cout << i*j;
			}
			
		}
	cout << endl;
	}
	
	
	return 0;
}

//2. Encuentra la suma de todos los no impares entre 1 y 100. Usar tres técnicas diferentes de bucle. (2 puntos)

/*int main ()
{ int conteo = 0, suma = 0;

	for (int i = 1; i<= 100; i++ ){
		if (i %2==0){
			suma += i;
		}
	}
	cout << "La suma de los numeros no impares es: " << suma << endl;
	
	return 0;
}
*/
/*3. Algunos países usan la escala Celsius para medir la temperatura, mientras que otros usan la escala Fahrenheit. 
Crear un programa que imprima una tabla que va de 0 grados centigrados a 100 grados centigrados en pasos de 10 con 
su equivalencia en grados Fahrenheit. Para una temperatura Celsius, el equivalente en Fahrenheit es 32 + 9C / 5. 
La tabla a mostrar es la siguiente: (2 puntos)
Celsius 	Fahrenheit
0              32
10            50
20            68
30            86
40            104
50            122
60            140
70            158
80            176
90            194
100          212
*/
/*int main ()
{
	int Fahrenheit, Celsius= 0;
	
	for (int i = 0; i<=100; i+=10){
		
		Celsius = i;
		Fahrenheit = 32+ (9*Celsius /5);
		
		cout << "\tCelsius\t" << i << "\tFahrenheit\t" << Fahrenheit << endl;	

	}
	return 0;
}
*/

/*4. Dados tres valores enteros que representan los lados de un triángulo, crear un programa en c++ que imprima:
- "No es un triángulo", si los valores no pueden ser los lados de cualquier triángulo. Esto es así si cualquier 
valor es negativo o cero, o si la longitud de cualquier lado es mayor o igual que la suma de los otros dos; (4 puntos)
- "Escaleno", si el triángulo es escaleno (todos los lados son diferentes);
- "Isósceles", si el triángulo es isósceles (dos lados iguales);
- "Equilátero", si el triángulo es equilátero (tres lados iguales).


*/
/*int main ()
{
	int a, b, c;
	cout << ""
	
	
	
	
	
	return 0;
}

*/
















