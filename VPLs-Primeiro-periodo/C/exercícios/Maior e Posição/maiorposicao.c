#include <stdio.h>
   int main()
   {
    int x[10], i, a, maior=0, posicao=0;
    for( i = 0; i<5; i++ )  
    // se não entrar nesse if vai fazer i++ para partir para o proximo número que está no vetor e conferir que ele é maior //
    {
       scanf("%d", &x[i]);
       if ( x[i] > maior ) // nesse if ele vai ver se o primeiro número adicionado ao vetor é maior que o maior que se inicializa em 0, se for ele vai entrar no if dar x[i] para o  maior //
       {
          maior = x[i];
          posicao = i + 1; // aqui vai passar da posição do vetor para a posição que ele quer na questão//
          // aqui por exemplo a posição vai ser zero e o i vai ser 0 ai eu botei +1 pra que conside que //
       }
    }
    printf("%d %d", maior, posicao);
    return 0;
   }