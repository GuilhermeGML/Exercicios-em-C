#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int main(){
	FILE *arq1, *arq2, *arq3;
	arq1 = fopen("Arquivo1.txt","r");
	arq2 = fopen("Arquivo2.txt","r");
	arq3 = fopen("Arquivo3.txt","w");
	if (arq1 == NULL || arq2 == NULL || arq3 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char caractere;
    while ((caractere = fgetc(arq1)) != EOF) {
        if (isalpha(caractere)) {
			fwrite(&caractere, 1, 1, arq3);
        }
    }
    while ((caractere = fgetc(arq2)) != EOF) {
        if (isalpha(caractere)) {
			fwrite(&caractere, 1, 1, arq3);
        }
    }
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    
}
