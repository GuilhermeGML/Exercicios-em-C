#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main(){
	int vet[MAX], vetb[MAX], i , num, t, soma=0, p;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vet[t];
	vetb[t];
	for(i=0;i<=t;i++){
		vet[i] = rand() % 10;
		vetb[i] = rand() % 10;
		soma+= vet[i] * vetb[i];
	}
	for(i=0;i<=t;i++){
		printf("V[%i]=%d || Vb[%i]=%d\n", i, vet[i], i, vetb[i]);
	}
	printf("A Produto Escalar foi de %d\n", soma);
	soma=0;
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
