#include <stdio.h>
int main() {
int a, b;
printf("Digite dois números: ");
scanf("%d %d", &a, &b);
int i;
if ((a < b) && (a <= 0 || a <= 255) && (b <=0 || b <= 255) ){
for( i = a; i < (b+1); i++ ) {
printf("%d = %c\t\t", i, i);
if ( i % 5 == 0 ) printf("\n");
}
}else {
printf("escreva as entradas certas\n");

}

return 0;
}

// meio completo