#include <stdio.h>

int main() {
    int n, resul=1, c, fat=1, i;
    float resultado = 1.0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
	printf("1-\n");
    for (int i = 1; i <= n; i++) {
    	fat *= i;
        printf("+ x^%d/%d\n", i, fat);
    }

}

