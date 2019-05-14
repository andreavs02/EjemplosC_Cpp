Funcion Saludar ( valor1 )
	Escribir "Hola" , valor1;
	
Fin Funcion

Funcion d <- Sumar1 ( a, b, c )
	Definir d Como Entero;
	d = a + b + c;
Fin Funcion

Funcion valorSumado <- Sumar ( Valor1 , valor2 )
	Definir valorSumado Como Entero;
	valorSumado = valor1 + valor2;
Fin Funcion

//Problema: Incremente en 1 un valor dato 
Algoritmo incremente
	Definir  a,b,c,d como entero;
	Definir nombre como cadena;
	Escribir "ingrese un nombre: ";
	Leer nombre;
	Saludar( nombre );
	Escribir "ingrese un nùmero:";
	Leer a,b,c;
	d= a + b;
	Escribir "el resultado de la suma de los primeros numeros es:", d;
	d= Sumar (a , b);
	Escribir "el resultado de la suma de los primeros numeros es:", d;
	d = Sumar1 (a , b, c);
	Escribir "el resultado de la suma de los tres numeros es:", d;
	
	
	
FinAlgoritmo