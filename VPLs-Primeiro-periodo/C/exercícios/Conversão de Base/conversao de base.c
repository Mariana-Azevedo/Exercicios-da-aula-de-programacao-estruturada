#include <stdio.h>
int converte_dec_hex( int numero );
int converte_hex_bin( int numero );
int converte_dec_bin ( int numero);

int main()
{
    int n, i, j, binario=0, decimal=0, hexadecimal=0;
    int numero;
    char base[100];

    scanf("%d", &n);
    for ( i=0 ; i<n; i++ )
        {
        scanf("%d %s", &numero, base);
        if(base[i] == 'b') 
            {
                printf("%d", converte_dec_hex(numero));
            }
        if(base[i] == 'd')
            {
                printf("%d", converte_hex_bin(numero));
            }
        if(base[i] == 'h')
            {
                printf("%d", converte_dec_bin(numero));
            }
        }
        printf("%d %s", numero, base);
        return 0;
}


int converte_dec_hex( int numero ) // vai receber um número em binário
{
    int resto[100];
    int inteiro, i, j;
    for(i=0;)
    inteiro = numero / 10;
    resto[i] = numero % 10;

    for(j=0;j; j++)
    {
        if (resto[j] 
    }
}


int converte_hex_bin( int numero ) // vai receber um número em decimal
{

}


int converte_dec_bin ( int numero) // vai receber um número em hexadecimal
{

}

