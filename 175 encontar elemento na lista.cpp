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

int main(){
	listaVazia(&lista);
	int n=0, num;
	while(n<5){
		printf("Digite Num: ");
		scanf("%d", &num);
		inserirElemento(&lista, num);
		n++;
	}
	exibirElemento(&lista);
	printf("\n");
	printf("Qual numero deseja encontrar: ");
	scanf("%d", &num);
	encontrarElemento(&lista, num);
}
