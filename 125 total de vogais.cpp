#include <stdio.h>
#include <string.h>
#include <ctype.h>

int TotalVogal(char *str) {
	int total;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            total++;
        }
    }
    return total;
}

int main() {
    char palavra[100];
    int tot;
    printf("Digite uma string: ");
    scanf("%s", palavra);
    
    tot = TotalVogal(palavra);
    
    printf("Quantidade de vogais: %d\n", tot);
    
    return 0;
}

