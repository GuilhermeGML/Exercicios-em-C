#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

typedef struct reg *no;
struct reg {
	int info;
	struct reg *prox;
};
no *lista;

void criarLista (no *lista){
	*lista=NULL;
}

void inserirInicioElemento(no *lista, int info){
	no p = (no) malloc(sizeof(struct reg));
	p -> info = info;
	p ->prox = *lista;
	*lista = p;
}

void mostrarElementos(no lista){
	no p = lista;
	printf("\nElementos da Lista: ");
	while (p){
		printf("%d ", p->info);
		p = p->prox;
	}
}

void contarElementos(no lista){
	no p = lista;
	int n=0;
	while(p){
		n++;
		p= p->prox;
	}
	//return n;
}

void incluiFinal(no *lista, int info){
	no p = (no) malloc(sizeof(struct reg));
	p->info=info;
	p->prox=NULL;
	if (*lista==NULL){
		*lista = p;
	} else { 
		no q = *lista;
		while (q->prox){
			q = q->prox;
		}
		q->prox = p;
	}
} 

int remove_inicio (no *lista) {
	if (!*lista){
		return 0;
	}
	no p = *lista;
	*lista = p->prox;
	free (p);
	return 1;
}



int main () {
	int info;
	char resp;
	no lista;
	criarLista (&lista);   // lista = NULL;
	do {
		printf ("\nDigite um numero inteiro: ");
		scanf ("%d",&info);
		inserirInicioElemento (&lista,info);
		printf ("\nContinua (S/N)?");
		do {
		resp = toupper(getchar());
		} while (resp!='N' && resp!='S');
	} while (resp!='N');
	mostrarElementos (lista);
}






