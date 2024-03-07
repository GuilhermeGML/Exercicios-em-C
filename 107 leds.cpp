#include <stdio.h>
#include <string.h>
int main(){
	int perg, a, j, soma=0;
	char led[15];
	scanf("%d", &perg);
	for(a=1; a<=perg;a++){
		scanf("%s", led);
		for(j=0; j<strlen(led); j++){
			if (led[j] - '0' == 1) {
				soma += 2;
			} else if (led[j] - '0' == 2 || led[j] - '0' == 3 || led[j] - '0' == 5) {
				soma += 5;
			} else if (led[j] - '0' == 4) {
				soma += 4;
			} else if (led[j] - '0' == 6 || led[j] - '0' == 9 || led[j] - '0' == 0) {
				soma += 6;
			} else if (led[j] - '0' == 7) {
				soma += 3;
			} else if (led[j] - '0' == 8) {
				soma += 7;
			} 
		}
		printf("Soma = %d\n", soma);
		soma = 0;	
	}
}
