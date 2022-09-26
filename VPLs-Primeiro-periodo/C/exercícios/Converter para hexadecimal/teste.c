#include <stdio.h>
   int dividir(int num);
   int sobra( int num);
   int conferir( int num);
   int main()
   {
    int num, i, resultado, resto;
    scanf("%d", &num);
    printf("%d\n", dividir(num));
    printf("%d\n", sobra(num));
    printf("%d\n", conferir(num));
    return 0;
   }

  int dividir(int num)
  {
      int resultado, resto;
      resultado = num / 16;
      return resultado;
  }
  int sobra( int num)
  {
    int resto;
    resto = num % 16;
    return resto;
  }
  int conferir(int num)
  {
     int A;
     if( sobra(num) == 0)
     {
      return A;
     }
  }
//função pra dividir resulsivamente
//função para conferir


   /* 
    for(i=0; frase[i] != '\0'; i++)
    {
      if ( frase[i] == '1' && frase[i+1] == '0')
        {
          printf("A");
        }
      if ( frase[i] == '11')
        {
          printf("B");
        }
    }
   if ( frase[i] == '11')
        {
          printf("B");
        }
      if ( frase[i] == '12')
        {
          printf("C");
        }
        if ( frase[i] == '13')
        {
          printf("D");
        }
      if ( frase[i] == '14')
        {
          printf("E");
        }
      if ( frase[i] == '15')
        {
          printf("F");
        }*/