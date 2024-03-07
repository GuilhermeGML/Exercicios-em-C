#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro1{
	int telefone;
	char cidade[50];
	int tempoDeLigacao;
};

struct Registro2{
	int telefone;
	char cidade[50];
	int tempoDeLigacao;
};


void Cadastro1(struct Registro1 reg[], int tam){
	for(int i=0; i<tam; i++){
		printf("Registro Telefonico %d\n", i+1);
		printf("Telefone: ");
		scanf("%d", &reg[i].telefone);
		printf("Cidade: ");
		scanf("%s", reg[i].cidade);
		printf("Tempo de Ligacao: ");
		scanf("%d", &reg[i].tempoDeLigacao);
	}
}

void Cadastro2(struct Registro2 reg[], int tam){
	for(int i=0; i<tam; i++){
		printf("Registro Telefonico %d\n", i+1);
		printf("Telefone: ");
		scanf("%d", &reg[i].telefone);
		printf("Cidade: ");
		scanf("%s", reg[i].cidade);
		printf("Tempo de Ligacao: ");
		scanf("%d", &reg[i].tempoDeLigacao);
	}
}

void TelefoneComuns(struct Registro1 reg1[], int tam1, struct Registro2 reg2[], int tam2){
	printf("Telefones nas cidades em comum:\n");
    for (int i = 0; i < tam1; i++) {
        for (int j = 0; j < tam2; j++) {
            if (strcmp(reg1[i].cidade, reg2[j].cidade) == 0) {
				printf("%d\n", reg1[i].telefone);
			}
        }
    }
}

void SalvarRegistros(struct Registro1 reg1[], int tam1, struct Registro2 reg2[], int tam2) {
    FILE *arquivo1 = fopen("RegistrosTelefonico1.dat", "wb");
    FILE *arquivo2 = fopen("RegistrosTelefonico2.dat", "wb");

    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro na abertura dos arquivos.\n");
        return;
    }

    fwrite(reg1, sizeof(struct Registro1), tam1, arquivo1);
    fwrite(reg2, sizeof(struct Registro2), tam2, arquivo2);

    fclose(arquivo1);
    fclose(arquivo2);
}

void CarregarRegistros(struct Registro1 reg1[], int *tam1, struct Registro2 reg2[], int *tam2) {
    FILE *arquivo1 = fopen("RegistrosTelefonico1.dat", "rb");
    FILE *arquivo2 = fopen("RegistrosTelefonico2.dat", "rb");

    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro na abertura dos arquivos.\n");
        return;
    }

    fread(reg1, sizeof(struct Registro1), *tam1, arquivo1);
    fread(reg2, sizeof(struct Registro2), *tam2, arquivo2);

    fclose(arquivo1);
    fclose(arquivo2);
}




int main(){
	struct Registro1 reg1[100];
	struct Registro2 reg2[100];
	int tamanho1, tamanho2;

	printf("Quantos telefones deseja registar no 1 arquivo: ");
	scanf("%d", &tamanho1);
	Cadastro1(reg1, tamanho1);
	
	printf("Quantos telefones deseja registar no 2 arquivo: ");
	scanf("%d", &tamanho2);
	Cadastro2(reg2, tamanho2);
	
	SalvarRegistros(reg1, tamanho1, reg2, tamanho2);
	
	system("cls");
	
    printf("Carregando registros...\n");
    CarregarRegistros(reg1, &tamanho1, reg2, &tamanho2);
    
    system("cls");
    
	TelefoneComuns(reg1, tamanho1, reg2, tamanho2);
	
	
}
