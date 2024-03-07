#include <stdio.h>

void InsertSort(int n, int vet[]){
	int chave, j;
	for (int i=1; i<n; i++) {
        chave = vet[i];
        j = i - 1;

        while (j>=0 && vet[j]>chave) {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = chave;
    }
}

int main(){
	int vet[10], n=10;
	for(int x=0; x<n; x++){
		scanf("%d", &vet[x]);
	}
	
	InsertSort(n, vet);
    
    
    for (int y = 0; y < n; y++) {
        printf("%d ", vet[y]);
    }
}
