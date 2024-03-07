#include <stdio.h>

void BubbleSort(int n, int vet[]){
	int aux;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(vet[j]> vet[j+1]){
				aux=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=aux;
			}
		}
	}
}

int main(){
	int vet[10], n=10;
	for(int x=0; x<n; x++){
		scanf("%d", &vet[x]);
	}
	
	BubbleSort(n, vet);
	
	for(int y=0; y<n; y++){
		printf("%d ", vet[y]);
	}
}


