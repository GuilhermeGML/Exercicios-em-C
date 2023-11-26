#include <stdio.h>
 
int main() {
	int cod, np; 
	float val, tot1 , tot2, tot;
	scanf("%d %d %f", &cod, &np, &val);
	tot1 = np * val;
	scanf("%d %d %f", &cod, &np, &val);
	tot2 = np * val;
	tot = tot1 + tot2;
	printf("VALOR A PAGAR: %f\n", tot);

}
