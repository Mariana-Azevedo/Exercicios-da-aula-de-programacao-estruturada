#include <stdio.h>
   int main()
   {
    int x, y, i, soma=0;
    scanf("%d %d", &x, &y);
    if ( x < y)
    {
        for(; x<=y; x++) // não boto x = x + 1, pq se não, não vai contar com o próprio x e tem que botar >= para poder contar com o y pq ele quer a soma  incluindo ambos//
        {
            if (x % 13 != 0)
            {
            soma = soma + x;
            }
        }
    }
    else if ( y < x)
        {
          for(; y<=x; y++)
        {
            if (y % 13 != 0)
            {
            soma = soma + y;
            }
        }
        }
    printf("%d", soma);
    return 0;
   }
   