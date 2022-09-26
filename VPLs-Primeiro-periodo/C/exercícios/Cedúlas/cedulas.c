#include <stdio.h>
   int main()
   {
       int N, A, B, C, D, E, F, r, t, u, l, p;
       scanf("%d", &N);
       printf("%d\n", N);
           A = N / 100;
           r = N % 100;
           B = r / 50;
           t = r % 50;
           C = t / 20;
           u = t % 20;
           D = u / 10;
           l = u % 10;
           E = l / 5;
           p = l % 5; 
           F = p / 2;
       int o = p % 2;
       printf("%d nota(s) de R$ 100,00\n", A);
       printf("%d nota(s) de R$ 50,00\n", B);
       printf("%d nota(s) de R$ 20,00\n", C);
       printf("%d nota(s) de R$ 10,00\n", D);
       printf("%d nota(s) de R$ 5,00\n", E);
       printf("%d nota(s) de R$ 2,00\n", F);
       printf("%d nota(s) de R$ 1,00\n", o);
       return 0;
   }
