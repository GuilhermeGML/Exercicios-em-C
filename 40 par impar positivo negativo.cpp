#include <stdio.h>
 
int main() {
 
    int c,n, contp=0, conti=0, contpos=0, contneg=0, zero; 
	for (c=1; c<=5; c++){
		scanf("%d",&n);
		//Pares e Impares
		if(n%2==0){
			contp +=1;
		}else{
			conti +=1;
		}
		//Positivo e Negativos
		if (n == 0){
			zero = 0;
		} else if(n>0){
			contpos +=1;
		} else if(n<0){
			contneg +=1;
		}
	}
	printf("%d valor(es) par(es)\n",contp);
	printf("%d valor(es) impar(es)\n",conti);
	printf("%d valor(es) negativo(s)\n",contneg);
	printf("%d valor(es) positivo(s)\n",contpos);
	
}
