//Ejemplo de validacion cedula con arreglos bidimensionales(matriz o tabla).

#include<iostream>

using namespace std;

int main (){
	string cedula = "1004803472";
//	int matriz[3][9] = {{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18},{19,20,21,22,23,24,25,26,27}};
	int matriz[3][9] = {0};
	int filas = 3, columnas = 9, sumaTotal = 0;
	
	for(int k=0 ; k<columnas ; k++ ){
		if(k%2 == 0){
			matriz[0][k] = 2;
		} else {
			matriz[0][k] = 1;
			matriz[1][k] = cedula [k] - '0';
			matriz[2][k]= matriz[0][k] * matriz[1][k];
			if (matriz[2][k] >= 10)
			matriz[2][k] -= 9;
		//	matriz[2][k] = ( matriz[0][k] * matriz[1][k]>10?matriz[0][k] * matriz[1][k] -9; matriz[0][k] * matriz[1][k] );  
			sumaTotal += matriz[2][k]; 
		}
	
	}
	
	for (int i=0; i<filas; i++){
		
		for (int j=0; j<columnas ; j++){
			
			//matriz[i][j]=0;
			cout << matriz[i][j] << "\t";
		
		}
		
		cout << endl;
	}
		cout << "La suma Total es: " << sumaTotal << endl;
		//int digitoverificador = sumaTotal + 9 %10;
		int digitoverificador = 10 -sumaTotal % 10;
		if(digitoverificador == 10){
			digitoverificador = 0;
		}
		cout << "El digito verificador  calculado es: " << digitoverificador << endl;
		if(digitoverificador == (int)cedula[9]- 48){
			cout << "Cedula Valida !!" << endl;
		} else{
			cout << "Cedula Invalida  !!" << endl;
		}
		
		
	return 0;
}
