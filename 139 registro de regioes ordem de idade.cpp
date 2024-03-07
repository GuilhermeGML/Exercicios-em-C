#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>

struct Registro {
    char sexo[10];
    int idade;
    int salario;
    char estadoCivil[20];
    int nDependentes; 
    int patrimonio;
    int calorias;
    int grauInstrucao;
};

void CadastarPessoas1(struct Registro reg[], int quant, FILE *regiao1) {
    for (int i = 0; i < quant; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Sexo: ");
        scanf("%s", reg[i].sexo);
        printf("Idade: ");
        scanf("%d", &reg[i].idade);
        printf("Salario: ");
        scanf("%d", &reg[i].salario);
        printf("Estado Civil: ");
        scanf("%s", reg[i].estadoCivil);
        printf("Numero de Dependentes: ");
        scanf("%d", &reg[i].nDependentes);
        printf("Patrimonio: ");
        scanf("%d", &reg[i].patrimonio);
        printf("Calorias: ");
        scanf("%d", &reg[i].calorias);
        printf("Grau de Instrucao: ");
        scanf("%d", &reg[i].grauInstrucao);
    }
    fwrite(reg, sizeof(struct Registro), quant, regiao1);
}

void CadastarPessoas2(struct Registro reg[], int quant, FILE *regiao2) {
    for (int i = 0; i < quant; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Sexo: ");
        scanf("%s", reg[i].sexo);
        printf("Idade: ");
        scanf("%d", &reg[i].idade);
        printf("Salario: ");
        scanf("%d", &reg[i].salario);
        printf("Estado Civil: ");
        scanf("%s", reg[i].estadoCivil);
        printf("Numero de Dependentes: ");
        scanf("%d", &reg[i].nDependentes);
        printf("Patrimonio: ");
        scanf("%d", &reg[i].patrimonio);
        printf("Calorias: ");
        scanf("%d", &reg[i].calorias);
        printf("Grau de Instrucao: ");
        scanf("%d", &reg[i].grauInstrucao);
    }
    fwrite(reg, sizeof(struct Registro), quant, regiao2);
}

void CadastarPessoas3(struct Registro reg[], int quant, FILE *regiao3) {
    for (int i = 0; i < quant; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Sexo: ");
        scanf("%s", reg[i].sexo);
        printf("Idade: ");
        scanf("%d", &reg[i].idade);
        printf("Salario: ");
        scanf("%d", &reg[i].salario);
        printf("Estado Civil: ");
        scanf("%s", reg[i].estadoCivil);
        printf("Numero de Dependentes: ");
        scanf("%d", &reg[i].nDependentes);
        printf("Patrimonio: ");
        scanf("%d", &reg[i].patrimonio);
        printf("Calorias: ");
        scanf("%d", &reg[i].calorias);
        printf("Grau de Instrucao: ");
        scanf("%d", &reg[i].grauInstrucao);
    }
    fwrite(reg, sizeof(struct Registro), quant, regiao3);
}

void OrdemCrescente(FILE *regiao1, FILE *regiao2, FILE *regiao3) {
    struct Registro reg;
    struct Registro registros[300];

    fseek(regiao1, 0, SEEK_SET);
    fread(&reg, sizeof(struct Registro), 1, regiao1);
    int i = 0;
    while (!feof(regiao1)) {
        registros[i] = reg;
        i++;
        fread(&reg, sizeof(struct Registro), 1, regiao1);
    }

    fseek(regiao2, 0, SEEK_SET);
    fread(&reg, sizeof(struct Registro), 1, regiao2);
    while (!feof(regiao2)) {
        registros[i] = reg;
        i++;
        fread(&reg, sizeof(struct Registro), 1, regiao2);
    }

    fseek(regiao3, 0, SEEK_SET);
    fread(&reg, sizeof(struct Registro), 1, regiao3);
    while (!feof(regiao3)) {
        registros[i] = reg;
        i++;
        fread(&reg, sizeof(struct Registro), 1, regiao3);
    }

    int j;
    struct Registro temp;
    for (int a = 0; a < i - 1; a++) {
        for (j = 0; j < i - a - 1; j++) {
            if (registros[j].idade > registros[j + 1].idade) {
                temp = registros[j];
                registros[j] = registros[j + 1];
                registros[j + 1] = temp;
            }
        }
    }

    for (int k = 0; k < i; k++) {
        printf("Pessoa %d\n", k + 1);
        printf("Sexo: %s\n", registros[k].sexo);
        printf("Idade: %d\n", registros[k].idade);
        printf("Salario: %d\n", registros[k].salario);
        printf("Estado Civil: %s\n", registros[k].estadoCivil);
        printf("Numero de Dependentes: %d\n", registros[k].nDependentes);
        printf("Patrimonio: %d\n", registros[k].patrimonio);
        printf("Calorias: %d\n", registros[k].calorias);
        printf("Grau de Instrucao: %d\n", registros[k].grauInstrucao);
    }
}

int main() {
    struct Registro reg[100];
    FILE *regiao1, *regiao2, *regiao3;
    regiao1 = fopen("Regiao 1.dat", "wb");
    regiao2 = fopen("Regiao 2.dat", "wb");
    regiao3 = fopen("Regiao 3.dat", "wb");
    if (regiao1 == NULL || regiao2 == NULL || regiao3 == NULL) {
        printf("Erro ao criar um dos arquivos\n");
        exit(1);
    }
    int r1, r2, r3;
    printf("Quantas pessoas da Regiao 1: ");
    scanf("%d", &r1);
    CadastarPessoas1(reg, r1, regiao1);
    fclose(regiao1);
    system("cls");
    printf("Quantas pessoas da Regiao 2: ");
    scanf("%d", &r2);
    CadastarPessoas2(reg, r2, regiao2);
    fclose(regiao2);
    system("cls");
    printf("Quantas pessoas da Regiao 3: ");
    scanf("%d", &r3);
    CadastarPessoas3(reg, r3, regiao3);
    fclose(regiao3);
    system("cls");
    OrdemCrescente(regiao1, regiao2, regiao3);
    return 0;
}

