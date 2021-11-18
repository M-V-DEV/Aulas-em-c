#include <stdio.h>
int main() {
int n1;
printf("Digite a sua idade: ");
scanf("%d", &n1);
if ( (n1 < 18) || (n1 > 67))
printf("n pode doar sangue");
else
printf("pode doar sangue");
return 0;
}//mv
