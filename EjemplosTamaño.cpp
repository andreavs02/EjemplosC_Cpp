//Ejemplo paso de parametro por referencia.

#include <iostream>
#define TAM_MAX 4

using namespace std;
void ImprimirValores(int [], int);

int main()
{
	int valores[TAM_MAX] = {1,2,3,4};
	/*int valore[] = {1,2,3,4};
	int valore[4];
	valore[] = 1;
	valore[] = 2;
	valore[] = 3;
	valore[] = 4;
	*/
	ImprimirValores(valores,TAM_MAX);
	return 0;
}

void ImprimirValores(int a[], TAM_MAX)
{
/*	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(a[0]) << endl;
	cout << sizeof(a) << endl;
	*/
	for (int i = 0; i<TAM_MAX; i++){
		cout << a[i];
	}
	
}
