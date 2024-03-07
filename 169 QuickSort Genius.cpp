#include <stdio.h>

void Troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Particiona(int vet[], int inicio, int fim) {
    int pivo = vet[fim];
    int i = inicio - 1;

    for (int j = inicio; j <= fim - 1; j++) {
        if (vet[j] < pivo) {
            i++;
            Troca(&vet[i], &vet[j]);
        }
    }
    Troca(&vet[i + 1], &vet[fim]);
    return i + 1;
}

void QuickSort(int vet[], int inicio, int fim) {
    if (inicio < fim) {
        int indice_pivo = Particiona(vet, inicio, fim);

        QuickSort(vet, inicio, indice_pivo - 1);
        QuickSort(vet, indice_pivo + 1, fim);
    }
}

int main() {
    int vet[10] = {4, 2, 1, 5, 3, 9, 8, 7, 6, 0};
    int tamanho = sizeof(vet)/sizeof(vet[0]);

    QuickSort(vet, 0, tamanho - 1);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}

