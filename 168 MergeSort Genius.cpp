#include <stdio.h>

void Merge(int vet[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int left[n1], right[n2];

    for (i = 0; i < n1; i++)
        left[i] = vet[inicio + i];
    for (j = 0; j < n2; j++)
        right[j] = vet[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            vet[k] = left[i];
            i++;
        } else {
            vet[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vet[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        vet[k] = right[j];
        j++;
        k++;
    }
}

void MergeSort(int vet[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        MergeSort(vet, inicio, meio);
        MergeSort(vet, meio + 1, fim);

        Merge(vet, inicio, meio, fim);
    }
}

int main() {
    int vet[10] = {4, 2, 1, 5, 3, 9, 8, 7, 6, 0};
    int tamanho = sizeof(vet)/sizeof(vet[0]);

    MergeSort(vet, 0, tamanho - 1);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}

