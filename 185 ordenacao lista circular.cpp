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

void ordenacao(no *lista) {
    if (*lista == NULL || (*lista)->prox == NULL) {
        return; 
    }

    no p = *lista;
    no sorted = NULL; 

    while (p != NULL) {
        no proximo = p->prox;
        if (sorted == NULL || p->info < sorted->info) {
            p->prox = sorted;
            sorted = p;
        } else {
            no temp = sorted;
            while (temp->prox != NULL && temp->prox->info < p->info) {
                temp = temp->prox;
            }
            p->prox = temp->prox;
            temp->prox = p;
        }
        p = proximo;
    }

    *lista = sorted;  
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
	

	ordenacao(&lista);
	exibirElemento(&lista);
	
}

