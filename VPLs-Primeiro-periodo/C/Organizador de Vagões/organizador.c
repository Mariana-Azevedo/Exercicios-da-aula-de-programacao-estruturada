#include <stdio.h>
    int main()
    {
        int tamanho, casos, i, j, x, y, aux, contador=0;
        int sequencia[100];
        scanf("%d", &casos);
        for(i=0; i<casos; i++)
        {
            scanf("%d", &tamanho);

            for(y=0; y<tamanho; y++)
            {
                scanf("%d", &sequencia[y]);
            }

            for(x = 0; x < tamanho - 1; x++)
            {       
                for(j = 0; j < tamanho - x - 1; j++)
                {          
                    if(sequencia[j] > sequencia[j + 1]) //aqui eu irei conferir que o vetor nessa posição vai ser maior que na próxima e se for irei fazer a troca
                    {               
                        aux = sequencia[j];
                        sequencia[j] = sequencia[j + 1]; // 1 2 3 
                        sequencia[j + 1] = aux;
                        contador++;
                    }

                }
            }

            printf("Optimal train swapping takes %d swaps.\n", contador);
            contador=0;
        }
    return 0;

