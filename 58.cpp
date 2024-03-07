#include <stdio.h> 
#include <math.h>
int main() {
	int a, b, max_x = 0, max_y = 0, max_value = 0;
	printf("Digite dois numeros naturais: ");
	scanf("%d %d", &a, &b);
    for (int x = 0; x <= a; x++) {
        for (int y = 0; y <= b; y++) {
            int value = x*y - x*x + y;
            if (value > max_value) {
                max_x = x;
                max_y = y;
                max_value = value;
            }
        }
        printf("O par (x,y) que maximiza a expressao eh (%d,%d)\n", max_x, max_y);
	}
}
