#include<stdlib.h>

typedef struct
{
    char *lista;
    int tamanho;
} TEXTO;

TEXTO* remove_palavra(TEXTO *texto, int base, int offset) 
{
    int i, j = base + offset;
    TEXTO *p;
    p = (TEXTO *) malloc(sizeof(TEXTO)); //peguei o tamanho de p para botar na heap
    p -> tamanho = texto -> tamanho - offset; //para saber o tamanho do novo texto, pq o offset é oq eu vou retirar

    p->lista = (char *) malloc(sizeof(char) * p->tamanho); // peguei o espaço na mémoria de acordo com o tamanho da char

    for(i=0; i<base; i++)
    {
        p -> lista[i] = texto -> lista[i]; // dei o valor em quando não informar o primeiro caracter de remoção que é a base
    }
    while(texto -> lista[j] != '\0')
    {
        p -> lista[i] = texto->lista[j];
        j++;
        i++;
    }
    return p;

}




 /*for(j = base + offset; texto -> lista[j] != '\0'; j++) //vai fazer o for começando depois da parte removida
    {
        p -> lista[i] = texto->lista[j];
        i++;
    }*/