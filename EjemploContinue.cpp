
// haga un algoritmo que sume los 30 primeros numeros sin contar los multiplos de 5

#include <iostream>
using namespace std;
int main()
{
	int i=0;
	int acum=0; //acumulador q vaya acumulando
	// me presente la suma del total de los 5 primeros numeros
	for (int i = 0; i<30; i++)
	
	{
		//que se salte los numeros multiplos de 5
		if(i%5==0)
		{
			continue; //saltarse algo de lo que esta programado
		}
		acum +=i; //acum=acum + i++
	}
	cout << "la suma es:" << acum;
}



