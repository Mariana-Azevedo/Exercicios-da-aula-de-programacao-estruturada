#include<stdio.h>
   int main()
   {
       float tempo, velocidade_media, espaco, litros;
       scanf("%f%f", &tempo, &velocidade_media);
       espaco = tempo*velocidade_media;
       litros = espaco / 12;
       printf("%.3f", litros);
       return 0;
       
   }