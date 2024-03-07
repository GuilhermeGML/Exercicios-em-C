#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int main(){
	FILE *arq;
	arq = fopen("Contador de tudo.txt", "r");
	if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char caractere;
	int nLinhas=1, caracter=0, palavra=1;
    
    while ((caractere = fgetc(arq)	) != EOF) {
        if (isalpha(caractere)){
        	caracter+=1;
		}
		if(caractere == ' '|| caractere == '\n'){
			palavra+=1;
		}
        if (caractere == '\n') {
            nLinhas += 1;  
        }
    }
    
    printf("Caracteres==%d\n", caracter);
    printf("Palavra==%d\n", palavra);
    printf("Linhas==%d\n", nLinhas);

    fclose(arq);

}
