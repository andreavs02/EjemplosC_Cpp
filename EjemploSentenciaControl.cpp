#include <iostream>
#include<conio.h>
using namespace std;

// cout << " , argv[1]=" << argv[1] << " , argv[2]=" << argv[2]<<endl;
//algortimo que sume los 30 primeros numeros, excepto los umltiplos de 5

//t main(int argc, char**argv) {
int main(int argc, char**argv){

	int acumulador = 0 ;
	cout<< "Programa que sume los 30 primeros numeros" << endl;
	for (int i=1; i< 30; i++)
	{
//		/*if(i%5 == 0)
//		{
//			continue;
//		}*/


	
	
			/*if (i%15 == 0)
			{
				break;  	// sume los numeros y si encuentra un multiplo de 15 termine la ejecuciòn 
			}*/
		if (i%15== 0)
		{
			return 15; 	// para que termine la ejecuciòn por completo se utiliza un return
		}
		acumulador +=i;	
	}
    cout << "el valor acumulado es: " << acumulador;

	getch();
	return 0;

}

