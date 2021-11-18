#include <stdio.h>
#include <math.h>
int main() {
	float tr,f,d,x,cose;	
	printf ("Digite o valor da forca: ");
	scanf ("%f", &f);
	printf ("Digite o valor da deslocamento: ");
	scanf ("%f", &d);
	printf ("Digite o valor do  angulo: ");
	scanf ("%f", &x);
	cose = cos(x);
	tr = f * d * cose;
	printf ("O trabalho da forca e = %.2f\n", tr );
	return 0;
}

