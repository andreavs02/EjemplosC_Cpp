#include<iostream>

using namespace std;


int main (){
	
	
	int matriz[3][3]={{1,2,3},{4,5,6}};

	int suma = 0, sumaTotal=0, fila2, fila3;
//2, 3
	for(int i = 0; i <3; i++){
		for(int j= 0; j<3; j++){
			cout << matriz[i][j] << "\t";		
			suma += matriz[i][j];
		}
		sumaTotal += suma;
		cout << " = " << suma << endl;
		suma = 0;
	}
	cout << "\nSuma total de las filas es = " << sumaTotal << endl;

	cout << endl;

	for(int i = 0; i <1; i++){
		for(int j= 0; j<3; j++){
			cout << matriz[i][j] << "\t";		
			suma += matriz[i][j];
		
		}
				
		cout << " = " << suma << endl;
		
	}
	return 0;
}
