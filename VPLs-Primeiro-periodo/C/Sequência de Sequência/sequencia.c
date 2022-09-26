#include <stdio.h>
int somatorio( int x );

   int main()
   {
    int n, i, x, contador=0, j, k;
    scanf("%d", &n);
    
    for(j=0; j<n; j++)
    {
        scanf("%d", &x);

        if ( x == 0)
        {
            contador ++;
            printf("Caso %d: %d numero\n", j + 1, contador);
            printf("0\n");
        }
        else
        {
            printf("Caso %d: %d numeros\n", j + 1, somatorio( x ) + 1); // é somatario + 1 pq não contou com o zero
            printf("0 ");
            for(i=0;i<=x; i++)
            {  
                for(k=0; k<i; k++)
                {
                printf("%d ", i);
                }
            }
            printf("\n");
        }
    }
    return 0;
   }
   
   
   int somatorio( int x)
{
   if ( x == 1 || x == 0){
    return 1;
   }
   return somatorio( x - 1) + x;
}