#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
	float h, b, c, potb,pothf;	
	printf ("Digite o valor do cateto b: ");
	scanf ("%f", &b);
	printf ("Digite o valor do cateto c: ");
	scanf ("%f", &c);	
	potb = pow(b,2) + pow(c,2);
	pothf = sqrt(potb);
	printf ("O valor da hipotenusa = %.2f\n", pothf );
	return 0; 
}

 

	


