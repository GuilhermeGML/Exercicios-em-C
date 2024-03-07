#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[1000];

    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}

