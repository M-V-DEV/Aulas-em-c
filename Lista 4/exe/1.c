#include <stdio.h>
int main()
{
 	float lado, area, perimetro;	
	do {
	printf("Informe o valor dos lados:");
	scanf("%f", &lado);
	if (lado <= 0){
	 printf ("Entrada não permitida! \n");   
	    }
	} while (lado <= 0); 
	perimetro = 4 * lado;
	area = lado * lado;
	printf("Área = %.5f\n", area);
	printf("Perimetro = %.5f\n", perimetro);	
	return 0;
}