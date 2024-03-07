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
	printf("Elementos da lsita: ");
	while(p){
		printf("%d ", p->info);
		p = p->prox;
	}
}

void contarElementos(no *lista){
	int tot=0;
	no p = *lista;
	printf("Total de elementos: ");
	while (p){
		tot++;
		p = p->prox;
	}
	printf("%d\n", tot);
}

int main(){
	listaVazia(&lista);
	int n=0, num;
	while(n<5){
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		inserirElemento(&lista, num);
		n++;
	}
	exibirElemento(&lista);
	printf("\n");
	contarElementos(&lista);
	
}
