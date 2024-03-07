#include <stdio.h>

int BuscaBin(int x, int t, int vet[]){
	int es, di, meio;
	es=0;
	di=t-1;
	while(es <= di){
		meio=es + (di-es)/2;
		if(vet[meio]==x){
			return meio;
		}
		if(vet[meio]<x){
			es=meio+1;
		} else{
			di=meio-1;
		}
	}
	return -1;
	
}

int main(){
	int t=9, vet[9], x, pos;
	for(int i=0; i<t; i++){
		scanf("%d", &vet[i]);
	}
	scanf("%d", &x);
	pos = BuscaBin(x, t, vet);
	if(pos != -1){
		printf("%d esta na pos %d", x, pos);
	} else{
		printf("%d nao esta no vetor", x);
	}
	
}
