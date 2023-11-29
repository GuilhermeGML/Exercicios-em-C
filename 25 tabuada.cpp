#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Tabuada do %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}


