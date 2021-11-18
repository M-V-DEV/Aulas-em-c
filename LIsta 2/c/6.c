#include<stdio.h>
int main()
{
 float salario;
 printf("Digite seu salario:");
 scanf("%f", &salario); 
 float aumento = salario * 0.153;
 float novoSalario = salario + aumento;

 printf("Novo salario: %.2f\n", novoSalario);
 return 0;
}