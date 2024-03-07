#include <stdio.h> 
int main() { 
	int a, b, div=0, quo=-1, rest, c, soma=0; 
	printf("X divido por Y\n");
	printf("Digite os valores de X e Y: ");
	scanf ("%d %d",&a,&b);
	while(a>=div){
		div+=b;
		quo+=1;
	}
	for(c=1; c<=quo;c++){
		soma+=b;
	}
	rest = a - soma;
	
	printf("Quociente=%d\n", quo);
	printf("Resto=%d\n", rest);
 
}
