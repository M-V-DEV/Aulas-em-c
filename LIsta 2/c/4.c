#include <stdio.h>
#include <math.h>
#define  PI  3.14159
int main()
{
 float  d;
 printf("Entre com o valor do diametro: ");
 scanf("%f", &d);

 float Raio = d/2; 
 float Area  = PI * pow(Raio, 2);
 float perim = 2*PI*Raio; 

 printf("diametro eh %2f\n", d);
 printf("o raio eh %2f\n", Raio);
 printf("e a area eh %2f\n", Area);
 printf("o perimetro eh %2f\n", perim);
 return 0; 
}