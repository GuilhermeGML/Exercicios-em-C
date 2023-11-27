#include <stdio.h>
#include <math.h>
 
int main() {
	float x1, x2, y1, y2;
	float dist, a , b;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	a = x2 - x1;
	b = y2 - y1;
	dist = sqrt((a * a) + (b * b));
	printf("%.4f\n", dist);
}
