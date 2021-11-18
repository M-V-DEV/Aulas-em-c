#include <stdio.h>
int main() {
int d, m ,a;
printf("Digite uma data: ");
scanf("%d %d %d", &d, &m, &a);
	printf("dia= %d mes= %d ano = %d.\n", d, m, a);
	switch(m){
	case 1:
	printf("dia = %d mes = janeiro ano = %d.\n", d ,a);
	break;
	case 2:
	printf("dia = %d mes = fevereiro ano = %d.\n", d ,a);
	break;
	case 3:
	printf("dia = %d mes = marco ano = %d.\n", d ,a);
	break;
	case 4:
	printf("dia = %d mes = abril ano = %d.\n", d ,a);
	break;
	case 5:
	printf("dia = %d mes = maio ano = %d.\n", d ,a);
	break;
	case 6:
	printf("dia = %d mes = junho ano = %d.\n", d ,a);
	break;
	case 7:
	printf("dia = %d mes = julho ano = %d.\n", d ,a);
	break;
	case 8:
	printf("dia = %d mes = agosto ano = %d.\n", d ,a);
	break;
	case 9:
	printf("dia = %d mes = setembro ano = %d.\n", d ,a);
	break;											
	case 10:
	printf("dia = %d mes = outubro ano = %d.\n", d ,a);
	break;
	case 11:
	printf("dia = %d mes = novembro ano = %d.\n", d ,a);
	case 12:
	printf("dia = %d mes = dezembro ano = %d.\n", d ,a);
	break;
	default:
	printf("Erro! Operador incorreto!");
	}
	return 0; 	
}
      
}
// mv
