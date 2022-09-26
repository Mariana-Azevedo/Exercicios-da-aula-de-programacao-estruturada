#include <stdio.h>
   int main()
   {
   char vetor[200];
   int i=0, A, Z;
   fgets( vetor, 200, stdin);
    if( vetor[i] >= 'a' && vetor[i] <= 'z')
    {
      vetor[0]= vetor[0] - 'a' + 'A'; //vetor[0], para pegar só a primeira letra
    }
    printf("%s", vetor); // aqui eu tô imprimindo o vetor inteiro e não só em uma posição, como no vetor[i]
   
   return 0;
   }