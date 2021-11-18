#include <stdio.h>
int main(){
char c;
printf("digite um caracter: ");
scanf("%c", &c);
if (c>='0' && c<='9')
	printf("digito\n");
     else if (c>= 'A' && c<= 'Z')
	printf ("Letra maiuscula\n");	
     else if (c>= 'a' && c<= 'z')
	printf ("Letra minuscula\n");
     else
	printf ("qualquer outro simbolo\n");
return 0;
}//mv
