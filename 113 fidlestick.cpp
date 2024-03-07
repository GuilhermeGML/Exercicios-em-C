#include <stdio.h>
#include <math.h>

int main() {
    int Xf, Yf, Xi, Yi, Vi, R1, R2;
    double distancia, tempo;
    while(scanf("%d %d %d %d %d %d %d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF){
    	 distancia = sqrt(pow(Xf - Xi, 2) + pow(Yf - Yi, 2)) + (Vi * 1.50);
    	tempo = R1 + R2;
    	if (tempo < distancia) {
    	    printf("N\n");
    	} else {
     	   printf("Y\n");
    	}
	}
}

