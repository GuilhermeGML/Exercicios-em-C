#include <stdio.h>

void ShellSort(int n, int vet[]){
	int i, j, temp;
    int gap;
    
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >= 0 && vet[j] > vet[j + gap]; j -= gap) {
                temp = vet[j];
                vet[j] = vet[j + gap];
                vet[j + gap] = temp;
            }
        }
    }
}

int main(){
	int vet[10], n=10;
	for(int x=0; x<n; x++){
		scanf("%d", &vet[x]);
	}
	
	ShellSort(n, vet);
	
	for(int y=0; y<n; y++){
		printf("%d ", vet[y]);
	}
}
