#include <stdio.h>

void minusculo(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char palavra[100];
    
    printf("Digite uma string em letras maiusculas: ");
    scanf("%s", palavra);
    
    minusculo(palavra);
    
    printf("String em letras minu-sculas: %s\n", palavra);
    
    return 0;
}

