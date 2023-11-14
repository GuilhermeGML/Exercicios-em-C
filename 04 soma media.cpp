#include <stdio.h>
int main(){
	float n1, n2, soma, media;
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite um numero: ");
	scanf("%f", &n2);
	soma = n1 + n2;
	media = (n1 + n2)/2;
	printf("\n A soma e %f e a Media e %f", soma, media);
} 
