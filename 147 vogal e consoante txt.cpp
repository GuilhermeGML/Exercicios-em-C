#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int main(){
	FILE *arq;
	arq = fopen("Vogais.txt", "r");
	char caractere;
    int vogais = 0, consoantes = 0;	
	if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while ((caractere = fgetc(arq)) != EOF) {
        if (isalpha(caractere)) {
            caractere = tolower(caractere); 
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }
    fclose(arq);

    printf("Número de vogais: %d\n", vogais);
    printf("Número de consoantes: %d\n", consoantes);

}
