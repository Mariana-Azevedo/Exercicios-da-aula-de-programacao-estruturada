#include <stdio.h>
   int main ()
      {
          int N, A, B, C, X, Y;
          scanf("%d", &N);
          A = N / 3600;
          X = N % 3600;
          B = X / 60;
          C = X % 60;
          printf("%d:%d:%d", A, B, C);
          return 0;
      }