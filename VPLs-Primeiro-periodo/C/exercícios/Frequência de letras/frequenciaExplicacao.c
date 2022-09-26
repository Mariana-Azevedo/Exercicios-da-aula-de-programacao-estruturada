#include <stdio.h>
    int main()
    {
        int n, i, j, atual;
        char frase[200];
        scanf("%d", &n);
        for(i=0; i<n; i++) // for para quantidade de casos
        {
            int alfabeto[26] = {0}; // contador zerado para somar em cada posição que seria a posição de uma letra do alfabeto

            int maior=0; // tenho que declarar o maior igual a 0 aqui dentro do for, para zerar toda vez que for rodar para uma frase nova

            scanf(" %[^\n]", frase); // scanf diferente para pegar espaço, não esquecer de sempre botar um espaço antes dele

            for(j=0; frase[j]!='\0'; j++) // pegar a char da posição 0 até o \0
            {
                if( frase[j] >= 'A' && frase[j] <= 'Z' || frase[j] >= 'a' && frase[j] <= 'z' ) // vai pegar apenas as letras
                {
                    atual = frase[j]-(frase[j]>'a'?'a':'A'); 
                    // explicação do ternário
                    // ele vai verificar que a letra que está na frase[j] é maior que 'a', se for significa que é uma letra minúscula e vai retornar 'a'
                    // se for menor que 'a' significa que vai ser uma letra maiúscula

                    // explicação do frase[j] - letra 'a' ou 'A'
                    // estou fazendo por se por exemplo a letra for b, vai se b que é 98 - a que é 97, logo 98 - 97 = 1
                     

                    alfabeto[atual]++; //então nesse somador iria acrescentar 1 na posição 1 que seria na posição da letra b

                    if(alfabeto[atual]>maior) // vou ver se alfabeto na posição atual é maior que maior que inicialmente vale 0
                    // se tiver outro b alfabeto[atual] vai valer 2 e vai atualizar o valor de maior
                    // 1 > 0, sim então entra do if
                    {
                        maior = alfabeto[atual]; //maior = 1
                    }
                }
            }
            for(j=0; j<26; j++) // aqui estou fazendo um for que vai percorrer todas as posições do vetor 
            {
                if(alfabeto[j] == maior) // se a posição alfabeto[j] for igual a maior quantidade de letras repetidas, ele vai entrar no if e vai ser printado
                {

                    printf("%c", j + 'a'); // botei j + a, porque todos os valores de alfabeto são posições tipo 1 2 3, e somando ele ao 'a' vai dar ele o valor certo na tabela ascii
                }
            }
            printf("\n");
        }
        return 0;
    }