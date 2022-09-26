#include <stdio.h>
   int main()
   {
    int n, i, j, x;
    int vetor[100];
    scanf("%d", &n);
    for( i = 0; i<n; i++)
    {
        scanf("%d", &vetor[i]);
    }
     x = vetor[n-1]; // estou pegando o último valor
    for( j = n - 1; j >=0; j-- )
    {
        vetor[j] = vetor[ j - 1];
    }
     vetor[0] = x; // estou falando que o número que era o último agr vai ser o primeiro
     for( i = 0; i<n; i++)
     {
         printf(" %d ", vetor[i]);
     }
     return 0;
   }