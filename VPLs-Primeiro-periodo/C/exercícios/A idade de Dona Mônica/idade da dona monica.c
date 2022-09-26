#include <stdio.h>
   int main()
   {
       int M;
       int a;
       int b;
       int c;
       scanf("%d %d %d", &M, &a, &b);
       if (40<= M <= 110 && 1 <= a < M && 1 <= b < M && a != b)
       {
           c = M - ( a + b );
       }
       
       printf("%d\n", c);
       return 0;
   }