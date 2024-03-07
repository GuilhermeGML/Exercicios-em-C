#include <stdio.h>
#include<string.h>

int main() {
    char palavra[100];
    printf("Digite uma string: ");
    scanf("%s", palavra);
    printf("String de traz para frente:");
    for (int i = strlen(palavra); i >= 0; i--) {
        printf("%c",palavra[i]);  
    }
    
    return 0;
}

