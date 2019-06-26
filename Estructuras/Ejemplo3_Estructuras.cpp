#include<iostream>

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
	Cliente cliente2 = {"Eddy Cachipuendo", 12,14.54,'M'};
	Cliente cliente3,cliente4;
	Cliente ListadoCliente[100];
	cliente4 = cliente3 = cliente2 = cliente1;
	
	return 0;
}
