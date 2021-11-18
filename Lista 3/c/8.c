#include <stdlib.h>
#include <stdio.h>
int main(){
    int aa, ac;
    printf("Digite o ano de casamento: ");
    scanf("%d", &ac);
    printf("Digite o atual: ");
    scanf("%d", &aa);
    int t = aa - ac;
    switch(t) {
    	case 25:
	printf("Bodas de Prata\n");
	break;
	case 50:
	printf("Bodas de ouro\n");
	break;
	case 75:
	printf("Bodas de diamante\n");
	break;	
	default:
	printf("%d anos de casados\n", t);
	}
  return 0;
}
 // mv
