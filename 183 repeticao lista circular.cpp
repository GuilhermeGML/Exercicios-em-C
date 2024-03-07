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

void repeticao(no *lista, int info){
	no p = *lista;
	int tot=0;
	while(p){
		if(p->info == info){
			tot++;
		}
		p = p->prox;
	}
	printf("O elemento %d aparece %d vezes", info, tot);
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
	repeticao(&lista, num);
	
}

