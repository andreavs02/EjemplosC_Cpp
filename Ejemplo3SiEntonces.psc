Algoritmo EjemploSiEntonces
	Definir A,B Como Entero;
	Contador = -1;
	Repetir
		Limpiar Pantalla;
		Escribir "Ingrese 2 valores, o 0 para finalizar";
	    Leer A,B;
		si (A=0)
			contador = 0; 
		FinSi
	Leer A,B
	Si (A < B) o (A = B) Entonces;
		Escribir A,'es menor que',B;
	SiNo

	 Escribir A, "es MAYOR que",B;
	
 FinSi
Hasta Que contador = 0;
FinAlgoritmo

