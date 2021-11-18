#include "stdio.h"
int main (){
  	int d,m,a,bi, valido = 1;
	printf("Digite uma data: ");
	scanf("%d/%d/%d", &d,&m,&a);
 	bi = (a%4==0 && (a%100!=0 || a%400==0));
	if ((d<=0 || d>31 || m<=0 || m>12 || a<=0) ||
            (m==2 && d>28 && !bi) ||
	    (m==2 && d>29 && bi)  ||
	    (d==31 && (m==4  || m==6  || m==9 || m==11)))
        valido = 0;
	if(valido) {
	        printf("data valido\n");
	if(bi)
		printf("bissexto\n");
 	} else {
		printf("data invalida\n");
	}
	 printf("dia= %d mes= %d ano= %d\n", d, m, a);
	 return 0;
        
}

 // mv
