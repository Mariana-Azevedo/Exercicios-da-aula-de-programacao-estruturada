// vou fazendo várior for, um para pegar a maior e menor nota e depois vou fazer outro for que tem que pegar a nota entre a menor nota que eu achei até a maior nota, ai eu vou ter achado a segunda menor nota e vou fazendo vários for até achar realmente a quinta menor nota
#include <stdio.h>
   int main()
   {
    int n, i, vetor[100], min=10, j, min2=10, y=10, min3=10, min4=10, min5=10;
    scanf("%d", &n);
    for( i=0; i<n; i++)
    {
       scanf("%d", &vetor[i]); // 7 1 3 2 3 4 5 5 6 10 7 8 9 2 10
       if ( min>vetor[i] )  // 1 > 3
       {
           min = vetor[i]; // min = 1
       }
    }  
   
    for( j = 0; j<n; j++)
    {
       if( vetor[j] > min && vetor[j]<=min2) 
       {
           min2 = vetor[j];
       }
    }
     
     for( j = 0; j<n; j++)
    {
      
       if( vetor[j] > min2 && vetor[j]<=min3)
       {
           min3 = vetor[j];
       }
    }
     for( j = 0; j<n; j++)
    {
       if( vetor[j] > min3 && vetor[j]<=min4)
       {
           min4 = vetor[j];
       }

    }
      for( j = 0; j<n; j++)
    { 
       if( vetor[j] > min4 && vetor[j]<=min5)
       {
        min5 = vetor[j];
       }

    }
     printf("%d\n", min5);
     return 0;
 }