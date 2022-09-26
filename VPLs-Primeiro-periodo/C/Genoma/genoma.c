#include <stdio.h>
    int main()
    {
        int i, j, contador=0, x, flag=0;
        char frase[100];
        char comparar[100];
        scanf("%s", frase);
        scanf("%s", comparar);
        //printf("%s\n%s", frase, comparar);

        for(j=0; comparar[j] != '\0'; j++); //tamanho do comparar
        for(x=0; frase[x] != '\0'; x++); //tamanho da frase

        for(i=0; frase[i] != '\0'; i++)
            {
                if(frase[i] == comparar[contador])
                {
                    contador++;
                }
                else
                {
                    contador = 0;
                }
            
                if ( contador == j)
                    {
                        flag++;
                    }
            }
            printf("%d", flag);
        
        return 0;
    }