#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro{
	int chave;
	char info[20];
	int data;
};

void Cadstro(struct Registro reg[], FILE *arq, FILE *arqC){
	int i=0, perg;
	do{
		printf("Registro FONTE\n");
		printf("Chave: ");
		scanf("%d", &reg[i].chave);	
		printf("Infotmacao: ");
		scanf("%s", reg[i].info);	
		printf("Data: ");
		scanf("%d", &reg[i].data);	
		i++;
		printf("Deseja cadastrar mais 1 cliete? [S-1|N-0]\n");
		scanf("%d", &perg);
	}while(perg!=0);
	fwrite(reg, sizeof(struct Registro), i, arq);
	fwrite(reg, sizeof(struct Registro), i, arqC);
	fclose(arq);
	fclose(arqC);
}

int main(){
	struct Registro reg[20];
	FILE *arq,*arqC;
	arq= fopen("Fonte.dat", "wb");
	arqC= fopen("FonteNova.dat", "wb");
	if(arq== NULL || arqC== NULL){
		printf("Erro ao criar o arquivo.\n");
        exit(1);
	}
	Cadstro(reg, arq, arqC);
}
