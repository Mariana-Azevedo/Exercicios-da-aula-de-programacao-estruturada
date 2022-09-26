#include <stdio.h>
   int main()
   {
    char frase[200];
    int i=0, a, z;
    fgets(frase, 200, stdin);
    if ( frase[i] >= 'a' && frase[i] <= 'z')
    {
      frase[0] = frase[0] - 'a' + 'A'; 
      
    }
    printf("%s", frase);
    return 0;
   }