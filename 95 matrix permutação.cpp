#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define T 3
int main(){
	int mat[MAX][MAX], vl[MAX], vc[MAX];
	int i,j,cl=0, cc=0, tot;
	for(i=0;i<T;i++){
		for(j=0;j<T;j++){
			mat[i][j] = rand() % 2;
		}
	}
	for(i=0;i<T;i++){
		for(j=0;j<T;j++){
			printf("[%i][%i]=%d", i, j,mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<T;i++){
		for(j=0;j<T;j++){
			if(mat[i][j]==0){
				cl+=1;	
			}
			if(mat[j][i]==0){
				cc+=1;
			}
		}
		vl[i]=cl;
		vc[i]=cc;
		cl=cc=0;
	}
	printf("==========================\n");
	for(i=0;i<T;i++){
		if(vl[i]==vc[i]){
			tot+=1;
		}
	}
	if (tot == T){
		printf("E uma matriz de permutacao\n");
	} else{
		printf("Nao e uma matriz de permutacao\n");
	}
}
