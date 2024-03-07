#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro {
    char nome[20];
    char rua[20];
    int numero;
    int telefone;
    char cidade[20];
    char estado[20];
};

void Cadastro(struct Registro reg[], int tam) {
    for(int i = 0; i < tam; i++) {
        printf("Pessoa %d\n", i+1); 
        printf("Nome: ");
        scanf("%s", reg[i].nome);
        printf("Rua: ");
        scanf("%s", reg[i].rua);
        printf("Numero: ");
        scanf("%d", &reg[i].numero);
        printf("Telefone: ");
        scanf("%d", &reg[i].telefone);
        printf("Cidade: ");
        scanf("%s", reg[i].cidade);
        printf("Estado: ");
        scanf("%s", reg[i].estado);
    }
}

void CriarArquivo(struct Registro reg[], int tam) {
    FILE *arquivos;
    arquivos = fopen("Registro.dat", "wb");
    if (arquivos == NULL) {
        perror("Erro ao criar o arquivo");
        exit(1);
    }
    fwrite(reg, sizeof(struct Registro), tam, arquivos);
    fclose(arquivos); 
}

void ListarArquivo() {
    FILE *arquivos;
    arquivos = fopen("Registro.dat", "rb");
    if (arquivos == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    struct Registro reg;

    while (fread(&reg, sizeof(struct Registro), 1, arquivos) == 1) {
        printf("Nome: %s\n", reg.nome);
        printf("Rua: %s\n", reg.rua);
        printf("Numero: %d\n", reg.numero);
        printf("Cidade: %s\n", reg.cidade);
        printf("Estado: %s\n", reg.estado);
    }

    fclose(arquivos);
}

void RemoverDados(char nome[]) {
    FILE *arquivos;
    arquivos = fopen("Registro.dat", "rb+");
    if (arquivos == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    struct Registro reg;
    int encontrado = 0;

    while (fread(&reg, sizeof(struct Registro), 1, arquivos) == 1) {
        if (strcmp(reg.nome, nome) == 0) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        fseek(arquivos, -sizeof(struct Registro), SEEK_CUR);
        struct Registro regVazio = { "", "", 0, 0, "", "" };
        fwrite(&regVazio, sizeof(struct Registro), 1, arquivos);
        printf("Registro removido com sucesso.\n");
    } else {
        printf("Registro não encontrado.\n");
    }

    fclose(arquivos);
}

int main() {
    struct Registro reg[20];
    int t;
    printf("Quantos funcionarios deseja registrar: ");
    scanf("%d", &t);
    Cadastro(reg, t);
    CriarArquivo(reg, t);
    system("cls");
    ListarArquivo();
    char nomeRemover[20];
    printf("Digite o nome da pessoa que deseja remover: ");
    scanf("%s", nomeRemover);
    RemoverDados(nomeRemover);
    system("cls");
    ListarArquivo();
    getch(); 
    return 0;
}

