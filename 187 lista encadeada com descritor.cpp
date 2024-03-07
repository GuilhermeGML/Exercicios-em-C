#include <stdio.h>
#include <stdlib.h>

typedef struct reg *no;
struct reg {
    int info;
    struct reg *prox;
};

typedef struct {
    no prim, ult;
    int qte;
} Descritor;

// Criar Lista Vazia com Descritor
void criarLista(Descritor *lista) {
    lista->prim = lista->ult = NULL;
    lista->qte = 0;
}

// Inserir um Elemento na Lista com Descritor
void inserirElemento(Descritor *lista, int info) {
    no p = (no)malloc(sizeof(struct reg));
    p->info = info;
    p->prox = lista->prim;
    lista->prim = p;
    lista->qte++;
    if (lista->qte == 1) {
        lista->ult = p;
    }
}

// Exibir os elementos da lista com Descritor
void mostrarElementos(Descritor *lista) {
    no p = lista->prim;
    printf("Elementos da Lista: ");
    while (p) {
        printf("%d ", p->info);
        p = p->prox;
    }
}

// Contar elementos da lista com Descritor
int contarElementos(Descritor *lista) {
    return lista->qte;
}

// Exibir apenas o primeiro elemento com Descritor
void exibirPrimeiro(Descritor *lista) {
    if (lista->prim) {
        printf("%d\n", lista->prim->info);
    }
}

// Exibir apenas o último elemento com Descritor
void exibirUltimo(Descritor *lista) {
    if (lista->ult) {
        printf("%d\n", lista->ult->info);
    }
}

// Encontrar Elemento na Lista com Descritor
void encontrarElemento(Descritor *lista, int info) {
    no p = lista->prim;
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

// Inserir após x elemento na Lista com Descritor
void inserirApos(Descritor *lista, int info, int pos) {
    no p = lista->prim;
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

// Inserir antes de x elemento na Lista com Descritor
void inserirAntes(Descritor *lista, int info, int pos) {
    no p = lista->prim;
    no anterior = NULL;

    while (p) {
        if (p->info == pos) {
            no novo = (no)malloc(sizeof(struct reg));
            novo->info = info;
            novo->prox = p;
            if (anterior == NULL) {
                lista->prim = novo;
            } else {
                anterior->prox = novo;
            }

            break;
        }

        anterior = p;
        p = p->prox;
    }
}

// Inserir um elemento no final da Lista com Descritor
void inserirFinal(Descritor *lista, int info) {
    no p = (no)malloc(sizeof(struct reg));
    p->info = info;
    p->prox = NULL;
    if (lista->prim == NULL) {
        lista->prim = p;
    } else {
        no q = lista->prim;
        while (q->prox) {
            q = q->prox;
        }
        q->prox = p;
    }
    lista->ult = p;
    lista->qte++;
}

// Excluir x elemento da Lista com Descritor
void excluirElemento(Descritor *lista, int pos) {
    no p = lista->prim;
    no ant = NULL;

    while (p != NULL && p->info != pos) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) {
        printf("Elemento %d não encontrado na lista.\n", pos);
        return;
    }

    if (ant == NULL) {
        // Remoção do primeiro elemento
        lista->prim = p->prox;
    } else {
        ant->prox = p->prox;
    }

    free(p);
    lista->qte--;

    if (lista->qte == 0) {
        // A lista ficou vazia
        lista->ult = NULL;
    }
}

// Excluir o último elemento da Lista com Descritor
void excluirUltimo(Descritor *lista) {
    no p = lista->prim;
    no ant = NULL;

    while (p->prox != NULL) {
        ant = p;
        p = p->prox;
    }

    if (ant == NULL) {
        // Remoção do primeiro elemento
        lista->prim = NULL;
    } else {
        ant->prox = NULL;
    }

    free(p);
    lista->qte--;

    if (lista->qte == 0) {
        // A lista ficou vazia
        lista->ult = NULL;
    }
}



