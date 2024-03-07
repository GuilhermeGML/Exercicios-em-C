#include <stdio.h>

void SelectSort(int n, int vet[]){
	// Menor para Maior	
	int aux;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(vet[j]<vet[i]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
}

void SelectSortR(int n, int vet[]){
	// Maior para Menor	
	int aux;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(vet[j]>vet[i]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
}

int main(){
	int vet[10], n=10;
	for(int x=0; x<n; x++){
		scanf("%d", &vet[x]);
	}
	printf("\n Menor para Maior \n");
	SelectSort(n, vet);
	for(int y=0; y<n; y++){
		printf("%d ", vet[y]);
	}
	printf("\n Maior para Menor \n");
	SelectSortR(n, vet);
	for(int y=0; y<n; y++){
		printf("%d ", vet[y]);
	}
	
}
