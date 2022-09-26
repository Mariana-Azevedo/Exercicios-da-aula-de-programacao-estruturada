#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, z=0, k=0;
        char x[100];
        int total=0;
        scanf("%s", x);
        
        int j;
        for (j = 0; x[j] != '\0'; j++) {
            
           if (x[j] == '0')
            {
                a++;
            }   
           if ( x[j] == '1')
            {
                b++;
            } 
           if ( x[j] == '2')
            {
                c++;
            } 
           if ( x[j] == '3')
            {
                d++;
            } 
           if ( x[j] == '4')
            {
                e++;
            } 
           if ( x[j] == '5')
            {
                f++;
            } 
           if ( x[j] == '6')
                {
                    g++;
                } 
            if ( x[j] == '7')
                {
                    h++;
                }      
            if ( x[j] == '8')
                {
                    z++;
                } 
            if ( x[j] == '9')
                {
                    k++;
                } 
        }
        
        total = a*6 +  b*2 +  c*5 + d*5 + e*4 + f*5 + g*6 + h*3 + z*7 + k*6;
        printf("%d leds\n", total);
    }
    
    return 0;
}



