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

void excluirPrimeiro(no *lista){
    if (*lista != NULL){
        no temp = *lista;
        *lista = (*lista)->prox;
        free(temp);
    } else {
        printf("A lista ja esta vazia.\n");
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
	excluirPrimeiro(&lista);
	
	exibirElemento(&lista);
}
