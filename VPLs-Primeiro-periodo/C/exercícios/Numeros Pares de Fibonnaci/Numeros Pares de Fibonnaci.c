#include <stdio.h>
int main()
{
int n, a=1, b=2, x, soma=0;
scanf ("%d", &n);
while (a<n)
    {
    if (a%2==0)
        {
        soma=soma+a;
        }
        x=a;
        a=b;
        b= b+x;
    }
printf ("%d", soma);
}