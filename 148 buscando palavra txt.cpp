#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq;
    arq = fopen("Contador de Repetiçoes.txt", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char palavra[20];
    int apareceu = 0;

    printf("Qual palavra deseja encontrar: ");
    scanf("%s", palavra);

    char linha[1000];

    while (fgets(linha, sizeof(linha), arq) != NULL) {
        if (strstr(linha, palavra) != NULL) {
            apareceu++;
        }
    }

    printf("Palavra %s apareceu %d vezes\n", palavra, apareceu);

    fclose(arq);
    return 0;
}

