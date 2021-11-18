#include<stdio.h>
int main() {
 float vl, vs, temp;
 printf("Digite o tempo em segundos:");
 scanf("%f", &temp); 
 vl = temp * 300,000;
 vs = temp *  0.343; 
 printf(" A ditancia da luz em km eh: %.5f\n ", vl );
 printf(" A distancia do som em km eh: %.5f\n ", vs );
 return 0;
}