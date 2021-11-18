#include <stdio.h>
int main()
{
 	int b, e, p =1;
	printf ("digite a base: ");
	scanf("%d", &b);
	printf ("digite o expoente: ");
	scanf("%d", &e);	
	for ( int i = 0; i < e; i++)
	p = p*b;
	printf ("%d ^ %d = %d\n", b , e, p);

}