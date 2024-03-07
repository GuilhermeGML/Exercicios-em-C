#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define TAM 4

int main() {
    int mat[MAX][MAX], i, j, num, count;
    int latino = 1;

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;
    mat[0][3] = 4;
    mat[1][0] = 2;
    mat[1][1] = 3;
    mat[1][2] = 4;
    mat[1][3] = 1;
    mat[2][0] = 4;
    mat[2][1] = 1;
    mat[2][2] = 2;
    mat[2][3] = 3;
    mat[3][0] = 3;
    mat[3][1] = 4;
    mat[3][2] = 1;
    mat[3][3] = 2;

    printf("Matriz\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("[%i][%i]=%d ", i, j, mat[i][j]);
        }
        printf("\n");
    }

    // Verificar linhas
    for (i=0; i<TAM; i++) {
        for (num=1; num<TAM; num++) {
            count = 0;
            for (j=0; j<TAM; j++) {
                if (mat[i][j] == num) {
                    count++;
                }
            }
            if (count != 1) {
                latino = 0;
                break;
            }
        }
    }

    // Verificar colunas
    for (j=0; j<TAM; j++) {
        for (num=1; num<=TAM; num++) {
            count = 0;
            for (i=0; i<TAM; i++) {
                if (mat[i][j] == num) {
                    count++;
                }
            }
            if (count != 1) {
                latino = 0;
                break;
            }
        }
    }

    if (latino==1) {
        printf("E um quadrado latino\n");
    } else {
        printf("Nao e um quadrado latino\n");
    }
}

