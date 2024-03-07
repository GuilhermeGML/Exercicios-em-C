#include <stdio.h>

int buscabinaria2(int x, int n, int v[]) {
    int e, m, d;
    e = -1;
    d = n;
    while (e < d - 1) {
        m = (e + d) / 2;

        if (v[m] < x)
            e = m;
        else
            d = m;
    }
    return d;
}


int main(){
	int vet[15], i, x, pos;
	for(i=0; i<15; i++){
		vet[i] = i;
	}
	printf("Qual num deseja encontra: ");
	scanf("%d", &x);
	pos = buscabinaria2(x, 15, vet);
	printf("%d na posicao %d\n", x, pos);
}
