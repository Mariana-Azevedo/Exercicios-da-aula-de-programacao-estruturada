#include <stdio.h>
   int main()
   {
       double pi = 3.14159;
       double raio;
       double area;
       scanf("%lf", &raio);
       area = pi * ( raio * raio);
       printf("A = %.4lf", area);
       return 0;
   }