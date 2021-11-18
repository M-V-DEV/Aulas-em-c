#include <stdio.h>
#include <math.h>
int main() {
	float an, a1, n , r;
	printf ("Digite o valor do primeiro termo : ");
	scanf ("%f", &a1);
	printf ("Digite o valor da razao : ");
	scanf ("%f", &r); 
	printf ("Digite o valor de numero de termos : ");
	scanf ("%f", &n); 
	an = (a1 + (n - 1) * r); 
	printf("o n termo da P.A. e : %.2f\n",an); 	
return 0;
}
	
	
		

	
	


