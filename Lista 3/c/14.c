#include <stdio.h>
int main (){
    int a, b, c, menor, maior;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    /* segunda versão
        variáveis menor e maior são inicializadas com o primeiro valor
    */
    menor = a;
    maior = a;

    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;

    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;

    printf("Segunda versao\tMenor: %d\tMaior: %d\n", menor, maior);

}
 // mv
