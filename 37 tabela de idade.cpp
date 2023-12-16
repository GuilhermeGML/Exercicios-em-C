#include <stdio.h>

int main() {
    int i;
    
    printf(" Idade: ");
    scanf("%d", &i);
    
    if (i>=0 && i<=2) {
        printf("Recem-nascido\n");
    } else if (i >= 3 && i <= 11) {
        printf("Crianca\n");
    } else if (i >= 12 && i <= 19) {
        printf("Adolescente\n");
    } else if (i >= 20 && i <= 55) {
        printf("Adulto\n");
    } else if (i > 55) {
        printf("Idose\n");
    }
}
