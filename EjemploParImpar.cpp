#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Ingrese un valor";
	cin>>a;
	if (a%2==0)
	{
		cout<<"El numero es par";
	}
	else
	{
		cout<<"El numero es impar";
	}
	cout<<endl;
	//expresion_1? expresion_2: expresion3;
	cout<<"el valor ingresado es"<<(a%2==0)?"par":"impar";
	cout<<endl;
	cout<<(a%2==0)?"el valor es par":"el valor es impar";
	cout<<endl;
	
	(a%2==0)?cout<<"el valor es par":cout<<"el valor es impar";
	cout<<endl;

	return 0;

}

