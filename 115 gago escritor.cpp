#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehVogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeRepeticoes(char *str) {
    char resultado[1000];
    int pos = 0;
    int tam = strlen(str);
    int i = 0;

    while (i < tam) {
        int j = i + 1;

        while (j < tam && str[j] != ' ') {
            j++;
        }

        int k;
        int repetida = 0;

        for (k = i + 1; k < j; k++) {
            if (tolower(str[i]) == tolower(str[k]) && !ehVogal(str[i])) {
                repetida = 1;
                break;
            }
        }

        if (!repetida) {
            while (i < j) {
                resultado[pos++] = str[i++];
            }
        } else {
            while (i < k) {
                resultado[pos++] = str[i++];
            }
            i = k;
        }

        if (str[i] == ' ') {
            resultado[pos++] = ' ';
            i++;
        }
    }

    resultado[pos] = '\0';
    strcpy(str, resultado);
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    removeRepeticoes(str);

    printf(" %s\n", str);

    return 0;
}

