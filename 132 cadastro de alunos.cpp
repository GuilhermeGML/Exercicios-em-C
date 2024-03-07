#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro{
	char nome[20];
	int nascimento;
	int rg;
	char sexo[10];
	char endereco[20];
	int ra;
	float cr;	
};

void Cadastro(struct Registro registros[100], int tam){
	for(int i=0; i<tam; i++){
		printf("Cadastro Aluno %d\n", i+1);
		printf("Nome: ");
		scanf("%s", registros[i].nome);
		printf("\nData de Nascimento (sem/): ");
		scanf("%d", &registros[i].nascimento);
		printf("\nRG: ");
		scanf("%d", &registros[i].rg);
		printf("\nSexo: ");
		scanf("%s", registros[i].sexo);
		printf("\nEndereco: ");
		scanf("%s", registros[i].endereco);
		printf("\nRA: ");
		scanf("%d", &registros[i].ra);
		printf("\nCR: ");
		scanf("%f", &registros[i].cr);
	}
}

void NovoAlununo(struct Registro registros[100], int tam){
	printf("Cadastro Aluno %d\n", tam+1);
	printf("Nome: ");
	scanf("%s", registros[tam+1].nome);
	printf("\nData de Nascimento (sem/): ");
	scanf("%d", &registros[tam+1].nascimento);
	printf("\nRG: ");
	scanf("%d", &registros[tam+1].rg);
	printf("\nSexo: ");
	scanf("%s", registros[tam+1].sexo);
	printf("\nEndereco: ");
	scanf("%s", registros[tam+1].endereco);
	printf("\nRA: ");
	scanf("%d", &registros[tam+1].ra);
	printf("\nCR: ");
	scanf("%f", &registros[tam+1].cr);
}

void OrdenarPorNome(struct Registro registros[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tam; j++) {
            if (strcmp(registros[j].nome, registros[minIndex].nome) < 0) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            struct Registro temp = registros[i];
            registros[i] = registros[minIndex];
            registros[minIndex] = temp;
        }
    }
    printf("Cadastro ordenado por nome em ordem alfabetica.\n");
}

void OrdenarPorCR(struct Registro registros[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < tam; j++) {
            if (registros[j].cr > registros[maxIndex].cr) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            struct Registro temp = registros[i];
            registros[i] = registros[maxIndex];
            registros[maxIndex] = temp;
        }
    }
    printf("Cadastro ordenado por CR, maiores primeiro.\n");
}

void BuscarPorRA(struct Registro registros[], int tam) {
    int raBuscado;
    printf("Digite o RA a ser buscado: ");
    scanf("%d", &raBuscado);
    
    int encontrado = 0; //  indicar se o RA foi encontrado

    for (int i = 0; i < tam; i++) {
        if (registros[i].ra == raBuscado) {
            printf("Aluno com RA %d encontrado:\n", raBuscado);
            printf("Nome: %s\n", registros[i].nome);
            printf("Data de Nascimento: %d\n", registros[i].nascimento);
            printf("RG: %d\n", registros[i].rg);
            printf("Sexo: %s\n", registros[i].sexo);
            printf("Endereco: %s\n", registros[i].endereco);
            printf("RA: %d\n", registros[i].ra);
            printf("CR: %.2f\n", registros[i].cr);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Aluno com RA %d nao encontrado.\n", raBuscado);
    }
}

void ImprimirCadastro(struct Registro registros[], int tam) {
    printf("Cadastro atual:\n");
    for (int i = 0; i < tam; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", registros[i].nome);
        printf("Data de Nascimento: %d\n", registros[i].nascimento);
        printf("RG: %d\n", registros[i].rg);
        printf("Sexo: %s\n", registros[i].sexo);
        printf("Endereco: %s\n", registros[i].endereco);
        printf("RA: %d\n", registros[i].ra);
        printf("CR: %.2f\n\n", registros[i].cr);
    }
}


void Menu() {
    printf("Menu:\n");
    printf("1) Inserir um novo aluno no cadastro.\n");
    printf("2) Ordenar o cadastro por nome em ordem alfabetica.\n");
    printf("3) Ordenar o cadastro por CR, maiores primeiro.\n");
    printf("4) Ler o valor de um RA e imprimir os dados do aluno no cadastro com mesmo RA.\n");
    printf("5) Imprimir o cadastro na ordem atual.\n");
    printf("6) Sair.\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int t;
    printf("Quantidade de cadastros: ");
    scanf("%d", &t);

    struct Registro *registros = (struct Registro *)malloc(t * sizeof(struct Registro));

    Cadastro(registros, t);

    int opcao;
    do {
        Menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                NovoAlununo(registros, t);
                break;
            case 2:
                OrdenarPorNome(registros, t);
                break;
            case 3:
                OrdenarPorCR(registros, t);
                break;
            case 4:
                BuscarPorRA(registros, t);
                break;
            case 5:
                ImprimirCadastro(registros, t);
                break;
            case 6:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

}









