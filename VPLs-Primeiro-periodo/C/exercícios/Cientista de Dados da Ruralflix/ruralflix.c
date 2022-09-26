#include <stdio.h>
int main()
    {
        char arquivo[100];
        int usuario, video, avaliacao;
        int user_coluna, video_coluna, avaliacao_coluna, i, j, aux[100] = {0};
        int contador, x, maior=0;;

        FILE *arq;

        scanf("%s", arquivo);

        arq = fopen(arquivo, "r");

        if(arq == NULL)
        {
            printf("O arquivo nao pode ser aberto");
            return 1;
        }

        fscanf(arq, "%d %d %d", &usuario, &video, &avaliacao);



        for(i=0; i<avaliacao; i++)
            {
                fscanf(arq, "%d %d %d", &user_coluna, &video_coluna, &avaliacao_coluna);
                aux[video_coluna]++;
            }
            
         for ( i = 1; i< avaliacao + video; i++)
            {
                if ( aux[i] > maior)
                    {
                        maior = aux[i];
                        x = i;
                    }
            }
            
        printf("%d", x);
        return 0;
    }
    