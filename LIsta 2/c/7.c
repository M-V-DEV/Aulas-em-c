#include<stdio.h>
int main()
{
 float salario, quantidadeAgua;
 printf("Digite seu salario:");
 scanf("%f", &salario); 
 printf("Digite o consumo de agua:");
 scanf("%f", &quantidadeAgua);

 float valorLitro = 0.02 * salario  / 1000;
 float valorAgua = quantidadeAgua + valorLitro ;
 float valorDesc = valorAgua - (valorAgua*0.15) ;

 printf("Valor do Consumo: %.2f\n", valorAgua);
 printf("Valor do com desconto: %.2f\n", valorDesc);
 return 0;
}