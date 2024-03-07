#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main(){
	int mat[MAX][MAX],i,j,x;
	x=2
	for(i=0;i<=x;i++){
		for(j=0;j<=x;j++){
			mat[i][j] = rand() % 10;
		}
	}
	for(i=0;i<=x;i++){
		for(j=0;j<=x;j++){
			printf("[%i][%i]=%d", i, j,mat[i][j]);
		}
		printf("\n");
	}	
}
