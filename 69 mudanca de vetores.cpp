#include <stdio.h>
 
int main() {
 
    int i, inicio=0, fim=19;
    float n[20], novo[20];
    for (i=0; i <20; i++){
        scanf("%f", &n[i]);
    }
    for(i=0; i <20; i++){
    	novo[i] = n[fim];
        printf("N[%i] = %.1f\n", i, novo[i]);
        inicio+=1;
        fim-=1;
    }
 
    return 0;
}
