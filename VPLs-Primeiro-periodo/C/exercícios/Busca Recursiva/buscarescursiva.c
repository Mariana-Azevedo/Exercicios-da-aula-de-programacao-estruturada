#include <stdio.h>
int busca (int num, int tamanho, int elementos[]);
    int main()
    {
        int num, tamanho, elementos[100], i;
        scanf("%d", &num);
        scanf("%d", &tamanho);
        for(i=0; i<tamanho; i++)
        {
            scanf("%d", &elementos[i]);
        }
        printf("%d", busca(num, tamanho, elementos));
        return 0;
    }

int busca (int num, int tamanho, int elementos[])
{
    int i;
    for( i=0; i<tamanho; i++)
    {
        if ( elementos[i] == num)
        {
            return i;
        }
    }
    return - 1;
}