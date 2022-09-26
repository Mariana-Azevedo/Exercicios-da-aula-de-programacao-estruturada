#include <stdio.h>
   int min( int a, int b); // estou declarando a função aqui em cima pois o C lê o código de cima para baixo e eu necessito que ele saiba que em uma outra parte do código irá ter essa função

   int main()
   {
    int i, j, n, a, b;
    do{
    scanf("%d", &n);
    for( i=0; i<n; i++){ //coluna
        for (j=0; j<n; j++) //linha
        printf("%d   ",  min(min(i + 1, j + 1),min(n - i, n - j))); 
        printf("\n");
    }
    } while(n!=0);
   } 
   
   int min( int a, int b){
    return a<b ? a : b;
   }