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

void exibirUltimo(no *lista){
    no p = *lista;
    while(p){
        if(p->prox == NULL){
            printf("%d\n", p->info);
            break;
        }
        p = p->prox;
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
    exibirUltimo(&lista);
    printf("\n");
    exibirElemento(&lista);

    return 0;
}

