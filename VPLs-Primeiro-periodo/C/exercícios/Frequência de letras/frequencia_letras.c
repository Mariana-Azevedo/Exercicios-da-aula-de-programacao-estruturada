/*#include <stdio.h>
   int main()
   {
    int n;
    int nota[100], contador=0, i;
    scanf("%d", &n);
    for( i = 0; n < i; i++)
    {
        scanf("%d", &nota[i]);
        if ( nota[i] >= 0 && nota[i] <=10)
        {
            if ( nota[i]>=5)
            {
                contador++;
            }
        }
    }
   printf("%d", contador);
   return 0;
   }*/

#include <stdio.h>
    int main()
    {
        int n, i, j, atual, maior=0;
        char frase[200];
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            int alfabeto[26] = {0};
            scanf(" %[^\n]", frase);
            for(j=0; frase[j]!='\0'; j++)
            {
                if( frase[j] >= 'A' && frase[j] <= 'Z' || frase[j] >= 'a' && frase[j] <= 'z' )
                {
                    atual = frase[j]-(frase[j]>'a'?'a':'A');
                   // printf("%d\n", atual);
                    alfabeto[atual]++;
                    if(alfabeto[atual]>maior)
                    {
                        maior = alfabeto[atual];
                    }
                } 
            }
            for(j=0; j<26; j++)
            {
                if(alfabeto[j] == maior)
                {

                    printf("%c", j + 'a');
                }
            }
            printf("\n");
        }
        return 0;
    }



   