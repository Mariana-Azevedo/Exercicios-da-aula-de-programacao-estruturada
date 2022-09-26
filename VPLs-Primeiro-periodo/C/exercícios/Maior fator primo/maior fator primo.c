#include <stdio.h>
#include <math.h>
   int main()
   {
      int y, b, n, a;
      long long int x, i, w=0;
      x = 600851475143;
      for( i = 2; i <= sqrt(x); i++)
      { 
        
        if ( x % i == 0) // pegar os divisores de x
        { 
           b=0;
           for ( a = 2; a <= i / 2; a++)
           {
            if ( i % a == 0) 
                {
                  b ++;
                }
           }
            if( b == 0)
            {
             w = i;
            }
         }
     }
     printf ("%lld\n", w);
     return 0;
   }