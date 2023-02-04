#include <stdio.h>

int main()
    {

        int matriz[3][3], i, j, aux, count[100], k=0;
    
        for(i=0; i<3; i++) // vou pegar todos os valores da matriz
            {   
                for(j=0;j<3; j++)
                    {
                        scanf("%d", &matriz[i][j]);
                    }
            }

            printf("\n");
            printf("Se a soma das linhas for 15 print 1 se nao 0:  ");

            for(i=0; i<3; i++) // verifica se a soma das linhas é igual a 15
            {   
                aux = 0;
                for(j=0;j<3; j++)
                    {
                        aux = aux + matriz[i][j]; //aux = 0 + 1  aux = 1 + 2  aux = 2 + 3 = 5
                    }   // o aux vai sair do for valendo 5
                        if ( aux == 15)
                        {
                            printf(" 1 ");
                        }
                        else{
                            printf(" 0 "); // e vai printar 5
                        }
            }

            printf("\n");
            printf("Se a soma das colunas for 15 print 1 se nao 0:  ");
          for(i=0; i<3; i++) // verifica se a soma das colunas é igual a 15
            {   
                aux = 0;
                for(j=0;j<3; j++)
                    {
                        aux = aux + matriz[j][i];
                    }
                        if ( aux == 15)
                        {
                            printf(" 1 ");
                        }
                        else{
                            printf(" 0 ");
                        }
            }            
            
            printf("\n");
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

// verifica se todos os elementos são distintos
          for(i=0; i<3; i++) 
                {   
                    for(j=0;j<3; j++)// botar todos os valores dentro do vetor e depois verificar se algum deles se repete
                        {
                            for(k=0;k<9;k++)
                            {
                                count[k]= matriz[i][j];
                                k++; // O PROBLEMA DO CÓDIGO ESTÁ NA VARIAVEL K QUE TEM QUE SER ZERADA MAS AI NÃO ARMAZENA A INFORMAÇÃO
                            }
                        }
            for(k=0;k<9;k++)
            {
                 printf(" %d ", count[k]);
            }
                }
            printf("\n");
          return 0;
         }
    


// verifica a digonal

// verifica se tudo deu 1







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