#include <stdio.h>
int main() {
    
    char dado[100];
    int u, v, a, usuario, vid, i=0, j=0, mais_assistido, x;
    float maiorMedia = 0, avaliacao;
    int soma[1000] = {0};
    int frequencia[1000] = {0};
    float media[1000] = {0};

    FILE *fp;
    
    scanf("%s", dado);

    fp = fopen(dado, "r");
    if(fp == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 1;
    }
    
    fscanf(fp, "%d %d %d", &u, &v, &a);
    
    int lista[100] = {0};
    
    while(i < a)
    {
        fscanf(fp,"%d %d %f", &u, &vid, &avaliacao);
        
        soma[vid] = soma[vid] + avaliacao;
        frequencia[vid]++;
        x = soma[vid] / frequencia[vid];
        media[vid] = x;
        i++;
        
    }
    while(j < vid)
    {
        if(frequencia[j] < a * 0.10)
        {
            media[j] = 0;
        }
        else
        {
            if(media[j] > maiorMedia)
            {
                maiorMedia = media[j];
                mais_assistido = j;
            }
        }
        j++;
    }
    printf("%d", mais_assistido);
    fclose(fp);
    return 0;
}


#include <stdio.h>

int main(void) {
    
    char arquivo[100];
    int usarios, videos, avaliacoes, usuario, video, i, j, melhorVideo;
    float avaliacao;
    float maiorMedia = 0;
    FILE *file;
    
    scanf("%s", arquivo);

    file = fopen(arquivo, "r");
    
    if(file == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 0;
    }
    
    fscanf(file, "%d", &usarios);
    fscanf(file, "%d", &videos);
    fscanf(file, "%d", &avaliacoes);
    
    int soma[1000] = {0};
    int frequencia[1000] = {0};
    float media[1000] = {0};
    
    int lista[100] = {0};
    
    for(i = 0; i < avaliacoes; i++)
    {
        fscanf(file,"%d", &usuario);
        fscanf(file, "%d", &video);
        fscanf(file, "%f", &avaliacao);
        
        soma[video] = soma[video] + avaliacao;
        frequencia[video]++;
        media[video] = soma[video] / frequencia[video];
        
    }
    
    for(j = 0; j < videos; j++)
    {
        if(frequencia[j] < avaliacoes * 0.10)
        {
            media[j] = 0;
        }
        
        else
        {
            if(media[j] > maiorMedia)
            {
                maiorMedia = media[j];
                melhorVideo = j;
            }
        }
        
        
    }
    printf("%d", melhorVideo);
}