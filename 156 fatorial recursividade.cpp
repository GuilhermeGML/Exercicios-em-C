#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        
        return n * fatorial(n - 1);
    }
}

int main() {
    int num = 5;
    int resultado = fatorial(num);
    printf("O fatorial de %d e %d\n", num, resultado);
    return 0;
}
