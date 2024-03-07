#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(){
	int vetA[MAX], vetB[MAX], i , num, t, soma=0, p, c, g;
	do{
	printf("Tamanho do Vetor [Max]=%i ", MAX);
	scanf("%d", &t);
	vetA[t];
	vetB[t];
	for(i=0;i<=t;i++){
		vetA[i] = rand() % 100;
	}
	for(i=0;i<=t;i++){
		for(c=i+1;c<=t;c++){
			if(vetA[i] == vetA[c]){
				for(g=c; g<=t-1; g++){
					vetA[g]=vetA[g+1];
				}
				t--;
				c--;
			}
		}
	}
	printf("Vetor resultante:\n");
    for (i = 0; i < t; i++) {
        printf("%d ", vetA[i]);
    }
    printf("\n");
	

	printf("Deseja repetir [1-S][0-N] ");
	scanf("%d", &p);
	} while(p==1);
	
}
