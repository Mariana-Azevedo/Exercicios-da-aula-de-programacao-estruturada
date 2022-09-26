#include <stdio.h>
   int main()
   {
       int x, y, a, soma = 0, b;
       scanf("%d%d", &x, &y);
       if (x <= y) //coloquei isso pra ver se x é maior que y e ir somando de x para y//
       {
       for(a = x + 1; a<y; a++) // o primeiro é um comando que roda só no início, o segundo tipo um enquanto e o terceiro tipo um bloco de ação//
       { // coloquei x + 1 para que o número cresça de x até y //
        
          if ( a % 2 == 0)
          {
              soma = soma;
          }
              
           else if ( a % 2 !=0 )
           {
               soma = soma + a;
           }
       }
       }
       
       else 
       {
        for(b = y + 1; b<x; b++)
       {
          if ( b % 2 == 0)
          {
              soma = soma;
          }
                  
           else if ( b % 2 !=0 )
           {
               soma = soma + b;
           }
       }
       }
       printf("%d", soma);
       return 0;
   }