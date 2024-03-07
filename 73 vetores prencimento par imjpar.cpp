#include <stdio.h>

int main() {
    int valores[15];
    int pares[5], impares[5];
    int i, j = 0, k = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &valores[i]);

        if (valores[i] % 2 == 0) {
            pares[j] = valores[i];
            j++;
        } else {
            impares[k] = valores[i];
            k++;
        }

        if (j == 5) {
            for (j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, pares[j]);
            }
            j = 0;
        }

        if (k == 5) {
            for (k = 0; k < 5; k++) {
                printf("impar[%d] = %d\n", k, impares[k]);
            }
            k = 0;
        }
    }

    for (i = 0; i < k; i++) {
        printf("impar[%d] = %d\n", i, impares[i]);
    }

    for (i = 0; i < j; i++) {
        printf("par[%d] = %d\n", i, pares[i]);
    }

    return 0;
}

