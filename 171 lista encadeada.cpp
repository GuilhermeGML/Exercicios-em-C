#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

typedef struct reg *no;
struct reg{
	int info;
	struct reg *prox;
};
no lista;

// Criar Lista Vazia
void criarLista(no *lista){
	*lista = NULL;
}

//Inserir um Elemento na Lista
void inserirElemento(no *lista, int info){
	no p = (no)malloc(sizeof(struct reg));
	p->info = info;
	p->prox = *lista;
	*lista = p;
}

//Exibir os elementos da lista
void mostrarElementos(no lista){
	no p = lista;
	printf("Elementos da Lista: ");
	while (p){
		printf("%d ",p->info);
		p = p->prox;
	}
}

// Contar elementos da lista
int contarElementos(no lista){
	no p = lista;
	int n=0;
	while(p){
		n++;
		p = p->prox;
	}
	return n;
}

//Exibir apenas o primeiro
void exibirPrimeiro(no *lista){
    no p = *lista;
    if(*lista){
        printf("%d\n", (*lista)->info);
    }
}

//Exibir apenas o último
void exibirElemento(no *lista){
    no p = *lista;
    while(p){
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

//Encontrar Elemento na Lista
void encontrarElemento(no *lista, int info){
	no p = *lista;
	int tot=0;
	while(p){
		if(p->info == info){
			tot++;			
		}
		p = p->prox;
	}
	if(tot >=1){
		printf("O elemento %d esta na lista", info);
	} else{
		printf("O elemento %d nao esta na lista", info);
	}
	
}

//Inserir após x elemento
void inserirApos(no *lista, int info, int pos){
    no p = *lista;
    while (p) {
        if (p->info == pos) {
            no novo = (no)malloc(sizeof(struct reg));
            novo->info = info;
            novo->prox = p->prox;
            p->prox = novo;
        }
        p = p->prox;
    }
}

//Inserir antes de X elemento
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

//Inserir um elemento no final
void inserirFinal(no *lista, int info){
	no p = (no) malloc(sizeof(struct reg));
	p->info= info;
	p->prox= NULL;
	if(*lista == NULL){
		*lista = p;
	} else{
		no q = *lista;
		while(q->prox){
			q = q->prox;
		}
		q ->prox = p;
	}
}

//Excluir x elemento
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

//Excluir o último elemento
void excluirUltimo(no *lista){
    no p = *lista;
    if (p->prox == NULL) {
        free(p);
        *lista = NULL;
        return;
    }

    while (p->prox->prox != NULL) {
        p = p->prox;
    }

    free(p->prox);
    p->prox = NULL;
}


