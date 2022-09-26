#include <stdio.h>
#include <math.h>
    //float fibo (int n);
    int main()
    {
        float n, a, b, c;
        float resultado;
        scanf("%f", &n);
        a = pow(((1 + sqrt(5))/2), n);
        b = pow(((1 - sqrt(5))/2), n);
        c = sqrt(5);
        resultado = ( a - b ) / c;
        printf("%.1f", resultado);
        return 0;
    }
