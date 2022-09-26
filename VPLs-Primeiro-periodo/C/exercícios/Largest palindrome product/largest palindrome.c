#include <stdio.h>
    int main (void){
    int maior = 0;
    int i, j;
    for ( i = 999; i>=100; i--){
        for( j = 999; j>= 100; j--){
          int resultado = i*j;
          int copia = resultado;
          int palindromo = 0;
          while (copia > 0){
            int resto = copia % 10;
            copia = copia / 10;
            palindromo = (palindromo * 10) + resto;
          }
          if (palindromo == resultado)
          {
            if (palindromo > maior)
            {
              maior = palindromo;
            }
          }
        }
    }
    printf("%d\n", maior);
    return 0;
   }