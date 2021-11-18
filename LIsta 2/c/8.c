#include <stdio.h>
#include <math.h>
int main()
{
  float catA, catB, hipotenusa;
  printf("Digite o valor de um cateto: ");
  scanf("%f", &catA);
  printf("Digite o valor do outro cateto: ");
  scanf("%f", &catB);
  hipotenusa = sqrt( pow(catA, 2) + pow(catB, 2) );
  printf("\nA hipotenusa: %.2f\n\n", hipotenusa);
  getch();
  return 0;
}