#include <stdio.h>
 
int main() {
	int n, c, imp;
	scanf("%d", &n);
	for (int c = 1; c <= n; c++) {
        if (c % 2 != 0) {
            printf("%d\n", c);
        }
    }
}

