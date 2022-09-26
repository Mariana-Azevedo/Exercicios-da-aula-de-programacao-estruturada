#include <stdio.h>
   int main()
   {
       double a, b, c, x, y, z;
       scanf("%lf %lf %lf", &a, &b, &c);
       
       x = a*a;
       y = b*b;
       z = c*c;

       if ( a > b || a > c)
       {     
          if ( a >= ( b + c ) )
           {
           printf("NAO FORMA TRIANGULO\n");
           return 0;
           }
         if (x  == ( y + z ) )
         {
           printf("TRIANGULO RETANGULO\n");
         }
         if ( x > ( y + z ) )
         {
           printf("TRIANGULO OBTUSANGULO\n");
         }
         if ( x < (y + z) )
         {
           printf("TRIANGULO ACUTANGULO\n");
         } 
       }

       
       if ( b > a || b > c)
       {    
           if ( b >= ( a + c ) )
         {
           printf("NAO FORMA TRIANGULO\n");
           return 0;
         }
        if ( y == ( x + z ) )
         {
           printf("TRIANGULO RETANGULO\n");
         }
        if ( y > ( x + z ) )
         {
           printf("TRIANGULO OBTUSANGULO\n");
         }
        if ( y < (x + z ) )
         {
           printf("TRIANGULO ACUTANGULO\n");
         } 
       }


       if ( c > a || c > b)
       {    
         if ( c >= ( a + b ) )
         {
           printf("NAO FORMA TRIANGULO\n");
           return 0;
         }
         if ( z == ( x + y ) )
         {
           printf("TRIANGULO RETANGULO\n");
         }
         if ( z > ( x + y ) )
         {
           printf("TRIANGULO OBTUSANGULO\n");
         }
         if ( z < ( x + a ) )
         {
           printf("TRIANGULO ACUTANGULO\n");
         }  
       }




       if ( a == b && a == c && b == c)
       {
         if ( y == ( x + z ) )
         {
           printf("TRIANGULO RETANGULO\n");
         }
         if ( y > ( x + z ) )
         {
           printf("TRIANGULO OBTUSANGULO\n");
         }
         if ( y < (x + z ) )
         {
           printf("TRIANGULO ACUTANGULO\n");
         }
         if ( a == b && a == c && b == c ) 
         {
         printf("TRIANGULO EQUILATERO\n");
         }
     
       }
       
       if ( a == b && a != c)
         {
           printf("TRIANGULO ISOSCELES\n");
         }
         if ( a == c && a != b)
         {
           printf("TRIANGULO ISOSCELES\n");
         }
         if ( b == c && b != a )
         {
           printf("TRIANGULO ISOSCELES\n");
       }
       return 0;
   }