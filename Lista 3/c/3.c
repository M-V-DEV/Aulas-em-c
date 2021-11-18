#include <stdio.h>
int main(){
    int valorA, valorB;
    printf("Digite o primeiro numero: ");
    scanf("%d", &valorA);
    printf("Digite o segundo numero: ");
    scanf("%d", &valorB);
    if(valorA>valorB){
        printf("%d é maior", valorA);
    }else{
        printf("%d é maior", valorB);
    }
    return 0;
}//mv
