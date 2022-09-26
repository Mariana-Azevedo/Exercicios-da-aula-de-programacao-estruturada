#include <stdio.h>
  int main()
  {
    int nota[100];
    int i;
    float n, soma=0;
    float media;
    scanf("%f", &n);
    for ( i = 0; i<n; i++)
    {
      scanf("%d", &nota[i]);
      if ( nota[i] >= 0 && nota[i] <= 10)
      {
        soma = soma + nota[i];
      }
      else 
      {
        n = n - 1;
        i = i - 1;
      }
    }
    media = soma / n;
    printf("%.1f", media);
    return 0;
  }