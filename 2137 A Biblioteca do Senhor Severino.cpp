#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char vet[1000][5];
    char aux[5];
    for(int i = 0; i < n; i++) {
        scanf("%s", vet[i]);
   }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(vet[i], vet[j]) > 0) { 
                strcpy(aux, vet[i]);
                strcpy(vet[i], vet[j]);
                strcpy(vet[j], aux);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", vet[i]);
    }


    return 0;
}

