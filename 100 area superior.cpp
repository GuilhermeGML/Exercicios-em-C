 #include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define TAM 12
int main(){
	double mat[MAX][MAX], soma=0, 
	int di=0;
	int i,j, x=1,y=11;
	char opc[2];
	scanf("%s", &opc);
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			scanf("%lf", &mat[i][j]);
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=x; j<y;j++)
		{
			sum += M[i][j];
			count += 1;
		}
		y -= 1;
		x += 1;
	}
	if(opc[0] == 'S'){
		printf("%.1lf\n", soma);
	} else{
		printf("%.1lf\n", soma/di);
	}
}
