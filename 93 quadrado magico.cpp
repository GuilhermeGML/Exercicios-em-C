#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define TAM 3
int main(){
	int mat[MAX][MAX],somal=0, somac=0, somad=0, vet[(2*TAM) +2];
	int i, j, x, c, temp, var=0;
	x=(2*TAM)+2;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			mat[i][j] = rand() % 10;
		}
	}
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("[%i][%i]=%d ", i, j,mat[i][j]);
		}
		printf("\n");
	}
	printf("=====================\n");
	printf("Quadrado Mágico\n");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			somal += mat[i][j];
			if (i==j){
				somad += mat[i][j];
				vet[(2*TAM)] = somad;
			}
		}
		vet[i] = somal;
		somal=0;
	}	
	somad=0;
	for(j=0;j<TAM;j++){
		for(i=0;i<TAM;i++){
			somac += mat[i][j];
			if (i + j == TAM - 1) {
                somad += mat[i][j];
                vet[(2*TAM)+1] = somad;
            }
		}
		vet[j+TAM] = somac;
		somac=0;
	}
		
	for(c=0; c<x; c++){
		printf("V[%i]=%d\n", c, vet[c]);
	}
	for(i=0;i<x;i++){
		if(vet[i]!=vet[i+1]){
			var +=1;
		}
	}
	if(var==0){
		printf("E cubo magico");
	} else{
		printf("Nao e cubo magico");
	}
}
