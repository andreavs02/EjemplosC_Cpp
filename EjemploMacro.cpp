#include<stdio.h>
#define fesp(x)(x*x + 2*x-1)

int main()
{
	float X;
	for(X = 0.0; X <= 6.5; X+=0.3)
	printf("\t f(%.1f) = %6.2f", X, fesp(X));
}
