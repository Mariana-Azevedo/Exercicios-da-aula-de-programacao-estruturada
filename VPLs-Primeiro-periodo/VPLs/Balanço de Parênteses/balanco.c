#include <stdio.h>

void solve();

   int main()
   {
       int n;
       scanf("%d", &n);
           solve();
       
       return 0;
   }
   
void solve() {
    char expressao[1001];
    scanf(" %s", expressao);
    int x, y;
    int aberto = 0;
    
    for (x = 0; expressao[x] != '\0'; x++) {
        if ( expressao[x] == ')')
        {
            if (aberto <= 0) {
                printf("incorrect\n");
                return;
            }
            
            aberto--;
        }
        
        if (expressao[x] == '(') {
            aberto++;
        }
    }
    
    if ( aberto == 0)
    {
        printf("correct\n");
    } else {
        printf("incorrect\n");
    }
    
    return;
}