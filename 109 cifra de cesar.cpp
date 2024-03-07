#include <stdio.h>
#include <string.h>
 
int main(){	
	int perg, n=1, pos, i;
	char frase[51], deco[51];
	scanf("%d", &perg);
	while(n<=perg){
		scanf("%s", &frase);
		scanf("%d", &pos);
		for(i=0; i<strlen(frase); i++){
        	if (frase[i] >= 'A' && frase[i] <= 'Z') {
            	deco[i] = ((frase[i] - 'A' - pos + 26) % 26) + 'A';
			}
		}
		deco[i] = '\0';
		printf("%s\n", deco);
		n++;
	}
}
