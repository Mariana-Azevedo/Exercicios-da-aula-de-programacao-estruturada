#include <stdio.h>
   int main()
   {
    int x, soma=0;
    scanf("%d", &x);
    for( x = x - 1; x > 0; x--) // usei x = x - 1, pq ele não que usar o x nessa contagem e usei x-- para ir de x até 0//
    {
        if ( x % 3 == 0 || x % 5 == 0)
        {
            soma= soma + x;
        }
    }
    printf("%d", soma);
    return 0;
   }