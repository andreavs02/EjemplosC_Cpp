#include <iostream>
#include "C:\Users\USRGAM\Desktop\histograma.h"
/*
Jefferson Criollo
*/
using namespace std;
int main(){
	const int tamanioRespuestas=40;
	const int respuestas[tamanioRespuestas] = {6,2,6,4,6,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10};
	for(int i=1;i<=10;i++){
		int cont=0;
		for(int j=0;j<=40;j++){
			if(respuestas[j]==i){
				cont++;
			}
		}
		cout<<i<<"\t"<<cont<<"\t";
		histograma(cont);
		cout<<endl;
	}
	return 0;
}


