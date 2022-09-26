#include <stdio.h>
#include <string.h>
    int main()
    {
        char texto[100], i, j, tamanho;
        FILE *maluco;

        char arq[16];
        scanf("%s", arq);
        
        maluco = fopen(arq, "r");
        if ( maluco == NULL)
        {
            printf("Arquivo não pode ser aberto");
            return 1;
        } 
        while(!feof(maluco)) // é como se fosse o '\0'
        { 
           fgets(texto, 100, maluco);
           for( tamanho = 0; texto[tamanho] !='\0'; tamanho++);
           for(j = tamanho - 1; j >= 0; j--)
           {
            printf("%c", texto[j]);
           }
           printf("\n");
        }
        fclose(maluco);
        return 0;
    }