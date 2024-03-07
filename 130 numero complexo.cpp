#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Complexo {
    int a;
    int b;
};

void Soma(struct Complexo i1, struct Complexo i2) {
    int somaA = i1.a + i2.a;
    int somaB = i1.b + i2.b;
    printf("%d + %di\n", somaA, somaB);
}

void Subtracao(struct Complexo i1, struct Complexo i2) {
    int subA = i1.a - i2.a;
    int subB = i1.b - i2.b;
    printf("%d + %di\n", subA, subB);
}

void Multiplicacao(struct Complexo i1, struct Complexo i2) {
    int multA = i1.a * i2.a - i1.b * i2.b;
    int multB = i1.a * i2.b + i1.b * i2.a;
    printf("%d + %di\n", multA, multB);
}

void Divisao(struct Complexo i1, struct Complexo i2) {
    int divA = (i1.a * i2.a + i1.b * i2.b) / (i2.a * i2.a + i2.b * i2.b);
    int divB = (i1.b * i2.a - i1.a * i2.b) / (i2.a * i2.a + i2.b * i2.b);
    printf("%d + %di\n", divA, divB);
}

void Menu() {
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    printf("5-Alterar os Numeros\n");
    printf("6-Sair\n");
}

int main() {
    int op;
    struct Complexo i1, i2;

    printf("1 - Parte inteira: ");
    scanf("%d", &i1.a);
    printf("1 - Parte imaginaria: ");
    scanf("%d", &i1.b);
    printf("2 - Parte inteira: ");
    scanf("%d", &i2.a);
    printf("2 - Parte imaginaria: ");
    scanf("%d", &i2.b);
	system("cls");
    do {
        Menu();
        printf("Qual operacao deseja fazer: ");
        scanf("%d", &op);
		system("cls");
        switch (op) {
            case 1:
                Soma(i1, i2);
                break;
            case 2:
                Subtracao(i1, i2);
                break;
            case 3:
                Multiplicacao(i1, i2);
                break;
            case 4:
                Divisao(i1, i2);
                break;
            case 5:
                printf("1 - Parte inteira: ");
                scanf("%d", &i1.a);
                printf("1 - Parte imaginaria: ");
                scanf("%d", &i1.b);
                printf("2 - Parte inteira: ");
                scanf("%d", &i2.a);
                printf("2 - Parte imaginaria: ");
                scanf("%d", &i2.b);
                break;
            case 6:
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (op != 6);

    return 0;
}

