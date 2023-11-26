#include <stdio.h>
 
int main() {
	int nf, ht; 
	double dt, sal;	
	scanf("%d", &nf);
	scanf("%d", &ht);
	scanf("%lf", &dt);
	sal = ht * dt;
	printf("NUMBER = %d\n", nf);
	printf("SALARY = %.2lf\n", sal);	
	
}
