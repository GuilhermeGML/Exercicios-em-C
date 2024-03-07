#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Cadastro{
	int numeroDaConta;
	char nomeDoCliente[50];
	int saldo;
	int ultimaOPdia;
	int ultimaOPmes;
	int ultimaOPano;	
};

void Registro(struct Cadastro cadastro[], int tam){
	for (int i=0; i<tam; i++){
		printf("Registo Cliente %d\n", i+1);
		printf("Numero da Conta: ");
		scanf("%d", &cadastro[i].numeroDaConta);
		printf("Nome do Cliente: ");
		scanf("%s", cadastro[i].nomeDoCliente);
		printf("Saldo: ");
		scanf("%d", &cadastro[i].saldo);
		printf("Dia da Operacao: ");
		scanf("%d %d %d", &cadastro[i].ultimaOPdia,
					&cadastro[i].ultimaOPmes,
					&cadastro[i].ultimaOPano);
	}
	
}

void Consultar(struct Cadastro cadastro[], int reg){
	printf("Registo Cliente %d\n", reg);
	printf("Numero da Conta: %d\n", cadastro[reg-1].numeroDaConta);
	printf("Nome do Cliente: %s\n", cadastro[reg-1].nomeDoCliente);
	printf("Saldo: %d\n", cadastro[reg-1].saldo);
	printf("Dia da Operacao: %d %d %d\n", 
			cadastro[reg-1].ultimaOPdia,
			cadastro[reg-1].ultimaOPmes,
			cadastro[reg-1].ultimaOPano);
}

int main(){
	FILE *arquivos;
	arquivos = fopen("Registros.dat", "wb");
	if(arquivos == NULL){
		printf ("Erro na abertura do arquivo.");
 		exit (1);
	}
	
	int quantidadeDeRegistos, numeroRegistro;
	struct Cadastro cadastro[quantidadeDeRegistos];
	printf("Quantas pessoas deseja Cadastrar: ");
	scanf("%d", &quantidadeDeRegistos);
	
	Registro(cadastro, quantidadeDeRegistos);
	
	fwrite(cadastro, sizeof(struct Cadastro), quantidadeDeRegistos, arquivos);
	
	fclose(arquivos);
	
	arquivos = fopen("Registros.dat", "rb");
	if(arquivos == NULL){
		printf ("Erro na abertura do arquivo.");
 		exit (1);
	}
	
	printf("Qual Registro deseja Consultar: ");
	scanf("%d", &numeroRegistro);
	
	Consultar(cadastro, numeroRegistro);
	
	fclose(arquivos);
}
