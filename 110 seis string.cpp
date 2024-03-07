#include <stdio.h>
#include <string.h>
int main(){
	char frase[82], test[82];
	int c, soma=0, maior, n=1, pos;
	scanf("%s", &frase);
	while(n<=5){
		scanf("%s", &test);
		for(c=0; c<strlen(frase); c++){
			if(frase[c]==test[c]){
				soma++;
			}	
		}	
		if(soma> maior){
			maior = soma;
			pos = n;
		}
		n++;
		soma = 0;
	}
	printf("%d", pos);
}
