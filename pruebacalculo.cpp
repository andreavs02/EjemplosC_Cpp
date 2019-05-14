
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	int a;
	float i;
	cout << "ingrese un numero" << endl;
	cin >> a;
	for (i=1;i<=30;i+=2) {
		cout << a << "   " << pow(a,3) << "  " << sqrtf(a) << endl;
	}
	return 0;
}

