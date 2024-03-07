#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>


void decimalParaBinario(int num, FILE *arquivo) {
    int binario[32]; 
    int i = 0;

    while (num > 0) {
        binario[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        fprintf(arquivo, "%d", binario[j]);
    }
    fprintf(arquivo, "\n");
}

int main() {
    int numeros[10];
    
    printf("Digite 10 numeros separados por espaços: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    FILE *arquivo = fopen("binarios.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        decimalParaBinario(numeros[i], arquivo);
    }

    fclose(arquivo);

    printf("Os numeros binarios foram gravados em 'binarios.txt'.\n");

    return 0;
}

