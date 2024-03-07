#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct reg *no;
struct reg{
	int info;
	struct reg *prox;
};
no lista;

void listaVazia(no *lista){
    *lista = NULL;
}

void inserirElemento(no *lista, int info){
	no p = (no)malloc(sizeof(struct reg));
	p->info = info;
	p->prox = *lista;
	*lista = p;
}

void exibirElemento(no *lista){
    no p = *lista;
    while(p){
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

void inserirAntes(no *lista, int info, int pos) {
    no p = *lista;
    no anterior = NULL;

    while (p) {
        if (p->info == pos) {
            no novo = (no)malloc(sizeof(struct reg));
            novo->info = info;
            novo->prox = p;
            if (anterior == NULL) {
                *lista = novo;
            } else {
                anterior->prox = novo;
            }

            break; 
        }

        anterior = p;
        p = p->prox;
    }
}


int main(){
	listaVazia(&lista);
	int n=0, num, pos;
	while(n<5){
		printf("Digite Num: ");
		scanf("%d", &num);
		inserirElemento(&lista, num);
		n++;
	}
	exibirElemento(&lista);
	printf("\n");
	printf("Qual numero deseja inserir: ");
	scanf("%d", &num);
	printf("Antes qual elemento: ");
	scanf("%d", &pos);
	inserirAntes(&lista, num, pos);
	printf("\n");
	exibirElemento(&lista);
	
}
