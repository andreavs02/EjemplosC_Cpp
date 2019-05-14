#include<iostream>
using namespace std;

int main()
{
	int valor,a,b,c;
	cout << "----CALCULADORA BASICA----" << endl;
	cout << "escoja una opcion" <<endl;
	cout << "1:Sumar " << endl;
	cout << "2: Restar"<< endl;
	cout << "3:Multiplicar" << endl;
	cin >>valor;
	switch(valor)
	{
		case 1:
			cout <<"ingrese 2 valores a sumar:";
			cin>> a >> b;
			c = a + b;
			cout << "la suma es:" << c << endl;
			//break;
		case 2:
			cout << "escogio un valor 2" << endl;
			//break;
		case 3:
			cout << "escogio un valor 3" << endl;
			//break;
	
		default: 
			cout << "opcion invalida" << endl;
			break;
	}
return  0;	
}

