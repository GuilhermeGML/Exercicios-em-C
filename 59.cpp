#include <stdio.h>
int main(){
	float c, f, cont, fa, cel;
	printf("Digite um valor em Fahrenheit: ");
	scanf("%f", &f);
	c= (f-32)*5/9;
	printf("%.2f F vale %.2f C\n", f, c);
	for(cont=50; cont<=150; cont+=5){
		fa = cont;
		cel= (fa-32)*5/9;
		printf("F=%.2f e C=%.2f\n", fa, cel);
	}
}
