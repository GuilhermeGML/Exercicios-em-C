#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define TAM 2
int main(){
	int mat[MAX][MAX],matA[MAX][MAX],i,j,x,y;
	for(i=0;i<=TAM;i++){
		for(j=0;j<=TAM;j++){
			mat[i][j] = rand() % 10;
		}
	}
	for(i=0;i<=TAM;i++){
		for(j=0;j<=TAM;j++){
			printf("[%i][%i]=%d", i, j,mat[i][j]);
		}
		printf("\n");
	}
	printf("=====================\n");
	printf("Mudança Linha X pela Y: ");
	scanf("%d %d",&x, &y);
	
	for(i=0;i<=TAM;i++){
		for(j=0;j<=TAM;j++){
			if(i==x){
				matA[i][j] = mat[y][j];
			} else if(i==y){
				matA[i][j] = mat[x][j];
			} else{
				matA[i][j] = mat[i][j];
			}
		}
	}
	
	for(i=0;i<=TAM;i++){
		for(j=0;j<=TAM;j++){
			printf("[%i][%i]=%d", i, j,matA[i][j]);
		}
		printf("\n");
	}
}
