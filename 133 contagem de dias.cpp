#include <stdio.h>
#include <stdlib.h>

struct Dma {
    int dia;
    int mes;
    int ano;
};

int diasNoMes(int mes, int ano) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))) {
        return 29;
    }
    return diasPorMes[mes];
}

int contarDias(struct Dma data) {
    int dias = 0;
    for (int ano = 1; ano < data.ano; ++ano) {
        dias += ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) ? 366 : 365;
    }
    for (int mes = 1; mes < data.mes; ++mes) {
        dias += diasNoMes(mes, data.ano);
    }
    dias += data.dia;
    return dias;
}

int diferencaDias(struct Dma d1, struct Dma d2) {
    int dias1 = contarDias(d1);
    int dias2 = contarDias(d2);
    return abs(dias2 - dias1);
}

int main() {
    struct Dma d1, d2;
    printf("Data 1: ");
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    printf("Data 2: ");
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    int diferencaDiasEntreDatas = diferencaDias(d1, d2);
    printf("Número de dias entre as datas: %d\n", diferencaDiasEntreDatas);

    return 0;
}

