#include<iostream>
#include<string.h>

using namespace std;

struct Cliente
{
	char nombre[30];
	int unidades;
	double precio;
	char estado;
};
//Paso de paràmetros por valor.
Cliente ProcesarCliente(Cliente miCliente)
{
	if(strlen(miCliente.nombre) == 0)
	{
		cout << "Ingrese nombre del Cliente: ";
		cin.getline(miCliente.nombre,30);
		cout << "Ingrese las unidades: ";
		cin >> miCliente.unidades;
		cout << "Ingrese el precio: ";
		cin >> miCliente.precio;
		cout << "Ingrese el estado(M=Moroso, A=Atrasado, P=Pagado): ";
		cin >> miCliente.estado;	
	}
	
	return miCliente;
}

int main()
{
	Cliente cliente;
	strcpy(cliente.nombre,"Andrea");
	Cliente respuestaCliente = ProcesarCliente(cliente);
	cout << "Los datos leidos del cliente son: " << endl;
	cout<< "Cliente: " << respuestaCliente.nombre << ", Unidades: "	<< respuestaCliente.unidades << ", Precio: " << respuestaCliente.precio<<", Estado: "<<respuestaCliente.estado<< endl;
	return 0;
}
