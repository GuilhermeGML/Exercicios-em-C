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
	*lista == NULL;
}

void adicionarElemento(no *lista, int info){
	no p = (no)malloc(sizeof(struct reg));
	p->info = info;
	p->prox = *lista;
	*lista = p;
}

void exibirElemento(no *lista){
	no p = *lista;
	printf("Elementos: ");
	while(p){
		printf("%d ", p->info);
		p = p->prox;
	}
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
	int n=0, num;
	while(n<5){
		printf("NUM: ");
		scanf("%d", &num);
		adicionarElemento(&lista, num);
		n++;
	}
	exibirElemento(&lista);
	
	printf("NUM: ");
	scanf("%d", &num);
	excluirElemento(&lista, num);
	
	exibirElemento(&lista);
	
}

