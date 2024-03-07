#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Banda{
	char nome[100];
	char tipo_musica[20];
	int integrantes;
	int ranking;
};

void Cadastro(struct Banda banda[], int tam){
	for (int i=0; i<tam; i++){
		printf("Banda %d\n", i+1);
		printf("Nome da Banda: ");
		scanf("%s", banda[i].nome);
		printf("Tipo de Musica: ");
		scanf("%s", banda[i].tipo_musica);
		printf("Quantidade de integrantes: ");
		scanf("%d", &banda[i].integrantes);
		printf("Colocar 0 se nao estiver nos favoritos\n");
		printf("Ranking: ");
		scanf("%d", &banda[i].ranking);
		printf("\n");
	}
}

void Selecao(struct Banda banda[], int pos){
	printf("Banda %d\n", pos-1);
	printf("Nome da Banda: %s\n", banda[pos-1].nome);
	printf("Tipo de Musica: %s\n", banda[pos-1].tipo_musica);
	printf("Quantidade de integrantes: %d\n", banda[pos-1].integrantes);
	printf("Ranking: %d\n", banda[pos-1].ranking);
	printf("\n");
}

void TipoMusica(struct Banda banda[], char *estilo, int tam){
	for (int i=0; i<tam; i++){
		if(strcmp(banda[i].tipo_musica, estilo) == 0){
			printf("Banda %d\n", i+1);
			printf("Nome da Banda: %s\n", banda[i].nome);
			printf("Tipo de Musica: %s\n", banda[i].tipo_musica);
			printf("Quantidade de integrantes: %d\n", banda[i].integrantes);
			printf("Ranking: %d\n", banda[i].ranking);
			printf("\n");
		}	
	}
}

void NomeBanda(struct Banda banda[], char *nome, int tam){
	for (int i=0; i<tam; i++){
		if(strcmp(banda[i].nome, nome) == 0){
			if(banda[i].ranking <= 5){
				printf("A banda esta no seus favoritos\n", i+1);
			}
		}	
	}
}

void Menu(){
	system("cls");
	printf("Cadastro de Bandas\n");
	printf("1-Encontra Banda pela posicao\n");
	printf("2-Encontra Banda pela estilo musical\n");
	printf("3-Verificar se a banda esta nos favoritos\n");
	printf("4-Sair do Programa\n");
}

int main(){
	int tamanho, posicao, tecla;
	char estilo[20], nome[20];
	struct Banda *bandas = (struct Banda *)malloc(tamanho * sizeof(struct Banda));

	printf("Quantos cadastros deseja fazer? ");
	scanf("%d", &tamanho);
	Cadastro(bandas, tamanho);
	do{
	Menu();
	tecla = getch();
	switch(tecla){
		case 49:
			printf("Qual Banda deseja encontra? ");
			scanf("%d", &posicao);
			Selecao(bandas, posicao);
		case 50:
			printf("Escolha um estilo musical: ");
			scanf("%s", estilo);
			TipoMusica(bandas, estilo, tamanho);
		case 51:
			printf("Escolha o nome da banda: ");
			scanf("%s", nome);
			NomeBanda(bandas, nome, tamanho);	
		case 52:
			printf("Fechando Programa");
			sleep(2);
			break;
	}
	} while(tecla != 27 );
	
	
}
