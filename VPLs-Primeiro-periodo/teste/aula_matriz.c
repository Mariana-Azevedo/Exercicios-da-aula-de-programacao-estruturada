#include <stdio.h>

int main()
{
    int matriz[100][100];
    int n = 3, i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}