#include <stdio.h>
    int main()
    {
        int baias[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
        int primeiro, maior=0, prancha, i, j, contador;
        for(i=0; baias[i] != '\0'; i++)
        {
            contador=0;
            prancha = baias[i] + 19; // a prancha vai tampar a posição i + 19, pq são 20 no total que vão ser tampadas
            for(j=i; baias[j] != '\0'; j++)
            {
                if(baias[j] <= prancha && baias[j] >= baias [i]) 
                {
                    contador++;
                }
                // 2 <= 21 e 2 >= 2   1
                // 3 <= 21 e 3 >= 2   2
                // 5 <= 21 e 5 >= 2   3
                // 7 <= 21 e 7 >= 2   4
                // 11 <= 21 e 11 >= 2  5
                // 13 <= 21 e 13 >= 2  6
                // 17 <= 21 e 17 >= 2  7
                // 19 <= 21 e 19 >= 2  8

                // depois ele vai fazer tudo isso 

            }
            if(contador > maior)
            {
                maior = contador;
                primeiro = i;
            }
        }
        printf("maior = %d", maior);
        printf(" inicio %d\n", primeiro);
        return 0;
    }