//Realice un programa y declare 1 variables de tipo: constante, externa, global, variable local y de bloque. (Total 5 variables)
#include <iostream>
#include <stdio.h> 
#include<math.h>
#include<string.h>
//#define CONST int a = 5

using namespace std;

/*const int b = 2;

int main()
{
	const char c = '*';
	
	for(int a=5; a>=0;a--){
		for(int k;k>=0;k-- ){
			cout << c;
			}
		cout << endl;	
		}
		return 0;
	}
*/
//
//int main(void) 
//
//{ 
//	float maximo = 0,minimo = 999;
//    double matriz[3][3] = {2.9,5.6,7.98,3.7,1.5,4.2,8.2,9.8,6.45}; 
//    
//    for(int i=0;i<3;i++){
//    	for(int j=0;j<3;j++){
//
//			if((matriz[i][j])> maximo){
//				maximo = matriz[i][j];
//				
//			}
//
//		}
//	}
//	cout << "Maximo Valor = " << maximo << endl;
//
//
//return 0;
//} 
/*int main()
{
	char frase[40];
	int conteo=0;
	
	cout << "Ingrese una frase: ";
	cin.getline(frase,40);
	
	for(int i=0;i<40;i++){
		if(((frase[i])>= 'A') && ((frase[i])<= 'Z') ){
			conteo ++;
		}
	}
	cout << "El numero total de letras mayusculas es: "<< conteo << endl;	
	conteo =0;
	for(int i=0;i<40;i++){
		if(((frase[i])>= 'a') && ((frase[i])<= 'z') ){
			conteo ++;
		}
	}
	cout << "El numero total de letras minusculas es: "<< conteo << endl;

	return 0;
}*/


struct Cliente{
	double codigo;
	char nombre[20];
	float saldo;
}clientes[4];

int main()
{
	Cliente clientes[4];
	
	for(int i=0;i<4;i++){
		
		cout << "Ingrese su codigo: ";
		cin >> clientes[i].codigo;
		cin.sync();
		cout << "Ingrese su nombre: ";
		cin.getline(clientes[i].nombre,20,'\n');
		cin.sync();
		cout << "Ingrese su saldo: ";
		cin >> clientes[i].saldo;
		cin.sync();
		
		if((clientes[i].saldo)<10.00){
			 clientes[i].saldo - 1;
		} else{
			if(((clientes[i].saldo)>=10) && (clientes[i].saldo)<100) {
				 clientes[i].saldo*2;
			}else{
				if((clientes[i].saldo)>100){
					pow(clientes[i].saldo,3);
				}
			}
		}
	}
	
	for (int i=0;i<4;i++){
		cout << "---Datos de los Clientes---" << endl;
		cout << "Codigo: " << clientes[i].codigo << endl;
		cout << "Nombre: " << clientes[i].nombre << endl;
		cout << "Saldo: " << clientes[i].saldo << endl;
	}
	
	return 0;
}



























