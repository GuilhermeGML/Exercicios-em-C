#include <stdio.h>

int main() {
    int dado1, dado2;

    printf("Possibilidades:\n");

    for (dado1 = 1; dado1 <= 6; dado1++) {
        dado2 = 7 - dado1;
        if (dado2 >= 1 && dado2 <= 6) {
            printf("%d + %d = 7\n", dado1, dado2);
        }
    }

}

