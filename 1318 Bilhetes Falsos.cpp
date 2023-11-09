#include <stdio.h>

int main(){
	int nbi, npe, bilhef=0, aux=0;
	int vet[100];
	do{
		scanf("%d %d", &nbi, &npe);
		if(nbi==0 && npe==0){
			break;
		}
		for(int i=0; i<npe; i++){
			scanf("%d", &vet[i]);
		}
		for(int i=0; i<npe-1; i++){
			for(int j=i+1; j<npe; j++){
				if(vet[i] == vet[j]){
					bilhef++;
					break;
				}
			}
		}
		printf("%d\n", bilhef);
	} while(nbi!=0 && npe!=0);
	
}
