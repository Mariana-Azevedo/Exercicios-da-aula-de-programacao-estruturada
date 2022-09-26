#include<stdlib.h>

typedef struct
    {
        int *lista; // ponteiro para uma lista de inteiros
        int size; //  quantidade de elementos desta lista
    } VETOR;

VETOR * intercala(VETOR *a, VETOR *b) 
    {
        int i = 0;
        int aux;
        VETOR *array;
        array = (VETOR *) malloc(sizeof(VETOR)); //estou botando a array na heap e dando o tamanho da STRUCT VETOR
        
        if(a->size > b->size)
        {
            array->size = 2 * b->size;
        } else{
            array->size = 2 * a->size;
        }

        array->lista = (int*) malloc(sizeof(int) * array->size);

        for( i=0; i < array->size; i++ )
        {
            if( i % 2 == 0)
                {
                    array->lista[i] = a-> lista [ i / 2];
                }
            else
                {
                    array -> lista[i] = b->lista[(i - 1) / 2 ];
                }
        }
        return array;
    }