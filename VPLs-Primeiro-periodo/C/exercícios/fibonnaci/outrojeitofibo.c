#include <stdio.h>
int main()
{
int n, a=1, b=2, x, soma=0;
scanf ("%d", &n);
// vamos supor que o n seja 10
    while (a<n) // 1<10
    {
        if (a%2==0) // a é par??
            {
            soma=soma+a; // se vou somar ao contador pois ele quer a soma dos números pares de fibonnaci
            }
        x=a; // x = 1 // a = 2 
        a=b; // a = 2 // a =  3
        b=b+x; // b = 2 + 1 = 3// b = 3 + 2
    }
    printf ("%d", soma);
    return 0;
}