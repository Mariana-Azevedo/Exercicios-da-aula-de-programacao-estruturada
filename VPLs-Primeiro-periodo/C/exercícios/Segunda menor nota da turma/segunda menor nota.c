#include <stdio.h>
   int main()
   {
    int n, nota[100], i, x=10, y=10;
    scanf("%d", &n);
    for (i=0; i<n; i++ )
    // vamos supor que os números sejam 1, 2 e 3//
    {
        scanf("%d", &nota[i]);
        if ( nota[i] <= 10 && nota[i] >= 0 )
        {
           if ( nota[i] <= x ) // 1 <= 0 //
           {// os outros valores nunca vão se menor que 1 //
             x = nota[i]; // x = 1 //
           }
        }
    }
    for (i=0; i<n; i++ )
    {
       if ( nota[i] > x && nota[i] <= y) // ele vai ver se a nota vai ser maior que x que é um e menor que 10, todos os números vão ser sempre maiores que x, mas nem sempre vão ser menores que 10, então ele vai atualizando//
        {
            y = nota[i];
        }
    }
   printf("%d", y);
   return 0;
   }