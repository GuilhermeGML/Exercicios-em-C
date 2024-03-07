#include <stdio.h>
 
int main() {
 
    int i;
    float a[100];
    scanf("%f", &num);
    for (i=0; i <100; i++){
        scanf("%f", &a[i]);
    }
    for(i=0; i <100; i++){
    if(a[i]<=10){
        printf("A[%i] = %.1f\n", i, a[i]);
    }
    }
 
    return 0;
}
