#include <stdio.h>
 
int main() {
 
    int i, perg, vet, n;
    long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for (i=2; i <=60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
	scanf("%d", &perg);
	for(n=1; n<=perg; n++){
		scanf("%d", &vet);
		printf("Fib(%d) = %llu\n", vet, fib[vet]);
	}
 
    return 0;
}

int F (int i){
 if (i == 0)
 return 0;
 if (i == 1)
 return 1;
 return F(i-1) + F(i-2);
}
