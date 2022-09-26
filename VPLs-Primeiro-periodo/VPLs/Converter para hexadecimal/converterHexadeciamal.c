#include <stdio.h>
   int main()
   {
    int num, i=0, resultado, resto, j, proximo, F;

    scanf("%d", &num);
    if ( num <10) // se for um número menor que 10 imprimir o próprio número
    {
          if ( num == 0)
          {
            printf("0");
          }
         if ( num == 1)
          {
            printf("1");
          }
          if ( num == 2)
          {
            printf("2");
          }
          if ( num == 3)
          {
            printf("3");
          }
          if ( num == 5)
          {
            printf("5");
          }
          if ( num == 6)
          {
            printf("6");
          }
          if ( num == 7)
          {
            printf("7");
          }
          if ( num == 8)
          {
            printf("8");
          }
          if ( num == 9)
          {
            printf("9");
          }
    } 
    else if(num >= 10 && num <= 15)
    {
      if ( num == 10)
          {
            printf("A");
          }
      if ( num == 11)
          {
            printf("B");
          }
      if ( num == 12)
          {
            printf("C");
          }
      if ( num == 13)
          {
            printf("D");
          }
      if ( num == 14)
          {
            printf("E");
          }
      if ( num == 15)
          {
            printf("F");
          }
    }
    else{
    for(j=0; i != 1 ; j++)
    {
      i = num % 16;
      proximo = num / 16;
      num = proximo;
        if ( num == 1)
          {
            printf("1");
          }
         if ( i == 0)
          {
            printf("0");
          }
          if ( i == 2)
          {
            printf("2");
          }
          if ( i == 3)
          {
            printf("3");
          }
          if ( i == 5)
          {
            printf("5");
          }
          if ( i == 6)
          {
            printf("6");
          }
          if ( i == 7)
          {
            printf("7");
          }
          if ( i == 8)
          {
            printf("8");
          }
          if ( i == 9)
          {
            printf("9");
          }
        if ( i == 10)
            {
              printf("A");
            }
        else if ( i == 11)
            {
              printf("B");
            }
        else if ( i == 12)
          {
            printf("C");
          }
        else if ( i == 13)
          {
            printf("D");
          }
         else if ( i == 14)
          {
            printf("E");
          }
        else if ( i == 15)
          {
            printf("F");
          }
         if ( proximo == 15)
          {
            printf("F"); 
            break;
            return 0;
          }
    }
    }
    return 0;
   }
