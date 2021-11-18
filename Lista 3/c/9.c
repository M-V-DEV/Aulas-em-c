#include <stdio.h>
int main() {
float nota;
printf("Digite a sua nota: ");
scanf("%f", &nota);
	if (nota >= 9.0)
	printf("PARABENS PELA NOTA A");
	else if (nota >= 7.0)
	printf("PARABENS PELA NOTA B");
	else if (nota >= 5.0)
	printf("PARABENS PELA NOTA C");
	else if (nota >= 2.5)
	printf("PARABENS PELA NOTA D");
	else if (nota < 2.5)
	printf("PARABENS PELA NOTA E");
	return 0; 	
}
 // mv
