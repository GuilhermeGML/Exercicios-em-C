#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int main(){
	FILE *arq, *arqC;
	arqC = fopen("Vogais trocadas.txt", "w");
	arq = fopen("Vogais originais.txt", "r");
	char caractere;
	if (arq == NULL || arqC == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while ((caractere = fgetc(arq)) != EOF) {
        if (isalpha(caractere)) {
            caractere = tolower(caractere); 
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                caractere = '*';
				fwrite(&caractere, 1, 1, arqC);
            } else{
            	fwrite(&caractere, 1, 1, arqC);
			}
        }
    }
    fclose(arq);
    fclose(arqC);

}
