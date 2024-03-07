#include <stdio.h>

void maiusculo(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char palavra[100];
    
    printf("Digite uma string em letras minuscula: ");
    scanf("%s", palavra);
    
    maiusculo(palavra);
    
    printf("String em letras maiusculas: %s\n", palavra);
    
    return 0;
}

