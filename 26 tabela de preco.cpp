#include <stdio.h>

int main(){
	int cod;
	float quant, tot;
	scanf("%d %f", &cod, &quant);
	if (cod == 1){
		tot = quant * 4.0;
		printf("Total: R$ %.2f\n", tot);
	}
	if (cod == 2){
		tot = quant * 4.5;
		printf("Total: R$ %.2f\n", tot);
	}
	if (cod == 3){
		tot = quant * 5.0;
		printf("Total: R$ %.2f\n", tot);
	}
	if (cod == 4){
		tot = quant * 2.0;
		printf("Total: R$ %.2f\n", tot);
	}
	if (cod == 5){
		tot = quant * 1.5;
		printf("Total: R$ %.2f\n", tot);
	}
}
