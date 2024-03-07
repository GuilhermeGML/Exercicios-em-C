#include <stdio.h>
#include <string.h>

int main() {
    int digito_falho;
    char numero_contrato[101];

    while (1) {
        scanf("%d %s", &digito_falho, numero_contrato);

        if (digito_falho == 0 && strcmp(numero_contrato, "0") == 0) {
            break; 
        }

        int i;
        char numero_corrigido[101];
        int j = 0;

        for (i = 0; i < strlen(numero_contrato); i++) {
            if (numero_contrato[i] - '0' != digito_falho) {
                numero_corrigido[j] = numero_contrato[i];
                j++;
            }
        }

        numero_corrigido[j] = '\0';

        if (strlen(numero_corrigido) == 0) {
            printf("0\n");
        } else {
            printf("%s\n", numero_corrigido);
        }
    }

    return 0;
}

