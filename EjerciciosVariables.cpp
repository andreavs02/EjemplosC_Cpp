// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	SIN_TIPO cero;
	SIN_TIPO dato;
	int dato1;
	bool dato10;
	string dato2;
	string dato3;
	float dato4;
	float dato5;
	string dato6[4];
	string dato7;
	bool dato8;
	bool dato9;
	// definir dato4 como entero;
	dato1 = 2;
	dato2 = "2";
	dato3 = "2";
	dato4 = -6;
	dato5 = 7.14;
	dato6[-1] = "3";
	dato6[0] = "0";
	dato6[1] = "4";
	dato6[2] = "7";
	dato7 = "2015";
	dato8 = true;
	dato9 = false;
	dato10 = 0;
	cout << dato1 << endl;
	cout << dato2 << endl;
	cout << dato3 << endl;
	cout << dato4 << endl;
	cout << dato5 << endl;
	cout << dato6[-1] << dato6[0] << dato6[1] << dato6[2] << endl;
	cout << dato << endl;
	cout << dato8 << endl;
	cout << dato << 9 << endl;
	cout << dato << 10 << endl;
	return 0;
}

