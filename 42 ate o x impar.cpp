#include <stdio.h>
 
int main() {
	int n, c, imp;
	scanf("%d", &n);
	if(n%2==0){
		imp = n - 1;
		for (c=1; c<=n; c++){
		printf("%d\n",imp);
		imp -= 2;		
		}
	}else{
		imp = n;
		for (c=1; c <=n; c++){
		imp -= 2;
		printf("%d\n",imp);
		
	}
	}
}

