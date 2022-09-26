#include <stdio.h>
   int main()
   {
   char vetor[200];
   int i, A, Z;
   fgets( vetor, 200, stdin);
   for(i=0; vetor[i] != '\0'; i++)
   {
    if( vetor[i] >= 'A' && vetor[i] <= 'Z')// Preciso botar '' para pegar o valor na tabela
    {
      vetor[i]= vetor[i] - 'A' + 'a';
    }
    printf("%c", vetor[i]);
   }
   return 0;
   }



   //vetor[i] = vetor[i] + 20;