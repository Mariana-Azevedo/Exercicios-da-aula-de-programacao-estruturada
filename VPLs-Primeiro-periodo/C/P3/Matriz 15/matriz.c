#include <stdio.h>

int main()
    {
        int matriz[3][3], linhas, colunas, i, j;
        for(i=0; i<3; i++)
            {   
                for(j=0;j<3; j++)
                    {
                        scanf("%d", &matriz[i][j]);
                        if( ( matriz<1 || matriz>9 ) )
                        {
                            printf("digite outro valor");
                            matriz[i][j]--;
                        }
                    }
            }
            printf("\n");
             for(i=0; i<3; i++)
            {
                for(j=0;j<3; j++)
                    {     
                      printf("%d ", matriz[i][j]);
                    }
                      printf("\n");
            }
       // printf("%d", verifica_matriz(matriz[i][j], linhas, colunas));
        return 0;
    }

/*int verifica_linhas(int matriz[][3], int linhas, int colunas)
    {
        return 0;
    }

int verifica_colunas(int matriz[][3], int linhas, int colunas)
    {
        return 0;
    }

int verifica_diagonais(int matriz[][3], int linhas, int colunas)
    {
        return 0;
    }

int verifica_numeros_unicos(int matriz[][3], int linhas, int colunas)
    {
        return 0;
    }

int verifica_matriz(int matriz[][3], int linhas, int colunas)
    {
        return 0;
    }*/