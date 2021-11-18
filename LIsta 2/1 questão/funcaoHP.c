#include <stdio.h>
int main() {
	float s,si,v,t,a;
	printf ("Digite o valor da distancia inicial: ");
	scanf ("%f", &si);
	printf ("Digite o valor da velocidade: ");
	scanf ("%f", &v);
	printf ("Digite o valor do tempo: ");
	scanf ("%f", &t);
	printf ("Digite o valor da aceleracao: ");
	scanf ("%f", &a);
	s = si + v*t + 1/2*a*t*t;
	printf ("A distancia final e = %f\n", s);
	return 0;
}