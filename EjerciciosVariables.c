/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

int main() {
	SIN_TIPO cero;
	SIN_TIPO dato;
	int dato1;
	bool dato10;
	char dato2[MAX_STRLEN];
	char dato3[MAX_STRLEN];
	float dato4;
	float dato5;
	char dato6[MAX_STRLEN][4];
	char dato7[MAX_STRLEN];
	bool dato8;
	bool dato9;
	/* definir dato4 como entero; */
	dato1 = 2;
	dato2 = "2";
	dato3 = "2";
	dato4 = -6;
	dato5 = 7.14;
	dato6[-1] = "3";
	dato6[0] = "0";
	dato6[1] = "4";
	dato6[2] = "7";
	dato7 = "2015";
	dato8 = true;
	dato9 = false;
	dato10 = cero;
	printf("%i\n",dato1);
	printf("%s\n",dato2);
	printf("%s\n",dato3);
	printf("%f\n",dato4);
	printf("%f\n",dato5);
	printf("%s%s%s%s\n",dato6[-1],dato6[0],dato6[1],dato6[2]);
	printf("%s\n",dato);
	printf("%i\n",dato8);
	printf("%s%f\n",dato,9);
	printf("%s%f\n",dato,10);
	return 0;
}

