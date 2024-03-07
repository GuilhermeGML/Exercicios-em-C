#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int exp(int y, int x) {
    if (x == 1) {
        return y;
    } else {
        return y * exp(y, x-1);
    }
}

int main() {
    int res;
    res = exp(3, 2);
    printf("%d", res);
    return 0;
}

