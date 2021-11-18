#include <stdio.h>
int main () {
int a, b, c;
printf("Digite tres valores: ");
scanf("%d%d%d", &a,&b,&c );
if (a + b > c && b + c > a && a + c > b) {
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
return 0;
}
 // mv
