#include<iostream>
#include<iostream>

using namespace std;

int Fibonacci(int n);
void FibonacciIterativo(int n);

int main()
{
	int n, resultado;	

	cout << "Calculadora de la serie Fibonacci" << endl;
	cout << "Ingrese un valor :";
	cin >> n;
	//resultado = Fibonacci(n);
	cout << "el fibonacci (recursivo) de " << n << "detallado es";
	for (int i = 0; i < n ; i++)
	cout  << Fibonacci(i) << " ";
	cout << endl;
	cout << "El Fibonacci(iterativo) de " << n << "detallado es:";
	FibonacciIterativo(n);
	return 0;
}
int Fibonacci(int n)
{
	if(n < 2)
	return n;
	
	else 
	return Fibonacci (n -1) + Fibonacci(n-2);
}

void FibonacciIterativo (int n)
{
	int i;
	long actual, ant1, ant2;
	ant1 = ant2 = 1;
	cout << "o 1 1";
	for(i=1;i<n-2;i++)
	{
		actual = ant1 + ant2;
		cout << actual << " ";
		ant2 = ant1;
		ant1 = actual;
	}
}
