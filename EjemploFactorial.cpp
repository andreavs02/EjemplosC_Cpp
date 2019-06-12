#include<stdio.h>
#include<iostream>

using namespace std;

int FactorialIterativo(int n);
int FactorialRecursivo(int n);
int FactorialTernario(int n);

int main()
{
	int n, fact;
	cout << "Programa que calcula un factorial de un numero entre 2 y 10. \n";
	do 
	{
		cout << "Ingrese un valor ";
		cin >> n;
	}while((n<2) || (n>10));
	fact = FactorialIterativo(n);
	cout << "De forma Iterativa" << n << "! es :" << fact;
	cout << endl;
	fact = FactorialRecursivo(n);
	cout << "De forma Recursiva" << n << "! es :" << fact << endl;
	
	cout << "De forma Ternaria" << n << "! es :" << fact << endl;
	
	return 0;
}
 // funcion que calcula el factorial de forma iterativa

int FactorialIterativo(int n)
{
	int fact, m;
	for (m = n, fact = 1; n>1 ; n-- )
	{
		fact = fact * n;
	}
	return fact;
}

// funcion que calcula el factorial de forma recursiva
/*
int FactorialRecursivo(int n)
{
	if (n <=1)
		return 1;
	return n * FactorialRecursivo(n-1);
}
*/
int FactorialTernario(int n)
{
	if (n <=1)
		return (n<=1)? 1: n * FactorialRecursivo(n-1);
}
















