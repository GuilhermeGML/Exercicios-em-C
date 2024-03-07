#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()
#include <ctype.h>

int main(){
	FILE *arq, *arq2;
	arq = fopen("Matriz.txt", "w");
	arq2 = fopen("MatrizBase.txt", "r");
	if(arq == NULL || arq2 == NULL){
		printf("Erro ao criar arquivo\n");
		exit(1);
	}
	int caracter;
	while((caracter = fgetc(arq2)) != EOF){
		
		fwrite(&caracter, 1, 1, arq);
	}
	fclose(arq);
    fclose(arq2);
	
}
