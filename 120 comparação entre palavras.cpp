#include<stdio.h>
#include<string.h>
int comparar(char *str1, char *str2) {
	int comp, p1, p2;	
    for (int i = 0; str1[i] != '\0'; i++) {
    	p1++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
    	p2++;
    }
    if(p1 > p2){
    	comp = -1;
	} else if(p1 < p2){
		comp = 1;
	} else{
		comp = 0;
	}
	return comp;
}

int main() {
    char palavra1[100];
    char palavra2[100];
    int comp;
    printf("Digite uma string: ");
    scanf("%s", palavra1);
    printf("Digite uma string: ");
    scanf("%s", palavra2);
    
    comp = -comparar(palavra1,palavra2);
    
    if(comp > 0){
    	printf("A segunda palavra e maior");
	} else if(comp < 0){
		printf("A primeira palavra e maior");
	} else{
		printf("As palavras sao iguais");
	}
    
    
    return 0;
}
