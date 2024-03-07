#include <stdio.h>
 
int main() {
	int i;
	double num;
	double vet[100];
	scanf("%lf", &num);
	vet[0] = num;
	printf("N[0] = %.4lf\n", vet[0]);
	for(i=1; i<100; i++){
		vet[i] = vet[i-1]/2.0;
		printf("N[%i] = %.4lf\n", i, vet[i]);
	}
	
}
