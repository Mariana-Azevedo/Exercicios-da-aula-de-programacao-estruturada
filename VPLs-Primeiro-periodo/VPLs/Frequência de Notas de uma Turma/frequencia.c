#include <stdio.h>
   int main()
   {
    int nota[100], n, i, q=0, w=0 , e=0, r=0, t=0, y=0, u=0, l=0, o=0, p=0, m=0;
    scanf("%d", &n);
        for ( i = 0; i<n; i++)
        { 
          scanf("%d", &nota[i]);
          if( nota[i] >= 0 && nota[i]<=10)
           {
          if (nota[i]==0)
          {
           m++;
          }
          if (nota[i]==1)
          {
           q++;
          }
          if (nota[i]==2)
          {
           w++;
          }
          if (nota[i]==3)
          {
           e++;
          }
          if (nota[i]==4)
          {
           r++;
          }
          if (nota[i]==5)
          {
           t++;
          }
          if (nota[i]==6)
          {
           y++;
          }
          if (nota[i]==7)
          {
           u++;
          }
          if (nota[i]==8)
          {
           l++;
          }
          if (nota[i]==9)
          {
           o++;
          }
          if (nota[i]==10)
          {
           p++;
          }
        }
      }
      printf("%d %d %d %d %d %d %d %d %d %d %d", m, q, w, e, r, t, y, u, l, o, p);
      return 0;
      
   }