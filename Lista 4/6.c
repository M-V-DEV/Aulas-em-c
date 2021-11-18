#include <stdio.h>
int main()
{
	int m, n;
	printf("Insira a quantidade de voltas: ");
	scanf("%d", &m);
	printf("Insira a quantidade de abdominais: ");
	scanf("%d", &n);
	for (int i = 1; i <= m; i++) {
	printf("%d volta", i);
	for (int j = 1; j <=n; j++)
	printf ("\t%d abdominal \n", j);
	}
}