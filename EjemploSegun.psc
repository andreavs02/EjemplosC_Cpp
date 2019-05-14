Algoritmo EjemploSegun
	Definir opcionEscogida, a, b, c como entero;
	escribir "---CALCULADORA BASICA---";
	ESCRIBIR "Opciones: ";
	escribir "1: Suma";
	Escribir "2: Restar";
	Escribir "3: Multiplicar";
	leer opcionEscogida;
	Segun opcionEscogida Hacer
		1:
			Escribir "Ingrese 2 nùmeros";
			Leer a,b;
			c = a + b;
		2:
			Escribir "La suma es:", c;
		3:
			Escribir "Escogio opcion 3";
		De Otro Modo:
			Escribir "Opcion invalida";
	Fin Segun
	
FinAlgoritmo
