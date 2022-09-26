#include <stdio.h>
   int main()
   {
       int N, i = 1, a, b=0, c=1;
       scanf("%d", &N);

       while ( N < i)
       {
           while ( b <= 2)
           { 
            if (N % i == 0)
            {
                b = b + 1;
                i = i + 1;
            }
            else if(N % i != 0)
            {
                b = b;
                i = i + 1;
            }
           }


           if (  b == 2)
           {
            printf("primo\n");
           }
           else if( b > 2)
           {
            printf("nao");
           }
       }
       return 0;
   }