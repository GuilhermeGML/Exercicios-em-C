#include <stdio.h>
#include <math.h>

int main() {
    int numQuadros = 64;
    long long totalGraos = 0;
    
    for (int i = 1; i <= numQuadros; i++) {
        long long graosQuadro = pow(2, i - 1);
        totalGraos += graosQuadro;
    }
    
    printf("O monge esperava receber um total de %lld graos.\n", totalGraos);

}

