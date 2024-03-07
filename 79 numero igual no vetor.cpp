#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main(){
	int vet[MAX], i, c, num, t, p, ni=0, pos[MAX];
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vet[t];
	pos[t];
	for(i=0;i<=t;i++){
		vet[i] = rand() % 10;
	}	
	
	for(i=0;i<=t;i++){
		for(c=0;c<=t;c++){
			if(vet[i] == vet[c]){
				ni += 1;
			}
		}
	}
	if(ni>=1){
		printf("Ha Numeros Iguais\n");
	}else{
		printf("Nao ha numeros iguais\n");
	}
	
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
