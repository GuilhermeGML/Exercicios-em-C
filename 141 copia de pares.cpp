#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq, *arqCopia;
    int num;

    arq = fopen("Numeros.bin", "wb");
    if (arq == NULL) {
        printf("Erro ao criar o arquivo 'Numeros.bin'.\n");
        exit(1);
    }

    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fwrite(numeros, sizeof(int), 10, arq);

    arqCopia = fopen("Pares.bin", "wb");
    if (arqCopia == NULL) {
        printf("Erro ao criar o arquivo 'Pares.bin'.\n");
        fclose(arq);
        exit(1);
    }

    fseek(arq, 0, SEEK_SET);
    while (fread(&num, sizeof(int), 1, arq) == 1) {
        if (num % 2 == 0) {
            fwrite(&num, sizeof(int), 1, arqCopia);
        }
    }

    fclose(arq);
    fclose(arqCopia);

    return 0;
}

