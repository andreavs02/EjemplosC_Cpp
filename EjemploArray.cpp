#include<iostream>

using namespace std;


int main (){
	
	
	int matriz[3][3]={{1,2,3},{4,5,6}};

	int suma = 0, fila2, fila3;
//2
/*	for(int i = 0; i <3; i++){
		for(int j= 0; j<3; j++){
		cout << matriz[i][j] << "\t";		
	
		}
		cout << endl;
	
	}
//3.*/
 	for(int i = 0; i <3; i++){
		for(int j= 0; j<3; j++){
			suma += matriz[i][j];
		}
		cout << "suma de fila " << i << " es " << suma <<  endl;
		suma = 0;
	}
	suma = 0;
/*	for(int i = 0; i <3; i++){
		for(int j= 0; j<3; j++){
			suma += matriz[i][j];
		}
		//suma = 0;
	}
	cout << "suma " << suma <<  endl;

/*	suma += matriz{1}[3];
	cout << suma;*/
cout << endl;
	

	
	return 0;
}
