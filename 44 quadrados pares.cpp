#include <stdio.h>
int main(){
	int n, c;
	scanf("%d", &n);
	for(c=2; c<=n; c++){
		if(c%2==0){
			printf("%d ^ 2 = %d\n", c, c*c);
		}
	}
}
