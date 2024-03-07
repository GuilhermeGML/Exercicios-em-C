#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(){
	int vetA[MAX], vetB[MAX], i , num, t, p, f_mensal=0;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vetA[t];
	vetB[t];
	for(i=0;i<=t;i++){
		vetA[i] = rand() % 10;
		vetB[i] = (rand() % 10)+1;
		f_mensal += vetA[i] * vetB[i];
	}
	for(i=0;i<=t;i++){
		printf("Quntidade[%i]=%d || Valor[%i]=%d\n", i, vetA[i], i, vetB[i]);
	}
	printf("O Faturamento Mensal foi de: RS%d\n", f_mensal);
	
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
