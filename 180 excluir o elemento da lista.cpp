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

void excluirElemento(no *lista, int pos){
    no p = *lista;
    if (p->info == pos) {
        *lista = p->prox;
        free(p);
        return;
    }

    while (p->prox->prox != NULL && p->prox->info != pos) {
        p = p->prox;
    }

    if (p->prox == NULL) {
        printf("Elemento %d nao encontrado na lista.\n", pos);
        return;
    }

    no temp = p->prox;
    p->prox = p->prox->prox;
    free(temp);
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
	printf("Excluir qual elemento: ");
	scanf("%d", &pos);
	excluirElemento(&lista,pos);
	
	exibirElemento(&lista);
}
