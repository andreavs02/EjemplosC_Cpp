#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

/*	int main ()
	{
	for (int i = 10; i>= 1; i--){
		for(int j= 1; j<= 10; j++){
			if(i>=j){
				cout <<" ";
			} else {
				cout << "#";
			}
		}
		for (int k = 1; k <= 10; k++){
			cout << "#";
		}
		for (int l = 1;l <= i; l++){
			cout << "#";
		}
	cout << endl;
	}
	return 0;
	}*/
/*int Factorial(int n);	

	int main ()
	{
		int Combinar, numero = 10, r = 4;
		
		Combinar = Factorial(numero) / ((Factorial(numero-r)*Factorial(r)));
		
		cout << "Se pueden formar: " << Combinar << " subcomites en total" << endl;
		
		
		return 0;
	}
	
	int Factorial(int n){
		
		if (n == 0){
			n = 1;
		
		} else {
			n = n * Factorial(n - 1);
		}
	return n;

	}
	*/
	int main ()
	{
		int numero, num;
		srand(time(NULL));
	
		numero = 1 + rand()%(100);	
		cout << "Ingrese un numero de dos digitos:"<< endl;
		cin >> num;
		do{
		if(num % numero == 0 ){

		cout << "El premio es de 1000" << numero;
		} else {
			if(num%numero == (numero-10)){
				cout << "s";
			}
		}
	} while (numero != num);
	
	
	
	
	
	return 0;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
