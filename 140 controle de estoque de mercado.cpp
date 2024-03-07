#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro{
	int identificador;
	char nome[20];
	int quantidade;
	int custo;
};

void Cadastro(struct Registro reg[], int tam){
	for(int i=0; i<tam; i++){
		printf("Produto %d\n", i+1);
		printf("Identificacao: ");
		scanf("%d", &reg[i].identificador);
		printf("Nome: ");
		scanf("%s", reg[i].nome);
		printf("Quantidade: ");
		scanf("%d", &reg[i].quantidade);
		printf("Custo: ");
		scanf("%d", &reg[i].custo);
		printf("\n");
		fread(reg, sizeof(struct Registro), 100, arquivo);
	}
}

void Incluir(struct Registro reg[], int tam, int novos){
	for(int i=tam; i<(tam+novos); i++){
		printf("Produto %d\n", i+1);
		printf("Identificacao: ");
		scanf("%d", &reg[i].identificador);
		printf("Nome: ");
		scanf("%s", reg[i].nome);
		printf("Quantidade: ");
		scanf("%d", &reg[i].quantidade);
		printf("Custo: ");
		scanf("%d", &reg[i].custo);
		fread(reg, sizeof(struct Registro), 100, arquivo);
	}
}

void Remover(struct Registro reg[], int id, int tam){
    for(int i = 0; i < tam; i++){
        if(reg[i].identificador == id){
            for(int j = i; j < tam-1; j++){
                reg[j] = reg[j+1];
            }
            printf("Produto com identificador %d removido com sucesso.\n", id);
        }
    }
    printf("Nenhum produto encontrado com o identificador %d.\n", id);
}

void ConsultaPorNome(struct Registro reg[], char name[], int tam){
	for(int i=0; i<tam; i++){
		int res;
		res = strcmp(name, reg[i].nome);
		if(res == 0){
			printf("Produto %d\n", i+1);
			printf("Identificacao: %d\n", reg[i].identificador);
			printf("Nome: %s\n", reg[i].nome);
			printf("Quantidade: %d\n", reg[i].quantidade);
			printf("Custo: %d\n", reg[i].custo);
		}
	}
}

void GerarRelatorio(struct Registro reg[], int tam){
	int valorTot[100], lucro=0;
	for(int i=0; i<tam; i++){
		valorTot[i] = reg[i].quantidade * reg[i].custo;
		printf("Valor total pela venda do produto %d == %d\n", reg[i].identificador, valorTot[i]);
		lucro +=valorTot[i];
	}
	printf("Lucro Total: %d\n", lucro);
}
	
void Menu(){
	printf("1 - Incluir Novos Produtos\n");
	printf("2 - Remover Produtos\n");
	printf("3 - Consultar por nome\n");
	printf("4 - Valor total de venda\n");
	printf("5 - Sair\n");
}


int main(){
	struct Registro reg[100];
	int tam, opc, novos=0, id, tot=0;
	char nome[20];
	FILE *arquivo;
	arquivo = fopen("Resgistro da Loja.dat", "wb");
	if(arquivo == NULL){
		printf("Erro ao criar o arquivo 1");
        exit(1);
	}
	printf("Quantos podrutos deseja cadastrar? ");
	scanf("%d", &tam);
	tot+= tam;
	Cadastro(reg, tam);
	system("cls");
	Menu();
	scanf("%d", &opc);
	system("cls");
	switch(opc){
		case 1:
			printf("Quantos produtos novo deseja cadastrar: ");
			scanf("%d", &novos);
			tot +=novos;
			Incluir(reg, tot, novos);
		case 2:
			printf("Selecione o ID que deseja remover: ");
			scanf("%d", &id);
			Remover(reg, id, tot);
		case 3:
			printf("Nome do produto: ");
			scanf("%s", nome);
			ConsultaPorNome(reg, nome, tot);
		case 4:
			GerarRelatorio(reg, tot);
		case 5:
			break;
	}
}
