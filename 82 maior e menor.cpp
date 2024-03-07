#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(){
	int vet[MAX], i , num, t, p, maior=0, menor=11;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vet[t];
	for(i=0;i<=t;i++){
		vet[i] = rand() % 10;
		if(vet[i] > maior){
			maior = vet[i];
		}else if(vet[i] < menor){
			menor = vet[i];
		}
	}
	for(i=0;i<=t;i++){
		printf("V[%i]=%d\n", i, vet[i]);
	}
	
	printf("O Maior foi de %d\n", maior);
	printf("O Menor foi de %d\n", menor);
	maior=0;
	menor=11;
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
}
