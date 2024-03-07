#include<stdio.h>
#include<string.h>
int ContagemDeUm(char *str) {
	int num1;	
    for (int i = 0; str[i] != '\0'; i++) {
    	if(str[i] == 49){
    		num1++;
		}
    }
    
	return num1;
}

int main(){
	char palavra[100];
	int tot;
	printf("Digite uma numero binario: ");
	scanf("%s", palavra);
	tot = ContagemDeUm(palavra);
	printf("Ha um total de %d numeros 1", tot);
}
