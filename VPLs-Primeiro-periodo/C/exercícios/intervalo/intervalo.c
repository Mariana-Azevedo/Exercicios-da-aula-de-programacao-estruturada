#include <stdio.h>
   int main()
      {
          double x;
          scanf("%lf", &x);
          
          if ( x >= 0 && x <= 25.0000)
          {
              printf("Intervalo [0,25]");
          }
          else if ( x > 25.0000 && x <= 50.0000)
          {
              printf("Intervalo [25,50]");
          }
          else if ( x > 50.0000 && x <= 75.0000)
          {
              printf("Intervalo [50,75]");
          }
          else if ( x > 75.0000 && x <= 100.0000)
          {
              printf("Intervalo [75,100]");
          }
          else if ( x < 0 || x > 100.0000 )
          {
              printf("Fora de intervalo");
          }
          return 0;
      }