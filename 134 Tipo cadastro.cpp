#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct DataNascimento {
    int dia;
    int mes;
    int ano;
};

struct TipoReg {
    char Nome[100];
    char RG[20];
    double Salario;
    int Idade;
    char Sexo;
    struct DataNascimento DataNascimento;
};

struct TipoCadastro {
    struct TipoReg funcionario[100];
    int Quant;
};

void IniciaCadastro(struct TipoCadastro *cadastro){
	cadastro->Quant = 0;
}

void LeFuncionarios(struct TipoCadastro cadastro) {
    int numFuncionarios;
    printf("Quantos funcionários deseja cadastrar? ");
    scanf("%d", &numFuncionarios);

    for (int i = 0; i < numFuncionarios; i++) {
        if (cadastro.Quant < 100) { // Verifica se há espaço no vetor
            printf("Funcionário %d:\n", i + 1);
            printf("Nome: ");
            scanf("%s", cadastro.funcionario[cadastro.Quant].Nome);
            printf("RG: ");
            scanf("%s", cadastro.funcionario[cadastro.Quant].RG);
            printf("Salário: ");
            scanf("%lf", &cadastro.funcionario[cadastro.Quant].Salario);
            printf("Idade: ");
            scanf("%d", &cadastro.funcionario[cadastro.Quant].Idade);
            printf("Sexo (M/F): ");
            scanf(" %c", &cadastro.funcionario[cadastro.Quant].Sexo);
            printf("Data de Nascimento (dia mês ano): ");
            scanf("%d %d %d", &cadastro.funcionario[cadastro.Quant].DataNascimento.dia,
                  &cadastro.funcionario[cadastro.Quant].DataNascimento.mes,
                  &cadastro.funcionario[cadastro.Quant].DataNascimento.ano);

            cadastro.Quant++; 
        } else {
            printf("Cadastro cheio. Não é possível adicionar mais funcionários.\n");
            break;
        }
    }

}

void ListaFuncionarios(struct TipoCadastro cadastro){
	for (int i = 0; i < cadastro.Quant; i++) {
        printf("Funcionário %d:\n", i + 1);
        printf("Nome: %s", cadastro.funcionario[i].Nome);
        printf("RG: %s", cadastro.funcionario[i].RG);
        printf("Salário: %lf", cadastro.funcionario[i].Salario);
        printf("Idade: %d", cadastro.funcionario[i].Idade);
        printf("Sexo (M/F): %c", cadastro.funcionario[i].Sexo);
        printf("Data de Nascimento (dia mês ano):%d %d %d", 
			cadastro.funcionario[i].DataNascimento.dia, 
			cadastro.funcionario[i].DataNascimento.mes, 
			cadastro.funcionario[i].DataNascimento.ano);
		printf("\n");
	}
}	

void OrdenarNome(struct TipoCadastro cadastro){
	strcmp(cadastro.funcionario[i].Nome, cadastro.funcionario[i+1].Nome);
	
	
}

int main() {
    struct TipoCadastro cadastro;
	IniciaCadastro(&cadastro);
	LeFuncionarios(cadastro);
	ListaFuncionarios(cadastro);
}

