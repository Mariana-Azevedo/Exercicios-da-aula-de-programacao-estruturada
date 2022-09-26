#include <stdio.h>
   int main()
   {
    int x, fibo[1000], fibo1, fibo2, i;
    scanf("%d", &x);
    fibo[0] = 0;
    fibo[1] = 1;

    for( i = 2; i < 25; i++)
        {
        fibo[i] = fibo[i-1] + fibo[i-2];
        }

    for(i=0; i < 25; i++)
        {
            printf("%d", fibo[i]);
        }
    return 0;
    }
   