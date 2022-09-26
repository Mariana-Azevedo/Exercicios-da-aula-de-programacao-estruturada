#include <stdio.h>
   int main()
   {
    char frase[200];
    int i=0, a, z;
    fgets(frase, 200, stdin);
    if ( frase[i] >= 'a' && frase[i] <= 'z')
    {
      frase[0] = frase[0] - 'a' + 'A';////Ana clara
    }
      for( i=1; frase[i] != '\0'; i++)
      {
          if ( frase[i] == ' ')
          {
            if ( frase[i+1] >= 'a' && frase[i+1] <= 'z')
            {
               frase[i+1] = frase[i+1] - 'a' + 'A';
            }
          }
          else if ( frase[i-1] != ' ') //Ana Clara
         {
            if ( frase[i] >= 'A' && frase[i] <= 'Z')
            {
              frase[i] = frase[i] - 'A' + 'a';
            }
         }
         
      }
    
    printf("%s", frase);
    return 0;
   }
   