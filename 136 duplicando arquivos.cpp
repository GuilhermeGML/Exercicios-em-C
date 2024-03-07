#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro{
	char nome[20];
	int salario;
};

void Cadastro(struct Registro registro[], int tam){
	for(int i=0; i<tam; i++){
		printf("Funcionario %d\n", i+1);
		printf("Nome: ");
		scanf("%s", registro[i].nome);
		printf("Salario ");
		scanf("%d", &registro[i].salario);
	}
}

int main(){
	int t;
	printf("Quantos funcionarios deseja cadastrar: ");
	scanf("%d", &t);
	struct Registro reg[t];
	Cadastro(reg, t);
	
	FILE *arquivo_original, *arquivo_copia;
    char nome_arquivo_original[] = "arquivoA.txt";
    char nome_arquivo_copia[] = "arquivoB.txt";
    char nome[50];
    float salario;

    // Abre o arquivo original para leitura
    arquivo_original = fopen(nome_arquivo_original, "r");
    if (arquivo_original == NULL) {
        perror("Erro ao abrir o arquivo original");
        return 1;
    }

    // Abre o arquivo de cópia para escrita
    arquivo_copia = fopen(nome_arquivo_copia, "w");
    if (arquivo_copia == NULL) {
        perror("Erro ao criar o arquivo de cópia");
        fclose(arquivo_original); // Fecha o arquivo original antes de sair
        return 1;
    }

    // Lê registros do arquivo original e escreve no arquivo de cópia
    while (fscanf(arquivo_original, "%s %f", nome, &salario) == 2) {
        fprintf(arquivo_copia, "%s %.2f\n", nome, salario);
    }

    // Fecha ambos os arquivos
    fclose(arquivo_original);
    fclose(arquivo_copia);

    printf("Registros copiados com sucesso.\n");

    return 0;
	
}
