#include <stdio.h>
#include <math.h>
int main() {
	float an, a1, n , q, sn;
	printf ("Digite o valor do primeiro termo : ");
	scanf ("%f", &a1);
	printf ("Digite o valor do enesimo termo : ");
	scanf ("%f", &q); 
	printf ("Digite o valor de numero de termos : ");
	scanf ("%f", &n); 
	sn = ((a1*(pow(q,n) - 1))/(q-1));
	printf("A Soma do termos da P.G. e : %.2f\n",sn);  	
return 0;
}
	
	
		

	
	


