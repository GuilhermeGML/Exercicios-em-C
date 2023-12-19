#include <stdio.h>
 
int main() {
	int x1, x2, c, soma, imp;
	scanf("%d", &x1);
	scanf("%d", &x2);
	for (int c = x2+1; c < x1; c++) {
        if (c % 2 != 0) {
            soma +=c;
        }
    }
    printf("%d", soma);
}

