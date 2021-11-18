#include <stdio.h>
#include <math.h>
int main() {
	float f,c;	
	printf ("Digite o valor da temperatura em Celsius: ");
	scanf ("%f", &c);
	f = 1.8 * c + 32 ;
	printf ("A temperatura em Fahrenheit e = %.2f\n", f );
	return 0;
}


