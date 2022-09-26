#include <stdio.h>
#include <string.h>

   int main()
   {
       char nome[50];
       double vendas, salario, total;
       scanf("%s%lf%lf", nome,&salario,&vendas);
       total = salario+(vendas*0.15);
       printf("TOTAL = R$ %.2lf", total); 
       return 0;
       
   }