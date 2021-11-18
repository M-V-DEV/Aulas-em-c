#include <stdio.h>
int main() {
int a, b;
printf("Digite dois números: ");
scanf("%d %d", &a, &b);
int i;
for( i = a; i < (b+1); i++ ) {
printf("%d = %c\t\t", i, i);
if ( i % 5 == 0 ) printf("\n");
}
return 0;
}
