#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define TAM 12
int main(){
	float mat[MAX][MAX], soma=0, di=0;
	int i,j;
	char opc[2];
	scanf("%s", &opc);
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			scanf("%f", &mat[i][j]);
			if(j>i){
				soma+= mat[i][j];
				di +=1;
			}
		}
	}
	if(opc[0] == 'S'){
		printf("%.1f\n", soma);
	} else{
		printf("%.1f\n", soma/di);
	}
}
