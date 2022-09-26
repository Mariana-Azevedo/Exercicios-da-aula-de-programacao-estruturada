#include <stdio.h>

int fat(int n) ;
float expo(float b, int e);
float magico(float x, int n) ;

int main(){
    int n, a, i, b, e;
    float x;
    scanf("%d %f", &n, &x);
    printf("%f", magico( x , n));
    return 0;
}

int fat(int n) {
    if ( n == 1 || n == 0){
    return 1;
    }
    return fat( n - 1) * n;
    
}

float expo(float b, int e) // b = base  e = expoente
{
    int i=0, resultado = 1;

    if ( e < 0)
    {
        b = 1 / b;
        resultado = 1 / b;
    }
    /*while ( i < e)
    {
     resultado = resultado * b;
     i++;
    }
    return resultado;*/
    if ( e > 0){
    for( i=0; i < e - 1; i++) // 0 < 3 - 1; 0 < 2  ---  1 < 2 
    {
         resultado = resultado * b; // b * b = 3 * --- 3   
    }
    }
    return resultado;
}


float magico(float x, int n) 
{
    int f, e, i;
    float solucao=0, b;
    
    for( i=0; i<=n; i++)
    {
     solucao += (expo(- 1, i)*expo(x, 2*i + 1))/fat(i + 1);
    }
    return solucao;
}