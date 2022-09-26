#include <stdio.h>
int soma ( int t, int vetor[], int n, int resultado){
    if ( n >= t)
    {
        return resultado;
    }
    return soma( t, vetor, n + 1, resultado + vetor[n]);
}
int main()
{
    int n, t, vetor[100], j, i;
    scanf("%d", &t);
    for ( j=0; j<t; j++ )
    {
       scanf("%d", &n);
    for( i=0; i<n; i++)
    {
       scanf("%d", &vetor[i]);
    }
    printf("%d\n", soma(n, vetor, 0, 0));

  }
  return 0;
}