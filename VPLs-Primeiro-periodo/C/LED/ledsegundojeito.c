#include <stdio.h>
   int main()
   {
    int n, total[100], i;
    char led[100];
    scanf("%d", &n);
    for( i = 0; i<n; i++)
        {
         total[i]=0;
         scanf ("%s", led);
         for (int j=0;led[j]!='\0';j++)
            {
            if ( led[j] == '0')
                    {
                        total[i]+=6;
                    }   
            if ( led[j] == '1')
                    {
                        total[i]+=2;
                    } 
            if (led[j]=='2')
                    {
                    total[i]+=5;
                    }
                if (led[j]=='3')
                    {
                    total[i]+=5;
                    }
                if (led[j]=='4')
                    {
                    total[i]+=4;
                    }
                if (led[j]=='5')
                    {
                    total[i]+=5;
                    }
                if (led[j]=='6')
                    {
                    total[i]+=6;
                    }
                if (led[j]=='7')
                    {
                    total[i]+=3;
                    }
                if (led[j]=='8')
                    {
                    total[i]+=7;
                    }
                if (led[j]=='9')
                    {
                    total[i]+=6;
                    }
            }
        }
        
    for( i = 0; i<n; i++)
        {
            printf("%d leds\n", total[i]);
        }
    return 0;
   }