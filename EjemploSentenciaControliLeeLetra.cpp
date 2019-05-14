#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
/*   #include<ctype.h>  para transformar una letra de minuscula a mayuscula 
aumentamos una libreria que es*/
#include<iostream>
#include<iomanip> // utilizamos esta libreria para incluir 'setw'
// para limpiar la pantalla system("cls");

/*	int main()
	{
		char letra = '\0'; 
		while(toupper (letra) != 'A') 
		
		{
			printf ("\nIngrese la letra A:");
			scanf("%c", &letra);   
			system("cls");
		}	
	
	return  0;
	}*/
	
/*		
	int main()
	{
		char letra = '\0'; 
		
		
		do
		{
			printf ("\nIngrese la letra A:");
			scanf("%c", &letra); 
			system("cls");
			
		}while(toupper (letra) != 'A') 
		
		
		return 0;	
	}*/
	
/*	int main()
	{
		char letra = '\0';
		
		for(int i = letra; toupper (letra) != 'A';)
		{
			printf ("\nIngrese la letra A:");
			scanf("%c", &letra);   
			system("cls");
		}
		
		
		return 0;
	}
	*/

using namespace std;

int main() 
{	
	int a;
    int i;
    cout << "Ingrese un numero multiplicar" << endl;
    cin >> a;

    for (i=0; i<=12; i++)
	{
        cout << setw(2) << a << setw(3)<< " x " <<stew(3)<< i << " = " << setw(3)<< a*i << endl;
    }

	double valor =12.45;
	cout << endl;
	cout << showpoint<< setprecision(10)<< valor;

    return 0;

}
