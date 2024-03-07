#include <stdio.h>
#include <string.h>
#include <ctype.h>

void TrocaVogalPorLetra(char *str, char carac) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = carac;
        }
    }
}

int main() {
    char palavra[100];
    char caracter;
    printf("Digite uma string: ");
    scanf("%s", palavra);
    printf("Digite uma letra: ");
    scanf(" %c", &caracter);
    TrocaVogalPorLetra(palavra, caracter);
    
    printf("Palavra apos a troca: %s\n", palavra);
    
    return 0;
}

