#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Registro{
	int numeroMaquina;
	int pecasProduzidas;
};

void CriarArquivos(FILE **maquina1, FILE **maquina2, FILE **maquina3){
	*maquina1 = fopen("Maquina1.dat", "wb");
	*maquina2 = fopen("Maquina2.dat", "wb");
	*maquina3 = fopen("Maquina3.dat", "wb");
	if (*maquina1 == NULL) {
        printf("Erro ao criar o arquivo 1");
        exit(1);
    }
    if (*maquina2 == NULL) {
        printf("Erro ao criar o arquivo 2");
        exit(1);
    }
    if (*maquina3 == NULL) {
        printf("Erro ao criar o arquivo 3");
        exit(1);
    }
}

void CadastrarMaquinas(struct Registro reg, FILE *maquina1, FILE *maquina2, FILE *maquina3) {
    for (int i = 1; i <= 3; i++) {
        printf("Maquina %d\n", i);
        printf("Numero Da Maquina: ");
        scanf("%d", &reg.numeroMaquina);
        printf("Pecas Produzidas: ");
        scanf("%d", &reg.pecasProduzidas);
        if (i == 1) {
            fwrite(&reg, sizeof(struct Registro), 1, maquina1);
        } else if (i == 2) {
            fwrite(&reg, sizeof(struct Registro), 1, maquina2);
        } else if (i == 3) {
            fwrite(&reg, sizeof(struct Registro), 1, maquina3);
        }
    }
}

void ExibirProducao(int maq, FILE *maquina1, FILE *maquina2, FILE *maquina3) {
    struct Registro reg;
    if (maq == 1) {
        fseek(maquina1, 0, SEEK_SET);
        fread(&reg, sizeof(struct Registro), 1, maquina1);
        printf("Maquina 1\n");
        printf("Numero Da Maquina: %d\n", reg.numeroMaquina);
        printf("Peca Produzidas: %d\n", reg.pecasProduzidas);
    } else if (maq == 2) {
        fseek(maquina2, 0, SEEK_SET);
        fread(&reg, sizeof(struct Registro), 1, maquina2);
        printf("Maquina 2\n");
        printf("Numero Da Maquina: %d\n", reg.numeroMaquina);
        printf("Peca Produzidas: %d\n", reg.pecasProduzidas);
    } else if (maq == 3) {
        fseek(maquina3, 0, SEEK_SET);
        fread(&reg, sizeof(struct Registro), 1, maquina3);
        printf("Maquina 3\n");
        printf("Numero Da Maquina: %d\n", reg.numeroMaquina);
        printf("Peca Produzidas: %d\n", reg.pecasProduzidas);
    } else {
        printf("Maquina nao encontrada\n");
    }
}


int main(){
	struct Registro reg;
	int maq;
	FILE *maquina1, *maquina2, *maquina3;
	CriarArquivos(&maquina1, &maquina2, &maquina3);
	CadastrarMaquinas(reg, maquina1, maquina2, maquina3);
	system("cls");
	printf("Qual registro deseja consultar: ");
	scanf("%d", &maq);
    ExibirProducao(maq, maquina1, maquina2, maquina3);	

    fclose(maquina1);
    fclose(maquina2);
    fclose(maquina3);

    getch();
    return 0;
}
