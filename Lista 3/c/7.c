#include <stdlib.h>
#include <stdio.h>
int main(){
	float a,b,c, d, e, f, x, y;
	printf("digite 6 coeficientes:");
	scanf("%f%f%f%f%f%f", &a,&b,&c,&d,&e,&f);
	float den = a*e - b*d;
	if ( den != 0) {
	x = (c*e - b*f)/den;
	y = (a*f - c*d)/den;
	printf("den = %f\n", den);
	printf(" x = %f\n", x);
	printf(" y = %f\n", y);
	} else
	printf ("Sem solução \n");
	return 0;
} // mv
