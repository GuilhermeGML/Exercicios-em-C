#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main(){
	int vetA[MAX], i , num, t, soma=0, p, c, temp;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vetA[t];
	for(i=0;i<=t;i++){
		vetA[i] = rand() % 10;
	}
	for(i=0;i<=t;i++){
		for(c=0;c<=t-i;c++){
			if(vetA[c]< vetA[c+1]){
				temp = vetA[c];
				vetA[c]= vetA[c+1];
				vetA[c+1] = temp;
			}
		}	
	}
	printf("Vetor ordenado em ordem crescente: ");
    for (i = 0; i < t; i++) {
        printf("%d ", vetA[i]);
    }
    printf("\n");
	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
