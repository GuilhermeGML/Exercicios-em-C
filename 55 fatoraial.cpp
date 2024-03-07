#include <stdio.h>
int main(){
	int n, c, f=1;
	scanf("%d", &n);
	c=n;
	while(c>0){
		f*=c;
		c-=1;
	}
	printf("Fatorial de %d vale %d", n, f);
}
