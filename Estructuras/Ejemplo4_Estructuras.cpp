#include<iostream>
#include<conio.h>

using namespace std;

struct Cliente
{
	char nombre[20];
	int numUnidades;
	float precio;
	char estado;
}cliente0 = {"Andrea Cachipuendo",11,14.54,'M'};

int main()
{
	Cliente cliente1 = {"Adrian Eguez", 12, 11.11, 'P'};
	Cliente cliente2 = {"Eddy Cachipuendo", 12,14.54,'A'};
	Cliente cliente3,cliente4;
	Cliente listadoCliente[100];
	cliente4 = cliente3 = cliente2 = cliente1;
	
	cout << "sizeof(char)=" << sizeof(char)<< endl;
	cout << "sizeof(int)=" << sizeof(int)<< endl;
	cout << "sizeof(float)=" << sizeof(float)<< endl;
	cout << "sizeof(Cliente)=" << sizeof(Cliente)<< endl;
	
	getch();
	return 0;
}
