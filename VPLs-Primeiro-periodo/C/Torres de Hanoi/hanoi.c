#include <stdio.h>

void torre_de_hanoi(int pino1, int pino2, int pino3, int movimento)
  {
    if( movimento > 0)
      {
        torre_de_hanoi(pino1, pino3, pino2, movimento - 1);
        printf("%d", pino1);
        printf("%d\n", pino2);
        torre_de_hanoi(pino3, pino2, pino1, movimento - 1);
      }
  }

int main()
  {
    int movimento;
    if ( scanf("%d", &movimento) == 1)
      {
        hanoi(1, 3, 2, movimento);
      }
    return 0;
  }





