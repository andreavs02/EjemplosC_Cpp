#include<stdio.h>



	void Suma(int a, int b)
	{
		int c;
		extern int variableExterna;
		variableExtena = 5;
		c = a+b;
		printf("la Suma es: %d + %d = %d", a, b, c);
		//printf("Variable global temporal =: %d", temp);
	}
