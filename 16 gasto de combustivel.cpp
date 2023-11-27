#include <stdio.h>
 
int main() {
	int km;
	float lit, tot;
	scanf("%d", &km);
	scanf("%f", &lit);
	tot = km / lit;
	printf("%.3f", tot);
}
