#include <stdio.h>
int main(){
	float h, p, s, pi;
	printf("Qual é o seu sexo? [m=1/f=0]");
	scanf("%f", &s);
	if (s == 1){
		printf("Peso = ");
		scanf("%f", &p);
		printf("Altura = ");
		scanf("%f", &h);
		pi = 72.7 * h - 58;
		if(pi > p){
			printf("Abaixo do peso");
		};
		if(pi == p){
			printf("Peso ideial");
		};
		if (pi < p){
			printf("Acima do peso");
		};
	} else{
	if (s == 0){
		printf("Peso = ");
		scanf("%f", &p);
		printf("Altura = ");
		scanf("%f", &h);
		pi = 62.1 * h - 44.7;
		if(pi > p){
			printf("Abaixo do peso");
		};
		if(pi == p){
			printf("Peso ideial");
		};
		if (pi < p){
			printf("Acima do peso");
		};
	}
}
}

