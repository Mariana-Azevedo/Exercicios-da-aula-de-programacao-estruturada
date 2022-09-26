#include<stdlib.h>

typedef struct
{
    char *lista;
    int tamanho;
} PALAVRA;

PALAVRA* adiciona_prefixo(PALAVRA *a, char *b) 
{
    int i=0, size;
    PALAVRA* r;
    r = (PALAVRA*) malloc (sizeof(PALAVRA));

    for (i=0; b[i]!= '\0';i++)
        {
            size++;
        }

    r -> tamanho = a -> tamanho + size;
    r -> lista = (char*) malloc (sizeof(char)*r -> tamanho);

    for ( i=0; i< r -> tamanho; i++)
        {
            if ( i < size)
            {
                r -> lista[i] = b[i];
            }
            else{
                r -> lista[i] = a -> lista [i - size];
            }
        }

    return r;
}