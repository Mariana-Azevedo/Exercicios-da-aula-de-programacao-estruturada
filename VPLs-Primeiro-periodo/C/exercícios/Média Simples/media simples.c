#include <stdio.h>
   int main()
   {
       double a, b, MEDIA, y, x;
       scanf("%lf%lf", &a, &b);
       x = a * 3.5;
       y = b * 7.5;
       MEDIA = ( x + y )/11;
       printf("MEDIA = %.5lf\n", MEDIA);
       return 0;
   }