#include <stdio.h>
    int main(void)
    {
        float nota1, nota2, media;
        char nome[50];
        FILE *aluno;
        aluno = fopen("arquivo.txt", "r");
        if ( aluno == NULL)
            {
                printf("Arquivo não pode ser aberto");
                return 1;
            } 
        while(fscanf(aluno, " %[^;]%*c %f; %f;", nome, &nota1, &nota2) == 3) // o *c é para ignorar o espaço
        {
            media = ( nota1 + nota2 ) / 2;
            printf("%s %.1f %.1f %.1f", nome, nota1, nota2, media);
            if ( media >= 5)
                {
                    printf(" aprovado");
                }
            else
                {
                    printf(" reprovado");
                }
                printf("\n");
        }
         fclose(aluno);
        return 0;
    }