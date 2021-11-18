#include <stdio.h>
#include <math.h>
#define  PI  3.14159
int main()
{
 int a,b,c;
 printf("digite 3 numeros: ");
 scanf ("%d%d%d", &a, &b, &c);
 float m = (a+b+c) / 3;
 int s = a+b+c;
 int p = a * b *c;
 printf("media = %2f\n", m);
 printf("somatorio= %d\n", s);
 printf("produtorio= %d\n", p);
 return 0;
}

