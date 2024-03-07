#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main(){
	int vet[MAX], i;
	for(i=0; i<=MAX; i++){
		vet[i] =(rand() % (350-120+1))+120;
		printf("Vet[%i]=%d\n", i, vet[i]);
	}
	
}
