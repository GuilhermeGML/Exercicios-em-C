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

void adicionarElemento(no *lista, int info){
	no p = (no)malloc(sizeof(struct reg));
	p->info = info;
	p->prox = *lista;
	*lista = p;
}

void exibirElementos(no *lista){
	no p = *lista;
	printf("Elementos: ");
	while(p){
		printf("%d ", p->info);
		p = p->prox;
	}
}

void totalElementos(no *lista){
	no p = *lista;
	int tot=0;
	while(p){
		if(p != NULL){
			tot++;
		}
		p = p->prox;	
	}
	printf("Ha %d elementos", tot);
}

int main(){
	listaVazia(&lista);
	int n=0, num;
	while(n<5){
		printf("Digite NUM: ");
		scanf("%d", &num);
		adicionarElemento(&lista, num);
		n++;
	}
	exibirElementos(&lista);
	printf("\n");
	totalElementos(&lista);
}
