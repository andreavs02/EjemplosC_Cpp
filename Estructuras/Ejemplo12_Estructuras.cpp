#include<iostream>
#include<string.h>
#include<cstdlib>

using namespace std;

struct Cliente
{
	char nombre[30];
	int unidades;
	double precio;
	char estado;
};

Cliente *LeerDatosCliente(Cliente miCliente[]);
void MostrarDatosCliente(Cliente cliente[]);

int main()
{
	//Cliente cliente[100];
	Cliente *cliente = new Cliente[100];
	Cliente *cliente2 = LeerDatosCliente(cliente);
	strcpy(cliente[0].nombre,"ABC");
	MostrarDatosCliente(cliente2);
	delete[] cliente;
	return 0;
}
//Paso de paràmetros por valor.
Cliente *LeerDatosCliente(Cliente miCliente[])
{
	char limpiarBuffer[4];
	for(int i=0; i<3; i++)
	{
		cout << "Ingrese nombre del Cliente: " << i<<" : ";
		cin.getline(miCliente[i].nombre,30);
		cout << "Ingrese las unidades: ";
		cin >> miCliente[i].unidades;
		cout << "Ingrese el precio: ";
		cin >> miCliente[i].precio;
		cout << "Ingrese el estado(M=Moroso, A=Atrasado, P=Pagado): ";
		cin >> miCliente[i].estado;	
		cin.getline(limpiarBuffer,4);
	}
	//delete() miCliente[];
	return miCliente;
}
void MostrarDatosCliente(Cliente cliente[]){
	//Cliente *cliente = new Cliente[100];
	cout << "Los datos leidos de los clientes son: " << endl;
	for(int i=0;i<3;i++){
		cout<< "Cliente: " << cliente[i].nombre << ", Unidades: "	<< cliente[i].unidades << ", Precio: " << cliente[i].precio<<", Estado: "<<cliente[i].estado<< endl;	
	}

}

