#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 19
int main(){
	int vet[MAX], i , num, t, soma=0, p, c;
	do{
	for(i=0;i<=MAX;i++){
		//printf("NUM=  ");
		//scanf("%d", &num);
		num = rand() % 10;
		vet[i] = num;
	}
	i=MAX;
	for(c=0;c<=MAX/2;c++){
		t = vet[c]-vet[i];
		soma += t*t;
		i--;
	}
	i=MAX;
	for(c=0;c<=MAX/2;c++){
		printf("V[%i]=%d V[%i]=%d\n",c, vet[c], i, vet[i]);
		i--;	
	}
	printf("Soma = %d\n", soma);
	soma=0;
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
