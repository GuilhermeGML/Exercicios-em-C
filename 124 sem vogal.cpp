#include <stdio.h>
#include <string.h>
#include <ctype.h>

void SemVogal(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = ' ';
        }
    }
}

int main() {
    char palavra[100];
    
    printf("Digite uma string: ");
    scanf("%s", palavra);
    
    SemVogal(palavra);
    
    printf("String sem vogais: %s\n", palavra);
    
    return 0;
}

