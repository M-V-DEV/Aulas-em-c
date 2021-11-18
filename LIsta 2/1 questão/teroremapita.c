#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
	float h, b, c, pot, poth,potb,potc,pothf;	
	printf ("Digite o valor do cateto b: ");
	scanf ("%f", &b);
	printf ("Digite o valor do cateto c: ");
	scanf ("%f", &c);	
	potb = pow(b,2);
	potc = pow(c,2);	
	poth = potb + potc;
	pothf = sqrt(poth);
	//pothf = pow(poth,2);
	printf ("O valor da hipotenusa = %.2f\n", pothf );
	return 0; 
}

 

	


