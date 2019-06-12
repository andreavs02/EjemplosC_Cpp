#include <iostream>

using namespace std;

/*int main ()
{
	float temperatura;
	bool valor;
	cout << "Ingrese una temperatura: ";
	cin >> temperatura;
	valor = (temperatura > 33 && temperatura < 211);
	cout << valor;
	
	return 0;
}
// en expresion ternaria

valor = (temperaura >= 33 && temperatura <= 211 )? 1: 0;*/

void Primertriangulo();
const char a = '*';
const char b = ' ';
int main ()
{
	Primertriangulo();
	return 0;
	
	
	return 0;
}

void Primertriangulo()
{
	
for (int i = 0; i<= 10; i++) // filas
{
	for (int j=0 ; j<= 10; j++) // columnas
	{
		if(j > i)
		{
			cout << b;
		}else
		{
			cout << a;
		}

	}
	cout << endl;
}
}






















