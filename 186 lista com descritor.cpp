#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

typedef struct reg *no;
struct reg{
	int info;
	struct reg *prox;
};
no prim, ult;

typedef struct{
	no prim, ult;
	int qte;
} Descritor;
Descritor lista;

void listaVazia(Descritor *lista){
	(*lista).prim = (*lista).ult = NULL;
	(*lista).qte = 0; 
}

void inserirElemento(Descritor *lista, int info){
	no p;
	p = (no)malloc(sizeof(struct reg));
	p->info = info;
	p->prox = (*lista).prim;
	(*lista).prim = p;
	(*lista).qte++;
	if((*lista).qte == 1){
		(*lista).ult = p;
	}
}

void exibirElementos(Descritor *lista){
	if(lista->qte == 0){
		printf("Lista Null\n");
	}
	no p = lista->prim;
	printf("Elementos> ");
	while(p){
		printf("%d ", p->info);
		p = p->prox;
	}
	printf("\n-Tot elementos: %d\n", lista->qte);
}


void encontarElemento(Descritor *lista, int info){
	int tot = 0;
	if(lista->qte == 0){
		printf("lista nula\n");
	}
	no p = lista->prim;
	while(p){
		if(p->info == info){
			tot++;
		}
		p = p->prox;
	}
	if(tot >= 1){
		printf("Elemento %d na lista\n", info);
	} else{
		printf("Elemento noa pertence a lista\n");
	}
}

void removerPrimeiro(Descritor *lista){
	if(lista->qte == 0){
		printf("Lista nula\n");
	}
	no p = (*lista).prim;
	(*lista).prim = p->prox;
	if(lista->qte == 1){
		(*lista).ult = NULL;
	}
	(*lista).qte--;
	free(p);
	return 1;
}

void removerElemento(Descritor *lista, int info) {
    no p = lista->prim;
    no ant = NULL;

    while (p != NULL && p->info != info) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) {
        printf("Elemento %d nao encontrado na lista.\n", info);
        return;
    }

    if (ant == NULL) {
        lista->prim = p->prox;
    } else {
        ant->prox = p->prox;
    }

    free(p);
    lista->qte--;

    if (lista->qte == 0) {
        lista->ult = NULL;
    }
}


int main(){
	listaVazia(&lista);
	
	int n=0, num;
	while(n<5){
		printf("Digite num: ");
		scanf("%d", &num);
		inserirElemento(&lista, num);
		n++;
	}
	exibirElementos(&lista);
	printf("\n");
	printf("Digite num a ser encontrado: ");
	scanf("%d", &num);
	encontarElemento(&lista, num);
}




