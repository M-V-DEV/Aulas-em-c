#include <stdio.h>
#include <math.h>
int main() {
	float an, a1, n , q;
	printf ("Digite o valor do primeiro termo : ");
	scanf ("%f", &a1);
	printf ("Digite o valor da razao : ");
	scanf ("%f", &q); 
	printf ("Digite o valor de numero de termos : ");
	scanf ("%f", &n); 
	an = (a1 * pow(q,n-1));
	printf("o n termo da P.G. e : %.2f\n",an); 	
return 0;
}
	
	
		

	
	


