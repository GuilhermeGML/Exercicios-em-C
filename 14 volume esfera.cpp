#include <stdio.h>

int main() {
    float tempo, vel_media, distancia, consumo;
    printf("Informe o tempo de viagem em horas: ");
    scanf("%f", &tempo);
    printf("Informe a velocidade m�dia em km/h: ");
    scanf("%f", &vel_media);
    distancia = tempo * vel_media;
    consumo = distancia / 12; 
    printf("Dist�ncia percorrida: %.2f km\n", distancia);
    printf("Consumo de combust�vel: %.2f litros\n", consumo);
    
}




