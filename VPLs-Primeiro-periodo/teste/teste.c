#include<stdio.h>
int mariana(int n1, int n2);

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", mariana(n1 , n2));
    return 0;
}

int mariana(int n1, int n2)
{
    return n1 + n2;
}