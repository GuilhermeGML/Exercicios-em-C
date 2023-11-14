#include <stdio.h>
int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("\nO numero e %d", num);
	printf("\nO endereco e %x", &num);
}