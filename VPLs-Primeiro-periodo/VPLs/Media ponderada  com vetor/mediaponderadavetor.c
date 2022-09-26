#include <stdio.h>
   int main()
   {
    int n, i;
    float nota[50], a[10], y[10], z[10];
    float media1 = 0, media2 = 0, media3 = 0, peso, soma = 0, x;
    peso = 2 + 3 + 5;
    scanf("%d", &n);
     // vou pegar as notas // // criei 3 vetores para que cada nota fique em um vetor diferente //
    for( i = 0; i<n; i++) // criei um for para fazer a media ponderada //
    {
        scanf("%f", &a[i]);
        scanf("%f", &y[i]);
        scanf("%f", &z[i]);
        media1 = a[i]*2;
        media2 = y[i]*3;
        media3 = z[i]*5;
        soma = media1 + media2 + media3;
        x = soma / peso;
        printf("%.1f\n", x);
    }
    return 0;
   }
