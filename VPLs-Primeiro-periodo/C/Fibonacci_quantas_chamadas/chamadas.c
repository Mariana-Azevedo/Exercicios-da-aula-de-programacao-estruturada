#include <stdio.h>
   int contador = 0;
   int fibo ( int valor)
   {
    contador ++;
    if ( valor == 0 )
        {
           return 0;
        }
    if ( valor == 1 )
        {
           return 1;
        }
    return fibo( valor - 2 ) + fibo ( valor - 1);
   }
   
   int main ()
   {
    int n, i, valor;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &valor);
        printf("fib(%d) = %d calls = %d\n", valor, contador - 1, fibo(valor)); //diminui pq ele conta a primeira chamada e não é pra ele
        contador = 0;
    }
    return 0;
   }