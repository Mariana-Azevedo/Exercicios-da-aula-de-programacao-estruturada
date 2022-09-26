#include <stdio.h>
 int main()
 {
    int n, contador=0, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++) //tem que começar no 1 pq se não vai dividir o contador vai ficar igual a 3 pq vai dividir por 0 1 e n
    {
        if( n % i  == 0)
        {
            contador++;
        }
    }
    if (contador == 2)
    {
        printf("primo");
    }
    else{
        printf("nao");
    }
    return 0;
 }