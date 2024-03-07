#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int main(){
	FILE *arq;
	arq = fopen("Conversor.txt", "w");
	char caractere;
	int primeiraLetra=1;
	if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while ((caractere = getchar()) != EOF) {
        if (primeiraLetra) {
            printf("%c", toupper(caractere)); 
            primeiraLetra = 0;
        } else {
            printf("%c", tolower(caractere));  
        }

        if (caractere == '.' || caractere == '!' || caractere == '?' || -caractere == ' ' || caractere == '\n') {
            primeiraLetra = 1;  
        }
    }

    fclose(arq);

}
