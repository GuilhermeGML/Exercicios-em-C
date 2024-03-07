#include <stdio.h>
#include <string.h>
#include <ctype.h>

void TrocaLetraPorLetra(char *str, char carac1, char carac2) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == carac1) {
            str[i] = carac2;
        }
    }
}

int main() {
    char palavra[100];
    char caracter1, caracter2;
    printf("Digite uma string: ");
    scanf("%s", palavra);
    printf("Digite uma letra: ");
    scanf(" %c", &caracter1);
    printf("Digite uma letra: ");
    scanf(" %c", &caracter2);
    TrocaLetraPorLetra(palavra, caracter1, caracter2);
    
    printf("Palavra apos a troca: %s\n", palavra);
    
    return 0;
}

