#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(){
	int vet[MAX], i , num, t, soma=0, p, acima_media=0, abaixo_media=0;
	int amp, pam;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vet[t];
	for(i=0;i<=t;i++){
		vet[i] = rand() % 10;
		if(vet[i] >= 5){
			acima_media+=1;
		}else{
			abaixo_media+=1;
		}
		soma+= vet[i];
	}
	for(i=0;i<=t;i++){
		printf("V[%i]=%d\n", i, vet[i]);
	}
	amp = (acima_media*100)/(t+1);
	pam = (abaixo_media*100)/(t+1);
	
	printf("A Media foi de %d\n", soma/(t+1));
	printf("Alunos acima da media= %d Percentual=%d\n", acima_media, amp);
	printf("Alunos abixo da media= %d Percentual=%d\n", abaixo_media, pam);
	
	soma=0;
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
