#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main(){
	int vet[MAX], i , num, t, soma=0, p;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vet[t];
	for(i=0;i<=t;i++){
		vet[i] = rand() % 100;
		soma+=vet[i];
	}
	for(i=0;i<=t;i++){
		printf("V[%i]=%d\n", i, vet[i]);
	}
	printf("A media foi de %d\n", soma/(t+1));
	soma=0;
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
