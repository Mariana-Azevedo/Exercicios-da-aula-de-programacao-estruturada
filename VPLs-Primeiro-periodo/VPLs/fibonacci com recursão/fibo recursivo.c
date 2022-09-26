#include <stdio.h>
   int fibo ( int n)
   {
    if ( n == 0 )
        {
        return 0;
        }
    if ( n == 1 )
        {
        return 1;
        }
    return fibo( n - 2 ) + fibo ( n - 1);
   }
   // 0 1 1 2 3 5 8 13
   int main ()
   {
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
   }