#include <stdio.h>
#include <math.h>
int main() {
	float vi,v,s,a,vf, rq;	
	printf ("Digite o valor da velocidade inicial: ");
	scanf ("%f", &vi);
	printf ("Digite o valor da distancia percorrida: ");
	scanf ("%f", &s);
	printf ("Digite o valor da aceleracao: ");
	scanf ("%f", &a);
	vf= vi * vi + 2*a*s;
	rq = sqrt(vf);
	printf ("A velocidade final e = %.2f\n", rq);
	return 0;
}
