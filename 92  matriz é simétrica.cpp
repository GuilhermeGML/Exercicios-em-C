#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define TAM 3
int main(){
	int mat[MAX][MAX],matA[MAX][MAX],i,j,temp;
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
	printf("Mudanca Diagonal\n");
	
	for(j=0;j<TAM;j++){
		for(i=0;i<TAM;i++){
			printf("[%i][%i]=%d ", i, j,mat[i][j]);
		}
		printf("\n");
	}
}
