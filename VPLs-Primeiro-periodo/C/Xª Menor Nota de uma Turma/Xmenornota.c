#include <stdio.h>
    int main()
    {

        int ordena[100];    
        int num, i=0, j, posicao, aux, contador=0; 
        scanf("%d %d", &num, &posicao);    

        while(i<num)
        {
            scanf("%d", &ordena[i]);
            i++;
        }
        for(i = 0; i < num - 1; i++)
        {       
            for(j = 0; j < num - i - 1; j++)
            {          
                if(ordena[j] > ordena[j + 1]) //aqui eu irei conferir que o vetor nessa posição vai ser maior que na próxima e se for irei fazer a troca
                {               
                    aux = ordena[j];
                    ordena[j] = ordena[j + 1];
                    ordena[j + 1] = aux;
                }

            }
        }
       /* for(j = 0; j < num; j++)
            {
               printf("%d ", ordena[j]);
            }
        printf("\n");*/
        for(i = 0; i < num; i++) // passa por todas as posições do vetor
        {
            if ( ordena[i] == ordena[i + 1]) // verifica quando a i for igual a posição da nota que ele quer e imprimi
            {
               continue;
            }
            else 
            {
                contador++; 
            }
            if ( contador == posicao)
            {
                printf("%d", ordena[i]);
            }
        }

        return 0;
    }
    // quero a 2 menor nota
    // 1 1 2 2 3 3 4 4 vetor
    // 0 1 2 3 4 5 6 7 posições
    // 0 0 1 0 2 0 3 0 contador = 3

    // if contador 3 == 2