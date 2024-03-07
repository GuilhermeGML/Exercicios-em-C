#include <stdio.h> 
#include <math.h>
int main() {
    int n, i, primeiro = 0, segundo = 1, proximo, resp;
    do{
    printf("Digite termo de Fibonacci: ")
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", primeiro);
        } else if (i == 1) {
            printf(" %d", segundo);
        } else {
            proximo = primeiro + segundo;
            printf(" %d", proximo);
            primeiro = segundo;
            segundo = proximo;
        }
    }
    printf("\n");
    printf("Deseja continuar 1=Sim 0=Nao: ");
    scanf("%d", &resp);
	} while(resp==1); 
}
