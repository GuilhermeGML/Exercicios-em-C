#include <stdio.h>

int main() {
    int codigo;
    
    printf(" Codigo do produto: ");
    scanf("%d", &codigo);
    
    if (codigo == 1) {
        printf("Classificacao: Alimento nao-perecivel\n");
    } else if (codigo >= 2 && codigo <= 4) {
        printf("Classificacao: Alimento perecivel\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Classificacao: Vestuario\n");
    } else if (codigo == 7) {
        printf("Classificacao: Higiene pessoal\n");
    } else if (codigo >= 8 && codigo <= 15) {
        printf("Classificacao: Limpeza e utensilios domesticos\n");
    } else {
        printf("Classificao: Invalido\n");
    }

}
