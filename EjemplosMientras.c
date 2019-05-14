/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdlib.h>

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

/* Juego simple que pide al usuario que adivine un numero en 10 intentos */
int main() {
	float intentos;
	float num_ingresado;
	float num_secreto;
	intentos = 4;
	num_secreto = (rand()%10)+1;
	printf("El numero aleatorio generado es: %f\n",num_secreto);
	printf("Tienes%fAdivine el numero (de 1 a 10):\n",intentos);
	scanf("%s",num_ingresado);
	while (num_secreto!=num_ingresado && intentos>1) {
		if (num_secreto>num_ingresado) {
			printf("Muy bajo\n");
		} else {
			printf("Muy alto\n");
		}
		intentos = intentos-1;
		printf("Le quedan %f intentos:\n",intentos);
		scanf("%f",&num_ingresado);
	}
	if (num_secreto==num_ingresado) {
		printf("Exacto! Usted adivino en %f intentos.\n",intentos);
	} else {
		printf("El numero era: %f\n",num_secreto);
	}
	return 0;
}

