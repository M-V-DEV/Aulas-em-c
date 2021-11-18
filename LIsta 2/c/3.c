#include <stdio.h>
int main(void){
 int a, b, aux;
 a = 1;
 b = 2; 
 aux = a;
 a = b;
 b = aux;
 printf("a = %d\n", a);
 printf("b = %d\n", b);
 return 0;
}