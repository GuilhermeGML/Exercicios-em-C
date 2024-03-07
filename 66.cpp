#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0, maior, menor, somaImpares = 0, quantidadeImpares = 0, quantidadePares = 0;
    float media, mediaImpares, porcentagemPares;
    
    printf("Digite os números (digite 100000 para encerrar):\n");
    
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
    
    printf("Soma dos números: %d\n", soma);
    printf("Quantidade de números: %d\n", quantidade);
    printf("Média dos números: %.2f\n", media);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média dos números ímpares: %.2f\n", mediaImpares);
    printf("Porcentagem de números pares: %.2f%%\n", porcentagemPares);
}

