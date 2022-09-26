#include <stdio.h>
  int main()
  {
    int nota[50];
    int i, menor=10, n;
    scanf("%d", &n);
    for ( i = 0; i<n; i++)
    {
        
        scanf("%d", &nota[i]);
        if ( nota[i] >= 0 && nota[i]<=10)
        {

        if ( nota[i] <= menor)
        {
            menor = nota[i];
        }
        }
    }
     printf("%d", menor);
    
    return 0;
  }