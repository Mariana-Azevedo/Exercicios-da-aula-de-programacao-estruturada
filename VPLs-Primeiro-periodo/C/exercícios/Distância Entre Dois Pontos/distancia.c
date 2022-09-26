#include <stdio.h>
#include <math.h> 
   int main()
   {
       double x1, x2, y1, y2, A, B, C;
       scanf("%lf %lf", &x1, &y1);
       scanf("%lf %lf", &x2, &y2);
       B = (x2 - x1)*(x2 - x1); 
       C = (y2 - y1)*(y2 - y1);
       A = sqrt( B + C ); 
       printf("%.4lf", A);
       return 0;
   }