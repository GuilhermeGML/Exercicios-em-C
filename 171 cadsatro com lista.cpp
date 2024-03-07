#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct reg *no;
struct reg{
    int info;
    char nome[20];
    struct reg *prox;
};
no lista;

void criarLista(no *lista){
    *lista = NULL;
}

void adcionarCadastro(no *lista, int info, char nome[20]){
    no p = (no)malloc(sizeof(struct reg));
    p->info = info;
    strcpy(p->nome, nome);
    p->prox = *lista;
    *lista = p;
}

void exibirCadastro(no *lista){
    no p = *lista;
    printf("Elementos da lista: \n");
    while(p){
        printf("%d %s\n", p->info, p->nome);
        p = p->prox;
    }
}

void ordemAlfabetica(no *lista) {
    no atual, proximo, anterior;

    if (*lista == NULL || (*lista)->prox == NULL) {
        // Lista vazia ou com apenas um elemento, já está ordenada
        return;
    }

    atual = *lista;
    *lista = NULL;

    while (atual != NULL) {
        proximo = atual->prox;
        anterior = NULL;

        while (*lista != NULL && strcmp(atual->nome, (*lista)->nome) > 0) {
            anterior = *lista;
            lista = &((*lista)->prox);
        }

        if (anterior != NULL) {
            anterior->prox = atual;
        } else {
            *lista = atual;
        }

        atual->prox = *lista;
        *lista = NULL;
        *lista = &atual->prox;

        atual = proximo;
    }
}


int main(){
    criarLista(&lista);
    int n = 0, valor;
    char name[20];
    while(n < 5){
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);
        printf("Digite um nome: ");
        scanf("%s", name);
        adcionarCadastro(&lista, valor, name);
        n++;
    }
    exibirCadastro(&lista);
    printf("\n");
	ordemAlfabetica(&lista);
	exibirCadastro(&lista);
	return 0;
}

