#include <stdio.h>
   int main()
   {
    int n, i, b=0;
    scanf("%d", &n);
    for ( i = 2; i < n; i++)
    {
        if ( n % i == 0) 
        {
          b ++;
        }
    }
     if ( b == 0)
        {
            printf("primo");
        }
        if ( b != 0)
        {
            printf("não é primo");
        }

    return 0;
   }