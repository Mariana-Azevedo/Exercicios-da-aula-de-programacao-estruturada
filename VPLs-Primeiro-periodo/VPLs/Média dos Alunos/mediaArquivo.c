#include <stdio.h>
    int main()
    {
        int n, i;
        char nome[51];
        float nota1, nota2, grade;
        FILE *media;
        media = fopen("media.txt", "r");
        if ( media == NULL)
        {
            printf("Arquivo não pode ser aberto");
            return 1;
        } 
        fscanf(media, "%d", &n);
        while(fscanf(media, " %[^\n] %f %f", nome, &nota1, &nota2) == 3 ) // é como se fosse o '\0'
        {  
            grade = ( nota1 + nota2 ) / 2;
            if ( grade >= 7)
            {
                printf("%s\n", nome);
            }
        }
        
        fclose(media);
        return 0;
    }




    /*while(!feof(fp)){ // é como se fosse o '\0'
            fscanf(fp, "%n %s %f %f", &n, nome, &nota1, &nota2); 

            printf("%s\n", nome);
        }*/



    /*scanf("%d", n);
    
    for(i=0; i<n; i++)
    {
        scanf("%s", nome);
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        //media = (nota1 + nota2) / 2;
        if ( nota1 > 7 && nota2 > 7)
        {
            printf("%s\n", nome);
        }
    }

        return 0;
    }*/