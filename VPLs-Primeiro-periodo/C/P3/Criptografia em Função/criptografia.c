//#include "biblioteca.h"

void  criptografia_caracterer(char texto_original[101], char texto_modificado[101])
{
    int i, x;
    
    for( i = 0; texto_original[i] != '\0'; i++ )
    {
        if ( texto_original[i] >= 'A' && texto_original[i] <='Z' || texto_original[i] >= 'a' && texto_original[i] <='z' )
        {
        texto_original[i] = texto_original[i] + 1;
        }
        if ( texto_original[i] == 'z' || texto_original[i] == 'Z' )
        {
            texto_modificado[i] = 'a';
        }
        if(texto_original[i] == 'Z')
        {
            texto_modificado[i] = 'A';
        }
     }
    return;
}

void criptografia_numero(char texto_original[101], char texto_modificado[101])
{
    int i;
    for (i=0; texto_original[i]='\0'; i++)
    {
        if ( texto_original[i] <= '9' && texto_original[i] >= '1')
        {
            texto_modificado[i] = texto_original[i] - 1;

        }
        if(texto_original[i] == '0')
        {
            texto_modificado[i] = '9';
        }
        
    }
    return;
}

void deslocar_frase(char texto_original[101], char texto_modificado[101])
{
    int i, j, x;
    char k[100];
    for ( i = 0; texto_original[i] != '\0'; i++);
    k[0] = texto_original[i - 1];
    
     for ( j = 1; texto_original[j] != '\0' ; j++)
    {
       k[j] = texto_original[j - 1];
    }
    k[j] = '\0';
    for ( x = 0; texto_original[x] != '\0'; x++)
    {
        texto_modificado[x] = k[x];
    }
  
    return;
}

void criptografar(char texto_original[101], char texto_modificado[101])
{
    criptografia_caracterer(texto_original, texto_modificado);
    criptografia_numero(texto_original, texto_modificado);
    deslocar_frase(texto_original, texto_modificado);
    return;
}