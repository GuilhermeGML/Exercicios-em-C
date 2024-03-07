#include <stdio.h>

int main() {
    int numero, numeroPar, raizQuadrada, diferenca, menorDiferenca;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    numeroPar = numero % 2 == 0 ? numero : numero - 1;
    
    raizQuadrada = 0;
    diferenca = 0;
    menorDiferenca = numero; 
    
    while (raizQuadrada * raizQuadrada <= numero) {
        diferenca = numero - (raizQuadrada * raizQuadrada);
        
        if (diferenca < menorDiferenca) {
            menorDiferenca = diferenca;
            numeroPar = raizQuadrada;
        }
        
        raizQuadrada += 2;
    }
    
    printf("O número par mais próximo da raiz quadrada de %d e: %d\n", numero, numeroPar);
    
    return 0;
}

