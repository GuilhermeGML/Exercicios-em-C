#include <stdio.h>
 
int main() {
	double n1, n2, n3, tri, cir, trap, quad, ret;
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	tri = (n1 * n3)/2;
	cir = (n3 * n3) * 3.14159;
	trap = ((n1 + n2) * n3)/ 2;
	quad = n2 * n2;
	ret = n1 * n2;
	printf("TRIANGULO: %.3lf\n", tri);
	printf("CIRCULO: %.3lf\n", cir);
	printf("TRAPEZIO: %.3lf\n", trap);
	printf("QUADRADO: %.3lf\n", quad);
	printf("RETANGULO: %.3lf\n", ret);
	
}
