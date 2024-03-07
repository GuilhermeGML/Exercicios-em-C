#include <stdio.h>
 
int main() {
	int vet[1000], num, i, n;
	scanf("%d", &num);
	for(i=0; i<1000; i++){
		vet[i] = i % num;
		printf("N[%i] = %d\n", i, vet[i]);
	}
	
}
