#include <stdio.h>
#define MAX 15
int main(){
	int vet[MAX], i , num, t, soma=0, p;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vet[t];
	for(i=0;i<=t;i++){
		scanf("%d", &num);
		vet[i] = num;
		soma+=num;
	}
	for(i=0;i<=t;i++){
		printf("V[%i]=%d\n", i, vet[i]);
	}
	printf("A soma foi de %d\n", soma);
	soma=0;
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
