#include <stdio.h>
#include <math.h>
   int main()
   {
       double a, b, c, x, y, R1, R2;
       scanf("%lf %lf %lf", &a, &b, &c);
        x = pow(b, 2) -4 * a * c;
        y = 2 * a;
       if(x < 0 || y == 0)
       {
       printf("Impossivel calcular");
       }
       else
       {
       R1 = (-b + sqrt(x)) / y;
       R2 = (-b - sqrt(x)) / y;
       printf("R1 = %.5lf\nR2 = %.5lf", R1, R2);
       }
       return 0;
   }
   