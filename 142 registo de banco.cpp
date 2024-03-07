#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro{
	int id;
	int numConta;
	char nome[20];
	int saldo;
};

void Cadastro(struct Registro reg[], FILE *arq){
	int i=0, perg;
	do{
		printf("Registro Bancario\n");
		printf("Numero da conta: ");
		scanf("%d", &reg[i].numConta);
		reg[i].id = reg[i].numConta;
		printf("Nome: ");
		scanf("%s", reg[i].nome);
		printf("Saldo: ");
		scanf("%d", &reg[i].saldo);
		i++;
		printf("Deseja cadastrar mais 1 cliete? [S-1|N-0]\n");
		scanf("%d", &perg);
	}while(perg!=0);	
	fwrite(reg, sizeof(struct Registro), i, arq);
	fclose(arq);
}

int main(){
	struct Registro reg[100];
	FILE *arq;
	arq = fopen("Conta Bancaria.dat", "wb");
	if(arq== NULL){
		printf("Erro ao criar o arquivo 'Conta Bancaria.dat'.\n");
        exit(1);
	}
	Cadastro(reg, arq);
}
