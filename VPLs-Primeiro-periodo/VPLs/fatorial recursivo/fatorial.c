#include <stdio.h>

int fatorial( int n)
{
   if ( n == 1 || n == 0){
    return 1;
   }
   return fatorial( n - 1) * n;
}// 3!= 3*2!

int main()
{ 
    int n;
    scanf("%d", &n);
    printf("%d", fatorial( n )); 
    return 0;
}