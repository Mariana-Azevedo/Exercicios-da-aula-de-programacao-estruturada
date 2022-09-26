#include <stdio.h>
#include <stdlib.h>

struct DATA {
	int dia;
	int mes;
	int ano;
};

struct REGISTRO {
	char descricao[1000];
	struct DATA data;
	float valor;
};

struct LIVRO_CAIXA {
	struct REGISTRO vetor[100];
    int total;
};

int main(void) {
    char nome[16];
    int ano, i;
    float imposto = 0, lucro = 0;
    struct LIVRO_CAIXA caixa;
    scanf("%s %d", nome, &ano);

    FILE *fp = fopen(nome, "r+");

    fread(&caixa, sizeof(struct LIVRO_CAIXA), 1, fp);

    for (i = 0; i < caixa.total; i++) {
        if (caixa.vetor[i].data.ano == ano) {
            lucro += caixa.vetor[i].valor;
            imposto += abs(caixa.vetor[i].valor) * 0.15;
        }
    }
    if (lucro > 0){
    imposto += lucro * 0.32;
    }
    printf("R$ %.2f", imposto);

    fclose(fp);
	return 0;
}