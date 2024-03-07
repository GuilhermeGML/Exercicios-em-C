#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0, maior, menor, somaImpares = 0, quantidadeImpares = 0, quantidadePares = 0;
    float media, mediaImpares, porcentagemPares;
    
    printf("Digite os n�meros (digite 100000 para encerrar):\n");
    
    maior = -1000000; 
    menor = 1000000; 
    
    while (1) {
        scanf("%d", &numero);
        
        if (numero == 100000) {
            break;
        }
        
        soma += numero;
        quantidade++;
        
        if (numero > maior) {
            maior = numero;
        }
        
        if (numero < menor) {
            menor = numero;
        }
        
        if (numero % 2 != 0) {
            somaImpares += numero;
            quantidadeImpares++;
        } else {
            quantidadePares++;
        }
    }
    
    media = (float)soma / quantidade;
    mediaImpares = (float)somaImpares / quantidadeImpares;
    porcentagemPares = (float)quantidadePares / quantidade * 100;
    
    printf("Soma dos n�meros: %d\n", soma);
    printf("Quantidade de n�meros: %d\n", quantidade);
    printf("M�dia dos n�meros: %.2f\n", media);
    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);
    printf("M�dia dos n�meros �mpares: %.2f\n", mediaImpares);
    printf("Porcentagem de n�meros pares: %.2f%%\n", porcentagemPares);
}

