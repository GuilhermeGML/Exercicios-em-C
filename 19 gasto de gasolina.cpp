#include <stdio.h>
 
int main() {
	int temp, velo;
	float tot;
	scanf("%d", &temp);
	scanf("%d", &velo);
	tot = (temp * velo)/ 12.0;
	printf("%.3f", tot);	
}
