#include <stdio.h>

int main() {
    int a;
    
    printf(" Angulo: ");
    scanf("%d", &a);
    
    if (a>=0 && a<=90) {
        printf("1\n");
    } else if (a >= 90 && a <= 180) {
        printf("2\n");
    } else if (a >= 180 && a <= 270) {
        printf("3\n");
    } else if (a >= 270 && a <= 360) {
        printf("4\n");
    }else if (a <= 0 && a >= -90) {
        printf("1\n");
    } else if (a <= -90 && a >= -180) {
        printf("2\n");
    } else if (a <= -180 && a>= -270) {
        printf("3\n");
    }else if (a <= -270 && a>= -360) {
        printf("4\n");
}
}
