#include <stdio.h>
#include <string.h>

struct Paises{
    char nome[20];
    int ouro;
    int prata;
    int bronze;
};

int main(){
    struct Paises pais[1000];
    int n, aux;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", pais[i].nome);
        scanf("%d", &pais[i].ouro);
        scanf("%d", &pais[i].prata);
        scanf("%d", &pais[i].bronze);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(pais[i].ouro < pais[j].ouro || 
               (pais[i].ouro == pais[j].ouro && pais[i].prata < pais[j].prata) || 
               (pais[i].ouro == pais[j].ouro && pais[i].prata == pais[j].prata && pais[i].bronze < pais[j].bronze) ||
               (pais[i].ouro == pais[j].ouro && pais[i].prata == pais[j].prata && pais[i].bronze == pais[j].bronze && strcmp(pais[i].nome, pais[j].nome) > 0)
            ) { 
                // Troca de posições
                struct Paises temp = pais[i];
                pais[i] = pais[j];
                pais[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s %d %d %d\n", pais[i].nome, pais[i].ouro, pais[i].prata, pais[i].bronze);
    }

    return 0;
}

