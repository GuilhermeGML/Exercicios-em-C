#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(){
	int vetA[MAX], i , num, t, soma=0, p;
	float vetB[MAX];
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vetA[t];
	vetB[t];
	for(i=0;i<=t;i++){
		vetA[i] = rand() % 10;
		if(i%2==0){
			vetB[i]=vetA[i]/2.0;
		}else{
			vetB[i]=vetA[i]*3;
		}
	}
	for(i=0;i<=t;i++){
		printf("VetA[%i]=%d || VetB[%i]=%.1f\n", i, vetA[i], i, vetB[i]);
	}
	
	
	soma=0;
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
