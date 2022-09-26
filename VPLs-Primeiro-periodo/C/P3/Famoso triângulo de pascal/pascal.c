#include <stdio.h>
int ptriangulo(int b)
{
    int c;
    int resultado = 1;

    for( c = 1 ; c <= b ; c++ )
        resultado = resultado * c;

    return ( resultado );
}
int main()
{
    int a, b, c;
    scanf("%d",&b);
    for ( a = 0 ; a < b ; a++ )
    {
        for ( c = 0 ; c <= ( b - a - 2 ) ; c++ )
            printf(" ");
        for( c = 0 ; c <= a ; c++ )
            printf("%d ",ptriangulo(a)/(ptriangulo(c) * ptriangulo(a-c)));

        printf("\n");
    }
    return 0;
}