#include <stdio.h>
   int main()
   {
    int n, x[100], i, menor=10, posicao=0;
    scanf("%d", &n);
    for( i = 0; i<n; i++)
    {
       scanf("%d", &x[i]);
       if ( menor >= x[i]) // vai começar 10>1, então entra no if -- dps 1>2 então não entra no if, só vai entrar se for menor e ai vai substituir o valor
       {
        menor = x[i]; // o valor do menor vai ser tornar o primeiro valor que for menor que 10
        posicao = i; // se ele entrar dentro do if vai falar a posição atual que esse número está dentro do vetor 
       }
    }
    printf("Menor valor: %d\nPosicao: %d", menor, posicao);
    return 0;
   }