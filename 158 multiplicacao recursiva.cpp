#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int mult(int y, int x) {
    if (x == 0) {
        return 0;
    } else {
        return y + mult(y, x-1);
    }
}

int main() {
    int res;
    res = mult(3, 2);
    printf("%d", res);
    return 0;
}

