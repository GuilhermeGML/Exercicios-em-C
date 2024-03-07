#include <stdio.h>
int main(){
	int caso, crianca, velo_crianca, velo_palhaco=0, velo[50],i, j;
	scanf("%d", &caso);
	for(i=0; i<caso; i++){
		scanf("%d", &crianca);
		for(j=0; j<crianca; j++){
			scanf("%d", &velo_crianca);
			if(velo_crianca > velo_palhaco){
				velo_palhaco = velo_crianca;
			}
		}
		velo[i]=velo_palhaco;
	}
	for(i=0; i<caso; i++){
		printf("Case %d: %d\n",i+1,velo[i]);
	}
}

