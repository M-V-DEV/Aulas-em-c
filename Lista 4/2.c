#include <stdio.h>
#include <limits.h>
int main()
{
	int menor= INT_MAX , maior = INT_MIN, qt, num;
	printf("insira os números: \n");
	scanf ("%d", &qt);
	if(qt > 0) {
	while( qt > 0){
	scanf("%d", &num);
	if( num > maior) maior = num;
 	if(num < menor) menor = num;	
	qt--;	
	}
	printf("maior = %d\n", maior);
	printf("menor = %d\n", menor);
	}	
	return 0;
}