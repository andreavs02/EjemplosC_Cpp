#include<iostream>
#include<cstdlib>
#include<string.h>


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
	Cliente cliente3;
	Cliente listadoCliente[100];
	cliente3 = cliente2 = cliente1;
	cout <<"Los valores del cliente son: " << cliente0.nombre << ", "	<< cliente0.numUnidades << ", " << cliente0.precio << ", "	<< cliente0.estado << endl; 
	cout <<"Los valores del cliente 1 son: " << cliente1.nombre << ", "	<< cliente1.numUnidades << ", " << cliente1.precio << ", " << cliente1.estado << endl;
	cout <<"Los valores del cliente 2 son: " << cliente2.nombre << ", "<< cliente2.numUnidades << ", " << cliente2.precio << ", " << cliente2.estado << endl;  	
	int unidades = cliente1.numUnidades; 
	strcpy(cliente3.nombre, "Rubi Cachipuendo");
	cliente3.numUnidades = 12;
	cliente3.precio = 5.62;
	cliente3.estado = 'P';
	cout <<"Los valores del cliente 3 son: " << cliente3.nombre << ", "<< cliente3.numUnidades << ", " << cliente3.precio << ", " << cliente3.estado << endl;  	
	Cliente *cliente4;
	cliente4 = (Cliente*)malloc(sizeof(Cliente));
	strcpy(cliente4->nombre, "Maria Colcha");
	cliente4->numUnidades = 10;
	cliente4->precio = 8.50;
	cliente4->estado = 'P';
	cout <<"Los valores del cliente 4 son: " << cliente4->nombre << ", "<< cliente4->numUnidades << ", " << cliente4->precio << ", " << cliente4->estado << endl;  	
	free(cliente4);
	Cliente *cliente5 = new Cliente;
	strcpy(cliente5->nombre, "Rodrigo Cachipuendo");
	cliente5->numUnidades = 20;
	cliente5->precio = 18.25;
	cliente5->estado = 'P';
	cout <<"Los valores del cliente 5 son: " << cliente5->nombre << ", "<< cliente5->numUnidades << ", " << cliente5->precio << ", " << cliente5->estado << endl;  	
	delete cliente5;
	
	system("pause");
	return 0;
}
