#include <stdio.h>
   int main()
   {
    int n, v=5, x=10, l=50, c=100, d=500, m=1000;
    int a, b;
    scanf("%d", &n);
    if( n > 0 && n < 1000)
    {
        
        a = n % c;
        b = a % x;

        if ( n >=900 && n <1000)
            {
                printf("CM");
            }
        if ( n >=800 && n <900)
            {
                printf("DCCC");
            }
        if ( n >=700 && n <800)
            {
                printf("DCC");
            }
        if ( n >=600 && n <700)
            {
                printf("DC");
            }
        if( n >= 500 && n < 600)
            {
                printf("D");
            }
        if( n >= 400 && n < 500)
            {
                printf("CD");
            }
        if( n >= 300 && n < 400)
            {
                printf("CCC");
            }
        if( n >= 200 && n < 300)
            {
                printf("CC");
            }
        if( n >= 100 && n < 200)
            {
                printf("C");
            }
        if( a >= 90 && a < 100)
            {
                printf("XC");
            }
        if( a >= 80 && a < 90)
            {
                printf("LXXX");
            }
        if( a >= 70 && a < 80)
            {
                printf("LXX");
            }
        if( a >= 60 && a < 70)
            {
                printf("LX");
            }
        if( a >= 50 && a < 60)
            {
                printf("L");
            }
        if( a >= 40 && a < 50)
            {
                printf("XL");
            }
        if( a >= 30 && a < 40)
            {
                printf("XXX");
            }
        if( a >= 20 && a < 30)
            {
                printf("XX");
            }
        if( a >= 10 && a < 20)
            {
                printf("X");
            }
        if( b == 9)
            {
                printf("IX");
            }
        if( b == 8)
            {
                printf("VIII");
            }
        if( b == 7)
            {
                printf("VII");
            }
        if( b == 6)
            {
                printf("VI");
            }
        if( b == 5)
            {
                printf("V");
            }
        if( b == 4)
            {
                printf("IV");
            }
        if( b == 3)
            {
                printf("III");
            }
        if( b == 2)
            {
                printf("II");
            }
        if( b == 1)
            {
                printf("I");
            }
    }
    return 0;
   }