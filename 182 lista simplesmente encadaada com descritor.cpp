#include <stdio.h>
#include <stdlib.h>

typedef struct reg {
    int info;
    struct reg *prox;
} no;

typedef struct {
    no *cabeca;
} descritor;

void criarLista(descritor *lista) {
    lista->cabeca = NULL;
}

void inserirElemento(descritor *lista, int info) {
    no *p = (no *)malloc(sizeof(no));
    p->info = info;
    p->prox = lista->cabeca;
    lista->cabeca = p;
}

void mostrarElementos(descritor lista) {
    no *p = lista.cabeca;
    printf("Elementos da Lista: ");
    while (p) {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

int contarElementos(descritor lista) {
    no *p = lista.cabeca;
    int n = 0;
    while (p) {
        n++;
        p = p->prox;
    }
    return n;
}

void exibirPrimeiro(descritor lista) {
    if (lista.cabeca) {
        printf("%d\n", lista.cabeca->info);
    }
}

void exibirUltimo(descritor lista) {
    no *p = lista.cabeca;
    while (p && p->prox) {
        p = p->prox;
    }

    if (p) {
        printf("%d\n", p->info);
    }
}

void encontrarElemento(descritor lista, int info) {
    no *p = lista.cabeca;
    int tot = 0;
    while (p) {
        if (p->info == info) {
            tot++;
        }
        p = p->prox;
    }

    if (tot >= 1) {
        printf("O elemento %d esta na lista\n", info);
    } else {
        printf("O elemento %d nao esta na lista\n", info);
    }
}

void inserirApos(descritor *lista, int info, int pos) {
    no *p = lista->cabeca;
    while (p) {
        if (p->info == pos) {
            no *novo = (no *)malloc(sizeof(no));
            novo->info = info;
            novo->prox = p->prox;
            p->prox = novo;
        }
        p = p->prox;
    }
}

void inserirAntes(descritor *lista, int info, int pos) {
    no *p = lista->cabeca;
    no *anterior = NULL;

    while (p) {
        if (p->info == pos) {
            no *novo = (no *)malloc(sizeof(no));
            novo->info = info;
            novo->prox = p;
            if (anterior == NULL) {
                lista->cabeca = novo;
            } else {
                anterior->prox = novo;
            }

            break;
        }

        anterior = p;
        p = p->prox;
    }
}

void inserirFinal(descritor *lista, int info) {
    no *p = (no *)malloc(sizeof(no));
    p->info = info;
    p->prox = NULL;
    if (lista->cabeca == NULL) {
        lista->cabeca = p;
    } else {
        no *q = lista->cabeca;
        while (q->prox) {
            q = q->prox;
        }
        q->prox = p;
    }
}

void excluirElemento(descritor *lista, int pos) {
    no *p = lista->cabeca;
    if (p->info == pos) {
        lista->cabeca = p->prox;
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

    no *temp = p->prox;
    p->prox = p->prox->prox;
    free(temp);
}

void excluirUltimo(descritor *lista) {
    no *p = lista->cabeca;
    if (p->prox == NULL) {
        free(p);
        lista->cabeca = NULL;
        return;
    }

    while (p->prox->prox != NULL) {
        p = p->prox;
    }

    free(p->prox);
    p->prox = NULL;
}

int main() {
    descritor lista;
    criarLista(&lista);
    int n = 0, num, pos;
    
    while (n < 5) {
        printf("Digite NUM: ");
        scanf("%d", &num);
        inserirElemento(&lista, num);
        n++;
    }

    mostrarElementos(lista);
    printf("\n");
    
    exibirPrimeiro(lista);
    exibirUltimo(lista);

    printf("\n");
    printf("Excluir qual elemento: ");
    scanf("%d", &pos);
    excluirElemento(&lista, pos);

    mostrarElementos(lista);

    return 0;
}

