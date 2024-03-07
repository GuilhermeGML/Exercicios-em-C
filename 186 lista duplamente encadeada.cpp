#include <stdio.h>
#include <stdlib.h>

typedef struct reg *no;
struct reg {
    int info;
    no ant, prox;
};
no lista;

// Criar Lista Vazia
void criarLista(no *lista) {
    *lista = NULL;
}

// Inserir um Elemento no Início da Lista
void inserirElementoInicio(no *lista, int info) {
    no novo = (no)malloc(sizeof(struct reg));
    novo->info = info;
    novo->ant = NULL;
    novo->prox = *lista;

    if (*lista != NULL) {
        (*lista)->ant = novo;
    }

    *lista = novo;
}

// Exibir os Elementos da Lista
void mostrarElementos(no lista) {
    no p = lista;
    printf("Elementos da Lista: ");
    while (p) {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

// Contar Elementos da Lista
int contarElementos(no lista) {
    no p = lista;
    int n = 0;
    while (p) {
        n++;
        p = p->prox;
    }
    return n;
}

// Exibir apenas o Primeiro
void exibirPrimeiro(no *lista) {
    no p = *lista;
    if (*lista) {
        printf("%d\n", (*lista)->info);
    }
}

// Exibir apenas o Último
void exibirUltimo(no *lista) {
    no p = *lista;
    while (p) {
        if (p->prox == NULL) {
            printf("%d\n", p->info);
            break;
        }
        p = p->prox;
    }
}

// Encontrar Elemento na Lista
void encontrarElemento(no *lista, int info) {
    no p = *lista;
    int tot = 0;
    while (p) {
        if (p->info == info) {
            tot++;
        }
        p = p->prox;
    }
    if (tot >= 1) {
        printf("O elemento %d está na lista\n", info);
    } else {
        printf("O elemento %d não está na lista\n", info);
    }
}

// Inserir Após X Elemento
void inserirApos(no *lista, int info, int pos) {
    no p = *lista;
    while (p) {
        if (p->info == pos) {
            no novo = (no)malloc(sizeof(struct reg));
            novo->info = info;
            novo->ant = p;
            novo->prox = p->prox;

            if (p->prox != NULL) {
                p->prox->ant = novo;
            }

            p->prox = novo;
            break;
        }
        p = p->prox;
    }
}

// Inserir Antes de X Elemento
void inserirAntes(no *lista, int info, int pos) {
    no p = *lista;
    while (p) {
        if (p->info == pos) {
            no novo = (no)malloc(sizeof(struct reg));
            novo->info = info;
            novo->ant = p->ant;
            novo->prox = p;

            if (p->ant != NULL) {
                p->ant->prox = novo;
            } else {
                *lista = novo; // Se o elemento a ser inserido antes for o primeiro
            }

            p->ant = novo;
            break;
        }
        p = p->prox;
    }
}

// Inserir um Elemento no Final
void inserirFinal(no *lista, int info) {
    no p = (no)malloc(sizeof(struct reg));
    p->info = info;
    p->prox = NULL;

    if (*lista == NULL) {
        p->ant = NULL;
        *lista = p;
    } else {
        no q = *lista;
        while (q->prox) {
            q = q->prox;
        }
        q->prox = p;
        p->ant = q;
    }
}

// Excluir X Elemento
void excluirElemento(no *lista, int pos) {
    no p = *lista;
    while (p) {
        if (p->info == pos) {
            if (p->ant != NULL) {
                p->ant->prox = p->prox;
            } else {
                *lista = p->prox; // Se o elemento a ser removido for o primeiro
            }

            if (p->prox != NULL) {
                p->prox->ant = p->ant;
            }

            free(p);
            break;
        }
        p = p->prox;
    }
}

// Excluir o Último Elemento
void excluirUltimo(no *lista) {
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



