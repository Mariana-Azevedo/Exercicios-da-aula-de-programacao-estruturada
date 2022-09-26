/*#include <stdio.h>
int main(){
  int i, t, n[100], j, maior=0;
  long long int Fibo;
  scanf("%d", &t);
  int vetor[t]; // vetor de tamanho t
  n[1] = 1;
  n[0] = 0;
  
  for( i = 0; i < t; i++){ //para a quantidade de casos
    scanf("%d", &vetor[i]);
    if(vetor[i] > maior)
    {
      maior = vetor[i];
    } 
  }
  for ( i=2; i<maior; i++) // i = 2; próximo valor que eu ainda não calculei
  {
    n[i] = n[i-1] + n[i-2];
  }
  for( i = 0; i < t; i++){
   printf("Fib(%d) =", n[i]);
  }
}*/

#include <stdio.h>
int main(){
  int i, t, fibo[100], j, a, n;
  //long long int Fibo;
  scanf("%d", &t);
  fibo[1] = 1;
  fibo[0] = 0;
  
  for( i = 2; i < 60; i++){
     fibo[i] = fibo[i-1] + fibo[i-2];
  }
  for( i = 0; i < t; i++){ //para quantidade de casos
    scanf("%d", &n); // 2
    printf("Fib(%d) = %d\n", n, fibo[n]);
    }
  
    
    return 0;
  }
  


