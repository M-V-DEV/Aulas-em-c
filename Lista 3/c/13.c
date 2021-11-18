#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
    
{
         float a, b, c, d, x1, x2;    
         printf ("Entre com o valor de A\n");        
         scanf ("%f", &a);        
         printf ("Entre com o valor de B\n");
         scanf ("%f", &b);
         printf ("Entre com o valor de C\n");
         scanf ("%f", &c);
         d = (b * b - 4. * a * c);
         if (d < 0)
         {
               printf("O valor de delta menor que zero");
         }       
         else       
         {           
             x1 = (-b +sqrt(d))/(2. * a);
             x2 = (-b -sqrt(d))/(2. * a);
             printf("O valor de delta eh", d);
             printf ("O valor de X1: %f \nO valor de X2: %f", x1, x2);
         }
     return 0;
        
} // mv
