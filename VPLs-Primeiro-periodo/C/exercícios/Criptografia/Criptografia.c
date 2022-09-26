/*
        // 0 1 2 3 4 5 6 7 8 9
        // 0 > 9 & 9 > 0
        // 1 > 8 & 8 > 1 | 0 + 1 > 9 - 1 & 9 - 1 > 0 + 1
        // 2 > 7
        // 3 > 6
        // 4 > 5

        for (x = 0; x < i/2; x++) {
            char temp = texto[x];
            texto[x] = texto[x - (i - 1)];
            texto[x - (i - 1)] = texto[x];
        }

        for (x = 0, y = i - 1; x < i / 2; x++, y--) {
            char temp = texto[x];
            texto[x] = texto[y];
            texto[y] = texto[x];
        }

        for(x=0; texto[x]!='\0'; x++)
        {
             contador++;
        }

        y = contador - 1;

        for(x=0; texto[x]!= '\0'; x++, y-- ) // inverter
        {
            inverte[x] = texto[y];
            y--;
        }
        
   }*/

#include <stdio.h>
   int main(){
       char texto[1000], inverte[1000];
       int i, j, x, casos, contador=0, y, tamanho;
       scanf("%d", &casos);
       for(j=0; j<casos; j++)
       {
        scanf(" %[^\n]", texto);

        for(i=0; texto[i] != '\0'; i++) // adicionar 3 caracters
        {
            if ( (texto[i] >= 'A' && texto[i] <='Z') ||  (texto[i] >= 'a' && texto[i] <='z') )
            {
                texto[i] = texto[i] + 3;
            } else {
                texto[i] = texto[i];
            }
        }
        printf("%s\n", texto);

        for (x = 0, y = i - 1; x < i / 2; x++, y--) {
            char temp = texto[y];
            texto[y] = texto[x];
            texto[x] = temp;
        }
        
        printf("%s\n", texto);

        for(x= i / 2; x < i; x++)  // trucamento metade pra frente - 1
        {
            texto[x] = texto[x] - 1;
        }
        printf("%s\n", texto);
        }
       return 0;
   }