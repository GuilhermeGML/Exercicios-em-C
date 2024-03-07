#include<stdio.h>
#include<string.h>
void TrocaOZero(char *str) {	
    for (int i = 0; str[i] != '\0'; i++) {
    	if(str[i] == 48){
    		str[i] = str[i]+1;
		}
    }
}

int main(){
	char palavra[100];
	printf("Digite uma numero binario: ");
	scanf("%s", palavra);
	TrocaOZero(palavra);
	printf("Numero com o 0 trocado por 1: %s", palavra);
}
