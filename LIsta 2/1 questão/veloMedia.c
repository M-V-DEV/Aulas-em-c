#include <stdio.h>
int main() {
	float v,d,t;
	printf ("Digite o valor da distancia: ");
	scanf ("%f", &d);
	printf ("Digite o valor do tempo: ");
	scanf ("%f", &t);
	v = (d/t);
	printf ("A velocidade media e = %f\n", v);
	return 0;
}