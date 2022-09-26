/*#include <stdio.h>
   int main()
{
  int vetor[100], n, i, contador=0, j;
  scanf("%d", &n);
  while (contador < 2)
    {
    for( i=0; i<n; i++)
        {
        scanf("%d", &vetor[i]);
        }
    for (j=0; j<n; j++)
        {
        if ( vetor[i] == vetor[i+1])
            {
                contador++;
            }
            contador=0;
            printf("%d", vetor[i]);
        }
    }
    return 0;
 }*/
//if 

#include <stdio.h>

int main()
{
  int vetor[100], n, i, contador=0, j, k=0, comparar[100];
  scanf("%d", &n);

  for( i=0; i<n; i++)
  {
    //scanf("%d", &vetor[i]);
    scanf("%d", &contador);
    // quando i = 0 -> verificar nenhum elemento, pois o vetor ta vazio
    // quando i = 1 -> verificar o elemento 0, pois o vetor possui 1 elemento
    // quando i = 2 -> verificar os elementos 0 e 1, pois o vetor possui 2 elementos
    // variavel valor 1 e 0
    k = 0;
    for( j=0; j < i; j++) 
    {
      if (contador == vetor[j])
      {
        k = 1;
        break;
      }
    }
    /*for ( j=0; j<n; j++)
    {
      if (comparar[j] == vetor[i])
      {
      vetor[i] = vetor[i+1];
      }
    }*/
    if( k == 0)
    {
      vetor[i] = contador;
    }
    else
    {
      i--;
    }
  }
  for( j=0; j<n; j++)
  {
    printf("%d ", vetor[j]);
  }
  return 0;
}