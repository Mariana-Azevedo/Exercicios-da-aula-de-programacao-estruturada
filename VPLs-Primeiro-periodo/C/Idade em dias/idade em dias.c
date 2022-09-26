#include<stdio.h>
   int main()
   {
       int idade, dia, mes, ano, A, B;
       scanf("%d", &idade);
       A = 365;
       B = 30;
       ano = idade/A;
       mes = ( idade % 365 ) / B;
       dia = ( idade % 365 ) % 30;
       printf("%d ano(s)\n %d mes(es)\n %d dia(s)\n", ano, mes, dia);
       return 0;
   }
